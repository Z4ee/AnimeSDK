#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_C1DCEF85B597765D_METHOD_1_31CF74C95A00A473_OFFSET UNITYSDK_OFFSET(0x1236B000)
#define CLASS_2_98CC9643C32C6170_CLASS_1_C1DCEF85B597765D__CTOR_OFFSET UNITYSDK_OFFSET(0x1236AFF0)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_C1DCEF85B597765D_TypeDefinitionIndex = 58120;

class Class_2_98CC9643C32C6170_Class_1_C1DCEF85B597765D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_C1DCEF85B597765D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_31CF74C95A00A473(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_C1DCEF85B597765D_METHOD_1_31CF74C95A00A473_OFFSET))(this, a1);
	}
};
