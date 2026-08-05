#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_COOPMODESUBSYSTEM_REGIONGROUPINFO_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x8BBA30)
#define MOLEMOLE_COOPMODESUBSYSTEM_REGIONGROUPINFO_ISVALID_OFFSET UNITYSDK_OFFSET(0x8BB9E0)

namespace MoleMole
{
	inline static constexpr unsigned int CoopModeSubsystem_RegionGroupInfo_TypeDefinitionIndex = 77048;

	struct alignas(4) CoopModeSubsystem_RegionGroupInfo
	{
		::System::UInt32 groupID; // 0x10
		::System::Int32 state; // 0x14

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_REGIONGROUPINFO_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_REGIONGROUPINFO_ISCLOSED_OFFSET))(this);
		}
	};
}
