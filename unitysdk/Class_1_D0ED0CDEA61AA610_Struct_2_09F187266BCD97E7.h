#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BCC120)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2BCC130)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BCC180)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2BCC1E0)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Struct_2_09F187266BCD97E7_TypeDefinitionIndex = 66101;

struct alignas(4) Class_1_D0ED0CDEA61AA610_Struct_2_09F187266BCD97E7
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
