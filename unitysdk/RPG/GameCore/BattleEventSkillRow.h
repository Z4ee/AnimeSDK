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

#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x16FD65F0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FD71D0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x16FD6520)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x16FD6580)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD7E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventSkillRow_TypeDefinitionIndex = 11740;

	class BattleEventSkillRow : public ::System::Object
	{
	public:
		::System::String* CutinPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x18
		::System::String* UltraSkillIcon; // 0x20
		::System::String* SkillButtonEffType; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x30
		::System::String* SkillTriggerKey; // 0x38
		::System::String* SkillIcon; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x48
		::RPG::GameCore::FixPoint SPNeed; // 0x50
		::RPG::Client::TextID SkillTypeDesc; // 0x58
		::RPG::GameCore::FixPoint SPAdd; // 0x68
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x70
		::RPG::Client::TextID SkillDesc; // 0x78
		::RPG::GameCore::FixPoint DelayRatio; // 0x88
		::RPG::Client::TextID SkillName; // 0x90
		::RPG::GameCore::AttackType AttackType; // 0xA0
		::RPG::GameCore::FixPoint SPBase; // 0xA8
		::RPG::Client::TextID SkillNeed; // 0xB0
		::RPG::Client::TextID SimpleSkillDesc; // 0xC0
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0xD0
		::System::UInt32 SkillID; // 0xD4
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xD8
		::RPG::Client::TextID SkillTag; // 0xE0
		::RPG::GameCore::FixPoint BPNeed; // 0xF0
		::System::Int32 StanceDamageDisplay; // 0xF8
		::RPG::GameCore::SkillEffect SkillEffect; // 0xFC
		::RPG::GameCore::FixPoint BPAdd; // 0x100

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
