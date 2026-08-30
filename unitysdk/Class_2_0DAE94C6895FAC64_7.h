#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_0DAE94C6895FAC64_7__CTOR_OFFSET UNITYSDK_OFFSET(0x15414CF0)

inline static constexpr unsigned int Class_2_0DAE94C6895FAC64_7_TypeDefinitionIndex = 52339;

class Class_2_0DAE94C6895FAC64_7 : public ::System::Attribute
{
public:
	::System::String* FFCPBBENHFD; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_7__CTOR_OFFSET))(this, a1);
	}
};
