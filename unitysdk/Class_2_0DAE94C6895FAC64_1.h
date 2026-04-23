#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_0DAE94C6895FAC64_1_GET_PARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x191ACDF0)
#define CLASS_2_0DAE94C6895FAC64_1__CTOR_OFFSET UNITYSDK_OFFSET(0x191ACDE0)

inline static constexpr unsigned int Class_2_0DAE94C6895FAC64_1_TypeDefinitionIndex = 8827;

class Class_2_0DAE94C6895FAC64_1 : public ::System::Attribute
{
public:
	::System::String* _ParameterName_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_ParameterName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_1_GET_PARAMETERNAME_OFFSET))(this);
	}
};
