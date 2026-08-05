#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A383C3E50D1AC51.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_F14620A85C7EDEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1642F630)

inline static constexpr unsigned int Class_2_F14620A85C7EDEFF_TypeDefinitionIndex = 46979;

class Class_2_F14620A85C7EDEFF : public ::System::Attribute
{
public:
	::Enum_3_6A383C3E50D1AC51 Field_2_0; // 0x10

	::System::Void _ctor(::Enum_3_6A383C3E50D1AC51 a1, ::Il2CppArray<::System::Type*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_6A383C3E50D1AC51, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_2_F14620A85C7EDEFF__CTOR_OFFSET))(this, a1, a2);
	}
};
