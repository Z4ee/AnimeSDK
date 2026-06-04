#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_38078B764F71A081_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3866CF0)
#define STRUCT_2_38078B764F71A081_EQUALS_OFFSET UNITYSDK_OFFSET(0x3866C90)
#define STRUCT_2_38078B764F71A081_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3866D00)
#define STRUCT_2_38078B764F71A081___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3866D60)
#define STRUCT_2_38078B764F71A081___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3866DC0)

inline static constexpr unsigned int Struct_2_38078B764F71A081_TypeDefinitionIndex = 40663;

struct alignas(1) Struct_2_38078B764F71A081
{
	::System::Boolean Equals(::Struct_2_38078B764F71A081 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_38078B764F71A081))((::PBYTE)hIl2Cpp + STRUCT_2_38078B764F71A081_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_38078B764F71A081_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_38078B764F71A081_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_38078B764F71A081___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_38078B764F71A081___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
