#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F00EA0)
#define RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F00F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityModuleFightConfigRow_TypeDefinitionIndex = 10794;

	class ActivityModuleFightConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModuleID; // 0x10
		::System::UInt32 ActivityFightGroupID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityModuleFightConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityModuleFightConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
