#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define INCONTROL_UNITYINPUTDEVICEPROFILEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xC153110)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDeviceProfileAttribute_TypeDefinitionIndex = 39603;

	class UnityInputDeviceProfileAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEPROFILEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
