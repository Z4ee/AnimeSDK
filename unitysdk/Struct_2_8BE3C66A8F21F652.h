#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_8BE3C66A8F21F652_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x77DD0)
#define STRUCT_2_8BE3C66A8F21F652_EQUALS_OFFSET UNITYSDK_OFFSET(0x77D50)
#define STRUCT_2_8BE3C66A8F21F652_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x77DE0)
#define STRUCT_2_8BE3C66A8F21F652___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x77E30)
#define STRUCT_2_8BE3C66A8F21F652___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x77EA0)

inline static constexpr unsigned int Struct_2_8BE3C66A8F21F652_TypeDefinitionIndex = 60510;

struct alignas(4) Struct_2_8BE3C66A8F21F652
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x19
	::System::Int32 Field_2_4; // 0x1C
	::System::Int32 Field_2_5; // 0x20

	::System::Boolean Equals(::Struct_2_8BE3C66A8F21F652 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_8BE3C66A8F21F652))((::PBYTE)hIl2Cpp + STRUCT_2_8BE3C66A8F21F652_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8BE3C66A8F21F652_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8BE3C66A8F21F652_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8BE3C66A8F21F652___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8BE3C66A8F21F652___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
