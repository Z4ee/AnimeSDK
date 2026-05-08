#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CAMERAORBIT__CTOR_OFFSET UNITYSDK_OFFSET(0x43F560)

namespace MoleMole
{
	inline static constexpr unsigned int CameraOrbit_TypeDefinitionIndex = 72566;

	struct alignas(4) CameraOrbit
	{
		::System::Single m_Height; // 0x10
		::System::Single m_Radius; // 0x14

		::System::Void _ctor(::System::Single h, ::System::Single r)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT__CTOR_OFFSET))(this, h, r);
		}
	};
}
