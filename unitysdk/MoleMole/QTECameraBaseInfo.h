#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_QTECAMERABASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11DED240)

namespace MoleMole
{
	inline static constexpr unsigned int QTECameraBaseInfo_TypeDefinitionIndex = 41050;

	class QTECameraBaseInfo : public ::System::Object
	{
	public:
		::System::String* stretchKey; // 0x10
		::System::String* TimeSlowKey; // 0x18
		::System::String* zoomKey; // 0x20
		::System::Boolean isOverrideCameraY; // 0x28
		::System::Boolean isOverrideStretchRadiusRatio; // 0x29
		::System::Single overrideStretchRadiusRatio; // 0x2C
		::System::Single overrideStretchCameraY; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO__CTOR_OFFSET))(this);
		}
	};
}
