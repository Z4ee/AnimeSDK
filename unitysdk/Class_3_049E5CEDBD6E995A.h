#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0D93B126A8FFEA2D.h"

class Class_0_16E4307DCC419505_372;
namespace System { class String; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define CLASS_3_049E5CEDBD6E995A_METHOD_3_48A6EA879AD6BD70_OFFSET UNITYSDK_OFFSET(0x178422D0)
#define CLASS_3_049E5CEDBD6E995A_METHOD_3_BEEAC96EA555A033_OFFSET UNITYSDK_OFFSET(0x17842160)
#define CLASS_3_049E5CEDBD6E995A_METHOD_3_EA7889976177D748_OFFSET UNITYSDK_OFFSET(0x178427A0)
#define CLASS_3_049E5CEDBD6E995A_METHOD_3_F933C9B901736668_OFFSET UNITYSDK_OFFSET(0x178425B0)
#define CLASS_3_049E5CEDBD6E995A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178427F0)
#define CLASS_3_049E5CEDBD6E995A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17842150)
#define CLASS_3_049E5CEDBD6E995A__CTOR_OFFSET UNITYSDK_OFFSET(0x17842120)

inline static constexpr unsigned int Class_3_049E5CEDBD6E995A_TypeDefinitionIndex = 49618;

class Class_3_049E5CEDBD6E995A : public ::Class_2_0D93B126A8FFEA2D
{
public:
	::UnityEngine::Rendering::VolumeComponent* BJHBCJJDKML; // 0x20
	::UnityEngine::Rendering::VolumeComponent* NHJPKHOMNCA; // 0x28
	::UnityEngine::Rendering::VolumeComponent* LOJMPFBJHLC; // 0x30
	::UnityEngine::Rendering::VolumeComponent* PBKIIDDODAD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_049E5CEDBD6E995A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::UnityEngine::Rendering::VolumeProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + CLASS_3_049E5CEDBD6E995A__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_BEEAC96EA555A033(::Class_0_16E4307DCC419505_372* a1, ::Class_0_16E4307DCC419505_372* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_372*, ::Class_0_16E4307DCC419505_372*))((::PBYTE)hIl2Cpp + CLASS_3_049E5CEDBD6E995A_METHOD_3_BEEAC96EA555A033_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_48A6EA879AD6BD70(::Class_0_16E4307DCC419505_372* a1, ::Class_0_16E4307DCC419505_372* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_372*, ::Class_0_16E4307DCC419505_372*))((::PBYTE)hIl2Cpp + CLASS_3_049E5CEDBD6E995A_METHOD_3_48A6EA879AD6BD70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F933C9B901736668(::Class_0_16E4307DCC419505_372* a1, ::Class_0_16E4307DCC419505_372* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_372*, ::Class_0_16E4307DCC419505_372*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_049E5CEDBD6E995A_METHOD_3_F933C9B901736668_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_EA7889976177D748(::Class_0_16E4307DCC419505_372* a1, ::Class_0_16E4307DCC419505_372* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_372*, ::Class_0_16E4307DCC419505_372*))((::PBYTE)hIl2Cpp + CLASS_3_049E5CEDBD6E995A_METHOD_3_EA7889976177D748_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_049E5CEDBD6E995A_TOSTRING_OFFSET))(this);
	}
};
