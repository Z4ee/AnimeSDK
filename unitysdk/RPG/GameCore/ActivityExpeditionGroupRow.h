#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYEXPEDITIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18613B60)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18613CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityExpeditionGroupRow_TypeDefinitionIndex = 10949;

	class ActivityExpeditionGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExpeditionIdList; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 ActivityModuleID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityExpeditionGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityExpeditionGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
