#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_B5ACEADD394A5875_STRUCT_2_680BF1744D60EED9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A5E80)
#define CLASS_1_B5ACEADD394A5875_STRUCT_2_680BF1744D60EED9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)
#define CLASS_1_B5ACEADD394A5875_STRUCT_2_680BF1744D60EED9_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A5E90)

inline static constexpr unsigned int Class_1_B5ACEADD394A5875_Struct_2_680BF1744D60EED9_1_TypeDefinitionIndex = 44063;

struct alignas(4) Class_1_B5ACEADD394A5875_Struct_2_680BF1744D60EED9_1
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B5ACEADD394A5875_STRUCT_2_680BF1744D60EED9_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5ACEADD394A5875_STRUCT_2_680BF1744D60EED9_1_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5ACEADD394A5875_STRUCT_2_680BF1744D60EED9_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
