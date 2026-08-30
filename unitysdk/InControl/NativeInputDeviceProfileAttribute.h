#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define INCONTROL_NATIVEINPUTDEVICEPROFILEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56D380)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDeviceProfileAttribute_TypeDefinitionIndex = 39572;

	class NativeInputDeviceProfileAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEPROFILEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
