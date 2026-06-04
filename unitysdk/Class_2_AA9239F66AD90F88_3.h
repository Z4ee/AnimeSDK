#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"

#define CLASS_2_AA9239F66AD90F88_3_ONINIT_OFFSET UNITYSDK_OFFSET(0xCEAE020)
#define CLASS_2_AA9239F66AD90F88_3_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xCEAE060)
#define CLASS_2_AA9239F66AD90F88_3__CTOR_OFFSET UNITYSDK_OFFSET(0xCEAE0A0)
#define CLASS_2_AA9239F66AD90F88_3___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xCEAE0B0)
#define CLASS_2_AA9239F66AD90F88_3___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xCEAE110)

inline static constexpr unsigned int Class_2_AA9239F66AD90F88_3_TypeDefinitionIndex = 56349;

class Class_2_AA9239F66AD90F88_3 : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_3__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_3_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_3_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_3___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_3___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}
};
