#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ZENKOVCLOCKPAGESRUNTIMEMANAGER_CLOCKPAGEMATERIALMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC676E0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovClockPagesRuntimeManager_ClockPageMaterialMapping_TypeDefinitionIndex = 27362;

	class ZenkovClockPagesRuntimeManager_ClockPageMaterialMapping : public ::System::Object
	{
	public:
		::System::Int32 pageIndex; // 0x10
		::System::Int32 materialIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCLOCKPAGESRUNTIMEMANAGER_CLOCKPAGEMATERIALMAPPING__CTOR_OFFSET))(this);
		}
	};
}
