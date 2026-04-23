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

#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x186F9FD0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186FABB0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x186F9F00)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x186F9F60)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186FB800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventSkillRow_TypeDefinitionIndex = 12153;

	class BattleEventSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* SkillTriggerKey; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x20
		::System::String* CutinPath; // 0x28
		::System::String* SkillIcon; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x38
		::System::String* UltraSkillIcon; // 0x40
		::System::String* SkillButtonEffType; // 0x48
		::RPG::Client::TextID SkillNeed; // 0x50
		::RPG::GameCore::FixPoint BPNeed; // 0x60
		::RPG::Client::TextID SkillTypeDesc; // 0x68
		::RPG::Client::TextID SimpleSkillDesc; // 0x78
		::RPG::GameCore::FixPoint SPNeed; // 0x88
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x90
		::System::UInt32 SkillID; // 0x94
		::RPG::GameCore::FixPoint SPAdd; // 0x98
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xA0
		::RPG::Client::TextID SkillDesc; // 0xA8
		::RPG::GameCore::FixPoint BPAdd; // 0xB8
		::RPG::Client::TextID SkillName; // 0xC0
		::RPG::GameCore::FixPoint SPBase; // 0xD0
		::System::Int32 StanceDamageDisplay; // 0xD8
		::RPG::GameCore::AttackType AttackType; // 0xDC
		::RPG::GameCore::SkillEffect SkillEffect; // 0xE0
		::RPG::GameCore::FixPoint DelayRatio; // 0xE8
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xF0
		::RPG::Client::TextID SkillTag; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleEventSkillRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleEventSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
