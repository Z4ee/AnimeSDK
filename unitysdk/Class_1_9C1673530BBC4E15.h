#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CEF50BC26E0B42E9;

#define CLASS_1_9C1673530BBC4E15_GET_CAMERACONTROLLER_OFFSET UNITYSDK_OFFSET(0x10684040)
#define CLASS_1_9C1673530BBC4E15__CTOR_OFFSET UNITYSDK_OFFSET(0x10684050)

inline static constexpr unsigned int Class_1_9C1673530BBC4E15_TypeDefinitionIndex = 63927;

class Class_1_9C1673530BBC4E15 : public ::System::Object
{
public:
	::Class_1_CEF50BC26E0B42E9* _CameraController_k__BackingField; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C1673530BBC4E15__CTOR_OFFSET))(this);
	}

	::Class_1_CEF50BC26E0B42E9* get_CameraController()
	{
		return ((::Class_1_CEF50BC26E0B42E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C1673530BBC4E15_GET_CAMERACONTROLLER_OFFSET))(this);
	}
};
