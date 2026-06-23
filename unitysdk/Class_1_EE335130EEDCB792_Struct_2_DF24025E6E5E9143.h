#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_EE335130EEDCB792_STRUCT_2_DF24025E6E5E9143__CTOR_OFFSET UNITYSDK_OFFSET(0x759200)

inline static constexpr unsigned int Class_1_EE335130EEDCB792_Struct_2_DF24025E6E5E9143_TypeDefinitionIndex = 77112;

struct alignas(8) Class_1_EE335130EEDCB792_Struct_2_DF24025E6E5E9143
{
	::System::String* Field_2_0; // 0x10
	::System::Type* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Type* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE335130EEDCB792_STRUCT_2_DF24025E6E5E9143__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
