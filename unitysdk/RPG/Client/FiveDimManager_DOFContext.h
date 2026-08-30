#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_FIVEDIMMANAGER_DOFCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x14F090)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_DOFContext_TypeDefinitionIndex = 60641;

	struct alignas(4) FiveDimManager_DOFContext
	{
		::System::Boolean IsDOFEnabled; // 0x10
		::System::Single FocusDistance; // 0x14
		::System::Single NearFocalRegion; // 0x18
		::System::Single FarFocalRegion; // 0x1C
		::System::Single NearTransitionRegion; // 0x20
		::System::Single FarTransitionRegion; // 0x24

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_DOFCONTEXT_CLEAR_OFFSET))(this);
		}
	};
}
