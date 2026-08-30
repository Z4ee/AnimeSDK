#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_AC5F653530D14DEB_METHOD_1_FD2117D5430E361C_OFFSET UNITYSDK_OFFSET(0xBA63420)
#define CLASS_1_AC5F653530D14DEB__CTOR_OFFSET UNITYSDK_OFFSET(0xBA634D0)

inline static constexpr unsigned int Class_1_AC5F653530D14DEB_TypeDefinitionIndex = 79018;

class Class_1_AC5F653530D14DEB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC5F653530D14DEB__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_FD2117D5430E361C(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC5F653530D14DEB_METHOD_1_FD2117D5430E361C_OFFSET))(a1, a2);
	}
};
