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

#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3AE140)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AF010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritSkillRow_TypeDefinitionIndex = 10908;

	class AetherDivideSpiritSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillIcon; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x18
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x20
		::System::String* SkillTriggerKey; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x30
		::System::String* UltraSkillIcon; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x40
		::RPG::Client::TextID SkillTag; // 0x48
		::RPG::GameCore::FixPoint SPBase; // 0x58
		::RPG::Client::TextID SkillDesc; // 0x60
		::RPG::Client::TextID SkillTypeDesc; // 0x70
		::RPG::GameCore::AttackType AttackType; // 0x80
		::System::UInt32 SkillID; // 0x84
		::RPG::GameCore::AetherSpiritType PropertyType; // 0x88
		::RPG::GameCore::SkillEffect SkillEffect; // 0x8C
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x90
		::RPG::Client::TextID SkillName; // 0x98
		::RPG::GameCore::FixPoint BPNeed; // 0xA8
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xB0
		::RPG::GameCore::FixPoint BPAdd; // 0xB8
		::RPG::Client::TextID SimpleSkillDesc; // 0xC0
		::RPG::GameCore::FixPoint SPNeed; // 0xD0

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
