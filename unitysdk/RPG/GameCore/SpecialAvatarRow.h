#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTreeTemplateType.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1DAFA5C0)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAFB4C0)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DAFD790)
#define RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET UNITYSDK_OFFSET(0x1DAFD7F0)
#define RPG_GAMECORE_SPECIALAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFD780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRow_TypeDefinitionIndex = 15116;

	class SpecialAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* OverrideProperty; // 0x10
		::System::String* AnchorName; // 0x18
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x20
		::System::String* AIPath; // 0x28
		::System::String* CustomSkillTreeKey; // 0x30
		::System::String* LevelAreaPrefab; // 0x38
		::System::String* JsonPath; // 0x40
		::System::String* PlayerJsonPath; // 0x48
		::System::UInt32 AvatarID; // 0x50
		::System::Boolean IsAutoBattle; // 0x54
		::System::Boolean LockMazeSkill; // 0x55
		::System::Boolean IsProtected; // 0x56
		::System::UInt32 SpecialAvatarID; // 0x58
		::System::UInt32 EnhancedID; // 0x5C
		::System::UInt32 Level; // 0x60
		::System::UInt32 EquipmentRank; // 0x64
		::System::UInt32 RelicMainValue; // 0x68
		::RPG::GameCore::SpecialAvatarType Type; // 0x6C
		::System::Boolean HaveActionDelay; // 0x70
		::System::Boolean IsUseWorldLevel; // 0x71
		::System::Boolean DisableSwitch; // 0x72
		::System::Boolean HasLeaveHint; // 0x73
		::System::UInt32 PlayerID; // 0x74
		::System::UInt32 RelicPropertyType; // 0x78
		::System::UInt32 EquipmentLevel; // 0x7C
		::System::UInt32 MainMissionID; // 0x80
		::System::UInt32 EquipmentID; // 0x84
		::System::UInt32 RelicPropertyTypeExtra; // 0x88
		::System::UInt32 RelicSubValue; // 0x8C
		::System::UInt32 AvatarSkinID; // 0x90
		::System::Boolean HasJoinHint; // 0x94
		::System::Boolean LockBattleInfo; // 0x95
		::System::UInt32 EquipmentPromotion; // 0x98
		::System::UInt32 Rank; // 0x9C
		::RPG::GameCore::SkillTreeTemplateType SkillTreeTemplate; // 0xA0
		::System::UInt32 WorldLevel; // 0xA4
		::System::UInt32 Promotion; // 0xA8
		::System::UInt32 PlaneID; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialAvatarRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialAvatarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET))(this);
		}
	};
}
