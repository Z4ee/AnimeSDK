#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1860B9B0)
#define RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1860BBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEquipmentRewardRow_TypeDefinitionIndex = 10899;

	class ActivityEquipmentRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MaterialRewardQuestIDList; // 0x10
		::System::UInt32 ActivityModuleID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 EquipmentRewardQuestID; // 0x20
		::System::UInt32 EquipmentRewardQuestGotoID; // 0x24
		::System::UInt32 MainMissionID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityEquipmentRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityEquipmentRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
