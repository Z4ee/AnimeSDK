#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_C857964561B1FE61_1_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x16F6CCD0)
#define CLASS_1_C857964561B1FE61_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6CCC0)

inline static constexpr unsigned int Class_1_C857964561B1FE61_1_TypeDefinitionIndex = 79050;

class Class_1_C857964561B1FE61_1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C857964561B1FE61_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C857964561B1FE61_1_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}
};
