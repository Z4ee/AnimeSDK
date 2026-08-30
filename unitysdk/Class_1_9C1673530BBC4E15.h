#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CEF50BC26E0B42E9;

#define CLASS_1_9C1673530BBC4E15_GET_CAMERACONTROLLER_OFFSET UNITYSDK_OFFSET(0x176EBCB0)
#define CLASS_1_9C1673530BBC4E15__CTOR_OFFSET UNITYSDK_OFFSET(0x176EBCC0)

inline static constexpr unsigned int Class_1_9C1673530BBC4E15_TypeDefinitionIndex = 78006;

class Class_1_9C1673530BBC4E15 : public ::System::Object
{
public:
	::Class_1_CEF50BC26E0B42E9* _CameraController_k__BackingField; // 0x10
	::System::Boolean MMAEKKAKCLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C1673530BBC4E15__CTOR_OFFSET))(this);
	}

	::Class_1_CEF50BC26E0B42E9* get_CameraController()
	{
		return ((::Class_1_CEF50BC26E0B42E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C1673530BBC4E15_GET_CAMERACONTROLLER_OFFSET))(this);
	}
};
