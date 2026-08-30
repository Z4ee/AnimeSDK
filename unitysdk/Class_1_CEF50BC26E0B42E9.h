#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CEF50BC26E0B42E9_VirtualCameraConfig;
namespace Cinemachine { class CinemachineVirtualCamera; }

#define CLASS_1_CEF50BC26E0B42E9_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x19AAC410)
#define CLASS_1_CEF50BC26E0B42E9_METHOD_1_A7CB1BB8D1AD8C07_OFFSET UNITYSDK_OFFSET(0x19AABF70)
#define CLASS_1_CEF50BC26E0B42E9_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x19AAC6C0)
#define CLASS_1_CEF50BC26E0B42E9__CTOR_OFFSET UNITYSDK_OFFSET(0x19AAC760)

inline static constexpr unsigned int Class_1_CEF50BC26E0B42E9_TypeDefinitionIndex = 78003;

class Class_1_CEF50BC26E0B42E9 : public ::System::Object
{
public:
	::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig* LMAGNOACOGP; // 0x10
	::Cinemachine::CinemachineVirtualCamera* GLKOKAONKDI; // 0x18

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
