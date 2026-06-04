#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194623D0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194632A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritSkillRow_TypeDefinitionIndex = 10503;

	class AetherDivideSpiritSkillRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillIcon; // 0x10
		::System::String* SkillIcon; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::System::String* SkillTriggerKey; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x38
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x40
		::RPG::Client::TextID SkillTag; // 0x48
		::RPG::Client::TextID SkillTypeDesc; // 0x58
		::RPG::GameCore::AttackType AttackType; // 0x68
		::System::UInt32 SkillID; // 0x6C
		::RPG::GameCore::SkillEffect SkillEffect; // 0x70
		::RPG::GameCore::AetherSpiritType PropertyType; // 0x74
		::RPG::GameCore::FixPoint SPNeed; // 0x78
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x80
		::RPG::Client::TextID SkillName; // 0x88
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x98
		::RPG::GameCore::FixPoint BPNeed; // 0xA0
		::RPG::Client::TextID SkillDesc; // 0xA8
		::RPG::Client::TextID SimpleSkillDesc; // 0xB8
		::RPG::GameCore::FixPoint BPAdd; // 0xC8
		::RPG::GameCore::FixPoint SPBase; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideSpiritSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideSpiritSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
