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

#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D45D210)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D45DE10)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D45D150)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D45D1B0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D45EA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventSkillRow_TypeDefinitionIndex = 12859;

	class BattleEventSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::String* CutinPath; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x28
		::System::String* SkillIcon; // 0x30
		::System::String* SkillButtonEffType; // 0x38
		::System::String* UltraSkillIcon; // 0x40
		::System::String* SkillTriggerKey; // 0x48
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x50
		::RPG::GameCore::FixPoint DelayRatio; // 0x58
		::RPG::GameCore::FixPoint SPNeed; // 0x60
		::RPG::Client::TextID SkillNeed; // 0x68
		::RPG::Client::TextID SimpleSkillDesc; // 0x78
		::RPG::Client::TextID SkillDesc; // 0x88
		::RPG::GameCore::FixPoint BPNeed; // 0x98
		::RPG::Client::TextID SkillTag; // 0xA0
		::RPG::Client::TextID SkillName; // 0xB0
		::System::Int32 StanceDamageDisplay; // 0xC0
		::RPG::GameCore::AttackType AttackType; // 0xC4
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xC8
		::RPG::GameCore::FixPoint SPBase; // 0xD0
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xD8
		::RPG::GameCore::FixPoint BPAdd; // 0xE0
		::RPG::GameCore::FixPoint SPAdd; // 0xE8
		::RPG::Client::TextID SkillTypeDesc; // 0xF0
		::RPG::GameCore::SkillEffect SkillEffect; // 0x100
		::System::UInt32 SkillID; // 0x104

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
