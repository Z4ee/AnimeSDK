#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraChangeType.h"

namespace System { class String; }

#define MOLEMOLE_CAMERACHANGETYPE_CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAE6B00)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_Curve_TypeDefinitionIndex = 69891;

	class CameraChangeType_Curve : public ::MoleMole::CameraChangeType
	{
	public:
		::System::String* CurveKey; // 0x10
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_CURVE__CTOR_OFFSET))(this);
		}
	};
}
