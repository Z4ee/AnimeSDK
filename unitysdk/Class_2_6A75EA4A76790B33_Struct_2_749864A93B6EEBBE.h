#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_2_6A75EA4A76790B33_STRUCT_2_749864A93B6EEBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x72D10)

inline static constexpr unsigned int Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE_TypeDefinitionIndex = 40115;

struct alignas(8) Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE
{
	::System::String* Field_2_0; // 0x10
	::System::Type* Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_STRUCT_2_749864A93B6EEBBE__CTOR_OFFSET))(this, a1, a2);
	}
};
