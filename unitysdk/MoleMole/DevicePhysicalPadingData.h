#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_DEVICEPHYSICALPADINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x190D4B80)

namespace MoleMole
{
	inline static constexpr unsigned int DevicePhysicalPadingData_TypeDefinitionIndex = 59351;

	class DevicePhysicalPadingData : public ::System::Object
	{
	public:
		::System::Single top; // 0x10
		::System::Single bottom; // 0x14
		::System::Single left; // 0x18
		::System::Single right; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICEPHYSICALPADINGDATA__CTOR_OFFSET))(this);
		}
	};
}
