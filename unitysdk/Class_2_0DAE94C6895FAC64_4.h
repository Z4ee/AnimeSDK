#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_0DAE94C6895FAC64_4_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E5BBA80)
#define CLASS_2_0DAE94C6895FAC64_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5BBA70)
#define CLASS_2_0DAE94C6895FAC64_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BBA60)

inline static constexpr unsigned int Class_2_0DAE94C6895FAC64_4_TypeDefinitionIndex = 42472;

class Class_2_0DAE94C6895FAC64_4 : public ::System::Attribute
{
public:
	::System::String* _Id_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_4__CTOR_1_OFFSET))(this, a1);
	}

	::System::String* get_Id()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAE94C6895FAC64_4_GET_ID_OFFSET))(this);
	}
};
