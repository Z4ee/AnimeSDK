#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x194CD670)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194CE260)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x194CD5A0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x194CD600)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194CEEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventSkillRow_TypeDefinitionIndex = 12242;

	class BattleEventSkillRow : public ::System::Object
	{
	public:
		::System::String* CutinPath; // 0x10
		::System::String* UltraSkillIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::System::String* SkillTriggerKey; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x30
		::System::String* SkillIcon; // 0x38
		::System::String* SkillButtonEffType; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x48
		::RPG::GameCore::FixPoint SPNeed; // 0x50
		::RPG::GameCore::AttackType AttackType; // 0x58
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x5C
		::RPG::Client::TextID SkillNeed; // 0x60
		::RPG::GameCore::FixPoint DelayRatio; // 0x70
		::System::Int32 StanceDamageDisplay; // 0x78
		::RPG::GameCore::SkillEffect SkillEffect; // 0x7C
		::RPG::Client::TextID SkillTypeDesc; // 0x80
		::RPG::Client::TextID SimpleSkillDesc; // 0x90
		::RPG::Client::TextID SkillName; // 0xA0
		::RPG::GameCore::FixPoint BPNeed; // 0xB0
		::RPG::GameCore::FixPoint SPAdd; // 0xB8
		::RPG::Client::TextID SkillTag; // 0xC0
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xD0
		::RPG::Client::TextID SkillDesc; // 0xD8
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xE8
		::RPG::GameCore::FixPoint SPBase; // 0xF0
		::RPG::GameCore::FixPoint BPAdd; // 0xF8
		::System::UInt32 SkillID; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventSkillRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
