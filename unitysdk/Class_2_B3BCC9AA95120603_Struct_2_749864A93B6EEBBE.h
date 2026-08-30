#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_2_B3BCC9AA95120603_STRUCT_2_749864A93B6EEBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603_Struct_2_749864A93B6EEBBE_TypeDefinitionIndex = 49853;

struct alignas(8) Class_2_B3BCC9AA95120603_Struct_2_749864A93B6EEBBE
{
	::System::String* DJNKMHHLKHM; // 0x10
	::System::Type* MPDOMNOHGJK; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_STRUCT_2_749864A93B6EEBBE__CTOR_OFFSET))(this, a1, a2);
	}
};
