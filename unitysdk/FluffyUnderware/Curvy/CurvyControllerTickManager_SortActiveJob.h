#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_SORTACTIVEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA800D0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControllerTickManager_SortActiveJob_TypeDefinitionIndex = 39466;

	struct alignas(1) CurvyControllerTickManager_SortActiveJob
	{
		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_SORTACTIVEJOB_EXECUTE_OFFSET))(this);
		}
	};
}
