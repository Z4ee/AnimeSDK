#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_42A5121F85009164.h"

namespace System { class String; }

#define CLASS_2_53D55A4077F55C05_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x189111D0)
#define CLASS_2_53D55A4077F55C05_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x189110A0)
#define CLASS_2_53D55A4077F55C05_TOSTRING_OFFSET UNITYSDK_OFFSET(0x189110F0)
#define CLASS_2_53D55A4077F55C05__CTOR_OFFSET UNITYSDK_OFFSET(0x18911070)
#define CLASS_2_53D55A4077F55C05___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18911230)

inline static constexpr unsigned int Class_2_53D55A4077F55C05_TypeDefinitionIndex = 38456;

class Class_2_53D55A4077F55C05 : public ::Class_1_42A5121F85009164
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53D55A4077F55C05__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53D55A4077F55C05_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53D55A4077F55C05_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53D55A4077F55C05_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53D55A4077F55C05___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
