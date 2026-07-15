#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_FCA657D695DD9485;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B68FC00)
#define RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B690150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarSkillConfigRow_TypeDefinitionIndex = 13286;

	class ILBattleAvatarSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_FCA657D695DD9485*>* ParamList; // 0x10
		::System::String* SkillTriggerKey; // 0x18
		::System::String* SkillNameKey; // 0x20
		::RPG::Client::TextID SimpleSkillDesc; // 0x28
		::RPG::Client::TextID SkillName; // 0x38
		::RPG::GameCore::FixPoint InitialCD; // 0x48
		::System::UInt32 RatedPromotionID; // 0x50
		::RPG::GameCore::AttackType AttackType; // 0x54
		::System::UInt32 ID; // 0x58
		::System::UInt32 MaxLevel; // 0x5C
		::RPG::GameCore::FixPoint CoolDown; // 0x60
		::RPG::Client::TextID SkillDesc; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
