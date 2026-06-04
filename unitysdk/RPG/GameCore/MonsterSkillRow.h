#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x199AF080)
#define RPG_GAMECORE_MONSTERSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199AF8A0)
#define RPG_GAMECORE_MONSTERSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x199B0950)
#define RPG_GAMECORE_MONSTERSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x199B09B0)
#define RPG_GAMECORE_MONSTERSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199B09F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterSkillRow_TypeDefinitionIndex = 13514;

	class MonsterSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::Il2CppArray<::System::UInt32>* PhaseList; // 0x18
		::Il2CppArray<::System::String*>* ModifierList; // 0x20
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x28
		::System::String* IconPath; // 0x30
		::System::String* SkillTriggerKey; // 0x38
		::System::UInt32 SortOrder; // 0x40
		::System::Boolean IsThreat; // 0x44
		::RPG::Client::TextID SkillTypeDesc; // 0x48
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x58
		::RPG::Client::TextID SkillName; // 0x60
		::RPG::GameCore::FixPoint SPHitBase; // 0x70
		::RPG::GameCore::FixPoint DelayRatio; // 0x78
		::RPG::Client::TextID SkillDesc; // 0x80
		::RPG::Client::TextID SkillTag; // 0x90
		::RPG::GameCore::AttackDamageType DamageType; // 0xA0
		::RPG::GameCore::AttackType AttackType; // 0xA4
		::System::UInt32 AI_CD; // 0xA8
		::System::UInt32 SkillID; // 0xAC
		::System::UInt32 AI_ICD; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterSkillRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
