#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKILLTREEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B2DC1F0)
#define RPG_GAMECORE_AVATARSKILLTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2DC9C0)
#define RPG_GAMECORE_AVATARSKILLTREEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2DE510)
#define RPG_GAMECORE_AVATARSKILLTREEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B2DE570)
#define RPG_GAMECORE_AVATARSKILLTREEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2DE5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillTreeRow_TypeDefinitionIndex = 12634;

	class AvatarSkillTreeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* PrePoint; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x20
		::System::String* PointName; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x30
		::System::String* PointDesc; // 0x38
		::System::String* SimplePointDesc; // 0x40
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MaterialList; // 0x48
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x50
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* StatusAddList; // 0x58
		::System::String* AbilityName; // 0x60
		::Il2CppArray<::System::UInt32>* LevelUpSkillID; // 0x68
		::System::UInt32 PointType; // 0x70
		::System::UInt32 Level; // 0x74
		::System::UInt32 PointID; // 0x78
		::System::UInt32 EnhancedID; // 0x7C
		::System::UInt32 AvatarPromotionLimit; // 0x80
		::System::UInt32 MaxLevel; // 0x84
		::RPG::GameCore::AvatarSkillTreePointTriggerKey PointTriggerKey; // 0x88
		::System::UInt32 AvatarID; // 0x8C
		::System::UInt32 RecommendPriority; // 0x90
		::RPG::GameCore::AvatarSkillTreeAnchorType AnchorType; // 0x94
		::System::Boolean DefaultUnlock; // 0x98
		::System::UInt32 AvatarLevelLimit; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarSkillTreeRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarSkillTreeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkillTreeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
