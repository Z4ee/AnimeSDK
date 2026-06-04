#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTreeTemplateType.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x19C99180)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C9A040)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x19C9C290)
#define RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET UNITYSDK_OFFSET(0x19C9C2F0)
#define RPG_GAMECORE_SPECIALAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9C280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRow_TypeDefinitionIndex = 14380;

	class SpecialAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* OverrideProperty; // 0x10
		::System::String* PlayerJsonPath; // 0x18
		::System::String* LevelAreaPrefab; // 0x20
		::System::String* JsonPath; // 0x28
		::System::String* CustomSkillTreeKey; // 0x30
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x38
		::System::String* AnchorName; // 0x40
		::System::UInt32 RelicPropertyType; // 0x48
		::System::UInt32 Promotion; // 0x4C
		::System::UInt32 SpecialAvatarID; // 0x50
		::System::UInt32 AvatarID; // 0x54
		::RPG::GameCore::SpecialAvatarType Type; // 0x58
		::System::UInt32 MainMissionID; // 0x5C
		::System::UInt32 PlaneID; // 0x60
		::System::Boolean IsProtected; // 0x64
		::System::Boolean IsUseWorldLevel; // 0x65
		::System::UInt32 EnhancedID; // 0x68
		::System::Boolean LockMazeSkill; // 0x6C
		::System::Boolean HasJoinHint; // 0x6D
		::System::Boolean HaveActionDelay; // 0x6E
		::System::UInt32 PlayerID; // 0x70
		::System::UInt32 EquipmentLevel; // 0x74
		::System::UInt32 EquipmentID; // 0x78
		::System::UInt32 Rank; // 0x7C
		::System::UInt32 EquipmentPromotion; // 0x80
		::System::UInt32 RelicPropertyTypeExtra; // 0x84
		::System::UInt32 EquipmentRank; // 0x88
		::System::UInt32 RelicMainValue; // 0x8C
		::System::UInt32 AvatarSkinID; // 0x90
		::System::UInt32 Level; // 0x94
		::System::Boolean DisableSwitch; // 0x98
		::System::Boolean IsAutoBattle; // 0x99
		::System::Boolean HasLeaveHint; // 0x9A
		::System::Boolean LockBattleInfo; // 0x9B
		::RPG::GameCore::SkillTreeTemplateType SkillTreeTemplate; // 0x9C
		::System::UInt32 WorldLevel; // 0xA0
		::System::UInt32 RelicSubValue; // 0xA4

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
