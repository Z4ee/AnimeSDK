#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CEF50BC26E0B42E9_VirtualCameraConfig;
namespace Cinemachine { class CinemachineVirtualCamera; }

#define CLASS_1_CEF50BC26E0B42E9_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x10BABEF0)
#define CLASS_1_CEF50BC26E0B42E9_METHOD_1_A7CB1BB8D1AD8C07_OFFSET UNITYSDK_OFFSET(0x10BABA50)
#define CLASS_1_CEF50BC26E0B42E9_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x10BAC1B0)
#define CLASS_1_CEF50BC26E0B42E9__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAC250)

inline static constexpr unsigned int Class_1_CEF50BC26E0B42E9_TypeDefinitionIndex = 63924;

class Class_1_CEF50BC26E0B42E9 : public ::System::Object
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_1_1; // 0x10
	::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF50BC26E0B42E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7CB1BB8D1AD8C07(::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CEF50BC26E0B42E9_METHOD_1_A7CB1BB8D1AD8C07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF50BC26E0B42E9_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF50BC26E0B42E9_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}
};
