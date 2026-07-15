#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7AAAC9B25C84E6E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1670A570)

inline static constexpr unsigned int Class_1_7AAAC9B25C84E6E4_TypeDefinitionIndex = 56360;

class Class_1_7AAAC9B25C84E6E4 : public ::System::Object
{
public:
	// static const ::System::Char Field_1_0; // 0x0

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7AAAC9B25C84E6E4__CTOR_OFFSET))(this, a1);
	}
};
