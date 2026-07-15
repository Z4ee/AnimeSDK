#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCENENLIGHTMANAGER_BASECOMPONENTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F691C0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int BaseComponentExportData_TypeDefinitionIndex = 47288;

	class BaseComponentExportData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BASECOMPONENTEXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
