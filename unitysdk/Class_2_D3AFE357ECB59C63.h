#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_722EA82C1161F2A1.h"

namespace System { class String; }

#define CLASS_2_D3AFE357ECB59C63_COMPARETO_OFFSET UNITYSDK_OFFSET(0x12ADE6A0)
#define CLASS_2_D3AFE357ECB59C63_METHOD_2_5CEC4607322705E5_1_OFFSET UNITYSDK_OFFSET(0x12ADE840)
#define CLASS_2_D3AFE357ECB59C63_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x12ADE800)
#define CLASS_2_D3AFE357ECB59C63_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12ADE720)
#define CLASS_2_D3AFE357ECB59C63__CTOR_OFFSET UNITYSDK_OFFSET(0x12ADE650)
#define CLASS_2_D3AFE357ECB59C63___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12ADE880)

inline static constexpr unsigned int Class_2_D3AFE357ECB59C63_TypeDefinitionIndex = 57217;

class Class_2_D3AFE357ECB59C63 : public ::Class_1_722EA82C1161F2A1
{
public:
	::System::UInt32 Field_2_0; // 0x18
	::System::UInt32 Field_2_1; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 CompareTo(::Class_2_D3AFE357ECB59C63* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_D3AFE357ECB59C63*))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_TOSTRING_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_METHOD_2_5CEC4607322705E5_1_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
