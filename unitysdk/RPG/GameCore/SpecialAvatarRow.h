#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTreeTemplateType.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x177592C0)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17759E90)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1775BB80)
#define RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET UNITYSDK_OFFSET(0x1775BBE0)
#define RPG_GAMECORE_SPECIALAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1775BC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRow_TypeDefinitionIndex = 13858;

	class SpecialAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* OverrideProperty; // 0x10
		::System::String* LevelAreaPrefab; // 0x18
		::System::String* JsonPath; // 0x20
		::System::String* CustomSkillTreeKey; // 0x28
		::System::String* PlayerJsonPath; // 0x30
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x38
		::System::String* AnchorName; // 0x40
		::System::UInt32 EquipmentPromotion; // 0x48
		::System::UInt32 Rank; // 0x4C
		::System::UInt32 EquipmentRank; // 0x50
		::RPG::GameCore::SpecialAvatarType Type; // 0x54
		::System::Boolean IsUseWorldLevel; // 0x58
		::System::Boolean IsProtected; // 0x59
		::System::Boolean LockBattleInfo; // 0x5A
		::System::UInt32 EquipmentLevel; // 0x5C
		::System::UInt32 EnhancedID; // 0x60
		::System::UInt32 PlayerID; // 0x64
		::System::UInt32 AvatarID; // 0x68
		::System::UInt32 SpecialAvatarID; // 0x6C
		::System::UInt32 RelicSubValue; // 0x70
		::System::Boolean DisableSwitch; // 0x74
		::System::Boolean LockMazeSkill; // 0x75
		::System::UInt32 RelicPropertyTypeExtra; // 0x78
		::System::UInt32 MainMissionID; // 0x7C
		::System::UInt32 Promotion; // 0x80
		::System::UInt32 Level; // 0x84
		::System::UInt32 PlaneID; // 0x88
		::System::UInt32 WorldLevel; // 0x8C
		::System::UInt32 RelicPropertyType; // 0x90
		::RPG::GameCore::SkillTreeTemplateType SkillTreeTemplate; // 0x94
		::System::UInt32 RelicMainValue; // 0x98
		::System::UInt32 EquipmentID; // 0x9C
		::System::Boolean IsAutoBattle; // 0xA0
		::System::Boolean HasLeaveHint; // 0xA1
		::System::Boolean HasJoinHint; // 0xA2
		::System::Boolean HaveActionDelay; // 0xA3
		::System::UInt32 AvatarSkinID; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialAvatarRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialAvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
