#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_96F8F0A04B900A9E_METHOD_2_313B9FD38D032E12_OFFSET UNITYSDK_OFFSET(0x186C70F0)
#define STRUCT_2_96F8F0A04B900A9E_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x3AE3430)

inline static constexpr unsigned int Struct_2_96F8F0A04B900A9E_TypeDefinitionIndex = 72939;

struct alignas(8) Struct_2_96F8F0A04B900A9E
{
	::System::Object* KMPLEILCHMI; // 0x10

	static ::Struct_2_96F8F0A04B900A9E Method_2_313B9FD38D032E12(::System::Object* a1)
	{
		return ((::Struct_2_96F8F0A04B900A9E(*)(::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_96F8F0A04B900A9E_METHOD_2_313B9FD38D032E12_OFFSET))(a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_96F8F0A04B900A9E_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
