#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTreeTemplateType.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D0AFFC0)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0B0E80)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D0B30D0)
#define RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D0B3130)
#define RPG_GAMECORE_SPECIALAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B30C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRow_TypeDefinitionIndex = 14949;

	class SpecialAvatarRow : public ::System::Object
	{
	public:
		::System::String* LevelAreaPrefab; // 0x10
		::System::String* CustomSkillTreeKey; // 0x18
		::System::String* AnchorName; // 0x20
		::System::String* PlayerJsonPath; // 0x28
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x30
		::System::String* JsonPath; // 0x38
		::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* OverrideProperty; // 0x40
		::System::Boolean HasLeaveHint; // 0x48
		::System::Boolean IsProtected; // 0x49
		::System::Boolean HasJoinHint; // 0x4A
		::System::UInt32 EnhancedID; // 0x4C
		::System::UInt32 PlaneID; // 0x50
		::System::UInt32 EquipmentLevel; // 0x54
		::System::UInt32 Level; // 0x58
		::System::UInt32 SpecialAvatarID; // 0x5C
		::System::UInt32 EquipmentRank; // 0x60
		::System::UInt32 EquipmentPromotion; // 0x64
		::System::UInt32 EquipmentID; // 0x68
		::System::UInt32 RelicMainValue; // 0x6C
		::System::UInt32 AvatarSkinID; // 0x70
		::System::UInt32 AvatarID; // 0x74
		::System::UInt32 RelicPropertyType; // 0x78
		::RPG::GameCore::SkillTreeTemplateType SkillTreeTemplate; // 0x7C
		::System::UInt32 PlayerID; // 0x80
		::System::Boolean LockMazeSkill; // 0x84
		::System::Boolean LockBattleInfo; // 0x85
		::System::Boolean HaveActionDelay; // 0x86
		::System::Boolean IsUseWorldLevel; // 0x87
		::System::UInt32 Promotion; // 0x88
		::System::UInt32 WorldLevel; // 0x8C
		::System::Boolean IsAutoBattle; // 0x90
		::System::Boolean DisableSwitch; // 0x91
		::System::UInt32 Rank; // 0x94
		::System::UInt32 MainMissionID; // 0x98
		::System::UInt32 RelicSubValue; // 0x9C
		::System::UInt32 RelicPropertyTypeExtra; // 0xA0
		::RPG::GameCore::SpecialAvatarType Type; // 0xA4

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
