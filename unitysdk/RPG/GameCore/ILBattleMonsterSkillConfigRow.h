#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D20BD80)
#define RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20C180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleMonsterSkillConfigRow_TypeDefinitionIndex = 13688;

	class ILBattleMonsterSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* SkillTriggerKey; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::RPG::GameCore::AttackType AttackType; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::GameCore::FixPoint CoolDown; // 0x28
		::RPG::Client::TextID SkillDesc; // 0x30
		::RPG::GameCore::FixPoint InitialCD; // 0x40
		::RPG::Client::TextID SkillName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
