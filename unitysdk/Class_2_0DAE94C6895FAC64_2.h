#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_0DAE94C6895FAC64_2_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18623320)
#define CLASS_2_0DAE94C6895FAC64_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18623310)

inline static constexpr unsigned int Class_2_0DAE94C6895FAC64_2_TypeDefinitionIndex = 54321;

class Class_2_0DAE94C6895FAC64_2 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_2__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_2_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
