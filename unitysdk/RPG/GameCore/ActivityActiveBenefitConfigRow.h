#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYACTIVEBENEFITCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18603580)
#define RPG_GAMECORE_ACTIVITYACTIVEBENEFITCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186036F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityActiveBenefitConfigRow_TypeDefinitionIndex = 10452;

	class ActivityActiveBenefitConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 BenefitID; // 0x10
		::System::UInt32 ActiveItemNum; // 0x14
		::System::UInt32 Reward; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYACTIVEBENEFITCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityActiveBenefitConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityActiveBenefitConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYACTIVEBENEFITCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
