#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_2EB110F542D52C8D_STRUCT_2_0865E790DF353284_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7F9EF0)
#define CLASS_1_2EB110F542D52C8D_STRUCT_2_0865E790DF353284_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F9EE0)
#define CLASS_1_2EB110F542D52C8D_STRUCT_2_0865E790DF353284__CTOR_OFFSET UNITYSDK_OFFSET(0x7F9ED0)

inline static constexpr unsigned int Class_1_2EB110F542D52C8D_Struct_2_0865E790DF353284_TypeDefinitionIndex = 78525;

struct alignas(2) Class_1_2EB110F542D52C8D_Struct_2_0865E790DF353284
{
	::System::UInt16 Field_2_0; // 0x10
	::System::UInt16 Field_2_7; // 0x12
	::System::Boolean Field_2_6; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_STRUCT_2_0865E790DF353284__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_STRUCT_2_0865E790DF353284_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_STRUCT_2_0865E790DF353284_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
