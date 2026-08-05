#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_A6DA851A9BDCFFDD__CTOR_OFFSET UNITYSDK_OFFSET(0x11790900)

inline static constexpr unsigned int Class_1_A6DA851A9BDCFFDD_TypeDefinitionIndex = 81629;

class Class_1_A6DA851A9BDCFFDD : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::Single Field_1_0; // 0x20

	::System::Void _ctor(::System::Single a1, ::System::Action* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6DA851A9BDCFFDD__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
