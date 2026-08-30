#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_0DAE94C6895FAC64_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C79C650)

inline static constexpr unsigned int Class_2_0DAE94C6895FAC64_2_TypeDefinitionIndex = 24707;

class Class_2_0DAE94C6895FAC64_2 : public ::System::Attribute
{
public:
	::System::String* GNMAAEDGDBA; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_2__CTOR_OFFSET))(this, a1);
	}
};
