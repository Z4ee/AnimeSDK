#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

#define STRUCT_2_E0F071A719A220C5_EQUALS_OFFSET UNITYSDK_OFFSET(0x39C6AA0)
#define STRUCT_2_E0F071A719A220C5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x39C6B30)
#define STRUCT_2_E0F071A719A220C5_METHOD_2_60F192A2082338C3_OFFSET UNITYSDK_OFFSET(0x39C6BA0)
#define STRUCT_2_E0F071A719A220C5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39C6C20)
#define STRUCT_2_E0F071A719A220C5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x39C6A60)
#define STRUCT_2_E0F071A719A220C5__CTOR_OFFSET UNITYSDK_OFFSET(0x6E35A0)

inline static constexpr unsigned int Struct_2_E0F071A719A220C5_TypeDefinitionIndex = 39406;

struct alignas(8) Struct_2_E0F071A719A220C5
{
	::System::UInt64 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E0F071A719A220C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::UInt64 a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Type*))((::PBYTE)hIl2Cpp + STRUCT_2_E0F071A719A220C5__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_E0F071A719A220C5 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E0F071A719A220C5))((::PBYTE)hIl2Cpp + STRUCT_2_E0F071A719A220C5_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E0F071A719A220C5_GETHASHCODE_OFFSET))(this);
	}

	::System::Type* Method_2_60F192A2082338C3()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E0F071A719A220C5_METHOD_2_60F192A2082338C3_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E0F071A719A220C5_TOSTRING_OFFSET))(this);
	}
};
