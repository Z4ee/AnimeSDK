#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0C0E0)
#define RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0C4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleMonsterSkillConfigRow_TypeDefinitionIndex = 13068;

	class ILBattleMonsterSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* SkillTriggerKey; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::RPG::Client::TextID SkillName; // 0x20
		::RPG::GameCore::FixPoint InitialCD; // 0x30
		::RPG::GameCore::FixPoint CoolDown; // 0x38
		::System::UInt32 ID; // 0x40
		::RPG::GameCore::AttackType AttackType; // 0x44
		::RPG::Client::TextID SkillDesc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
