#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_0DAE94C6895FAC64_GET_PARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x17AD82B0)
#define CLASS_2_0DAE94C6895FAC64__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD82A0)

inline static constexpr unsigned int Class_2_0DAE94C6895FAC64_TypeDefinitionIndex = 5307;

class Class_2_0DAE94C6895FAC64 : public ::System::Attribute
{
public:
	::System::String* _ParameterName_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_ParameterName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_GET_PARAMETERNAME_OFFSET))(this);
	}
};
