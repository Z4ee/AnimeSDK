#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define STRUCT_2_52BA5F5738EB909A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x48EFD0)
#define STRUCT_2_52BA5F5738EB909A___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x48EFE0)

inline static constexpr unsigned int Struct_2_52BA5F5738EB909A_TypeDefinitionIndex = 45873;

struct alignas(8) Struct_2_52BA5F5738EB909A
{
	::UnityEngine::Gradient* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_52BA5F5738EB909A_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_52BA5F5738EB909A___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
