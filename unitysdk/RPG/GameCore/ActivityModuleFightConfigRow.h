#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAFA910)
#define RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFAA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityModuleFightConfigRow_TypeDefinitionIndex = 11191;

	class ActivityModuleFightConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModuleID; // 0x10
		::System::UInt32 ActivityFightGroupID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityModuleFightConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityModuleFightConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
