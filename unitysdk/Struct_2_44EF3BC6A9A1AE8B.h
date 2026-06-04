#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_44EF3BC6A9A1AE8B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x132B80)
#define STRUCT_2_44EF3BC6A9A1AE8B_EQUALS_OFFSET UNITYSDK_OFFSET(0x132B00)
#define STRUCT_2_44EF3BC6A9A1AE8B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x132B90)
#define STRUCT_2_44EF3BC6A9A1AE8B___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x132BE0)
#define STRUCT_2_44EF3BC6A9A1AE8B___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x132C50)

inline static constexpr unsigned int Struct_2_44EF3BC6A9A1AE8B_TypeDefinitionIndex = 68904;

struct alignas(4) Struct_2_44EF3BC6A9A1AE8B
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x19
	::System::Int32 Field_2_4; // 0x1C
	::System::Int32 Field_2_5; // 0x20

	::System::Boolean Equals(::Struct_2_44EF3BC6A9A1AE8B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_44EF3BC6A9A1AE8B))((::PBYTE)hIl2Cpp + STRUCT_2_44EF3BC6A9A1AE8B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_44EF3BC6A9A1AE8B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_44EF3BC6A9A1AE8B_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_44EF3BC6A9A1AE8B___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_44EF3BC6A9A1AE8B___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
