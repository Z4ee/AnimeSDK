#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_482B1CDFE28F622E.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_3A7FF3B65F3D3C52_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9BD400)
#define STRUCT_2_3A7FF3B65F3D3C52_EQUALS_OFFSET UNITYSDK_OFFSET(0x9BD3B0)
#define STRUCT_2_3A7FF3B65F3D3C52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9BD410)
#define STRUCT_2_3A7FF3B65F3D3C52_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x9BD460)
#define STRUCT_2_3A7FF3B65F3D3C52_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9BD4C0)
#define STRUCT_2_3A7FF3B65F3D3C52__CTOR_OFFSET UNITYSDK_OFFSET(0x324490)

inline static constexpr unsigned int Struct_2_3A7FF3B65F3D3C52_TypeDefinitionIndex = 91598;

struct alignas(1) Struct_2_3A7FF3B65F3D3C52
{
	::Enum_3_482B1CDFE28F622E Field_2_0; // 0x10

	::System::Void _ctor(::Enum_3_482B1CDFE28F622E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_482B1CDFE28F622E))((::PBYTE)hIl2Cpp + STRUCT_2_3A7FF3B65F3D3C52__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_3A7FF3B65F3D3C52 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3A7FF3B65F3D3C52))((::PBYTE)hIl2Cpp + STRUCT_2_3A7FF3B65F3D3C52_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_3A7FF3B65F3D3C52_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3A7FF3B65F3D3C52_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_3A7FF3B65F3D3C52_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3A7FF3B65F3D3C52_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
