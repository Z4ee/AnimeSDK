#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERACHANGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFF4D0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_TypeDefinitionIndex = 42982;

	class CameraChangeType : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE__CTOR_OFFSET))(this);
		}
	};
}
