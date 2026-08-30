#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_EF0906550EDD6E82_STRUCT_2_680BF1744D60EED9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B72BB0)
#define CLASS_1_EF0906550EDD6E82_STRUCT_2_680BF1744D60EED9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4C20)

inline static constexpr unsigned int Class_1_EF0906550EDD6E82_Struct_2_680BF1744D60EED9_1_TypeDefinitionIndex = 47731;

struct alignas(4) Class_1_EF0906550EDD6E82_Struct_2_680BF1744D60EED9_1
{
	::System::Int32 GAOAMKBNDPN; // 0x10
	::System::Int32 KIBPKPGDECO; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF0906550EDD6E82_STRUCT_2_680BF1744D60EED9_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0906550EDD6E82_STRUCT_2_680BF1744D60EED9_1_TOSTRING_OFFSET))(this);
	}
};
