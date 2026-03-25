#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_4753009D0AD89794_EQUALS_OFFSET UNITYSDK_OFFSET(0x1491380)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_4753009D0AD89794_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1491390)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_4753009D0AD89794___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x14913E0)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_4753009D0AD89794___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1491440)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Struct_2_4753009D0AD89794_TypeDefinitionIndex = 57887;

struct alignas(4) Class_1_D0ED0CDEA61AA610_Struct_2_4753009D0AD89794
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_4753009D0AD89794_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_4753009D0AD89794_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_4753009D0AD89794___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_4753009D0AD89794___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
