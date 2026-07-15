#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_0DAE94C6895FAC64_10__CTOR_OFFSET UNITYSDK_OFFSET(0x17046D20)

inline static constexpr unsigned int Class_2_0DAE94C6895FAC64_10_TypeDefinitionIndex = 70252;

class Class_2_0DAE94C6895FAC64_10 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_10__CTOR_OFFSET))(this, a1);
	}
};
