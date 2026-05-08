#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraChangeType.h"

#define MOLEMOLE_CAMERACHANGETYPE_LERP__CTOR_OFFSET UNITYSDK_OFFSET(0xFAE6B10)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_Lerp_TypeDefinitionIndex = 68117;

	class CameraChangeType_Lerp : public ::MoleMole::CameraChangeType
	{
	public:
		::System::Single Duration; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_LERP__CTOR_OFFSET))(this);
		}
	};
}
