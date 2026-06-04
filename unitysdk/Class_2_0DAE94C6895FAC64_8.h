#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_0DAE94C6895FAC64_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA69A520)
#define CLASS_2_0DAE94C6895FAC64_8__CTOR_OFFSET UNITYSDK_OFFSET(0xA69A510)

inline static constexpr unsigned int Class_2_0DAE94C6895FAC64_8_TypeDefinitionIndex = 48677;

class Class_2_0DAE94C6895FAC64_8 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_8__CTOR_1_OFFSET))(this, a1);
	}
};
