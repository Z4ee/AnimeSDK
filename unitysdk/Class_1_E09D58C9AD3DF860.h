#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_E09D58C9AD3DF860_METHOD_1_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x110C5AF0)
#define CLASS_1_E09D58C9AD3DF860__CTOR_OFFSET UNITYSDK_OFFSET(0x110C5AD0)

inline static constexpr unsigned int Class_1_E09D58C9AD3DF860_TypeDefinitionIndex = 39962;

class Class_1_E09D58C9AD3DF860 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Single Field_1_0; // 0x1C

	::System::Void _ctor(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E09D58C9AD3DF860__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E09D58C9AD3DF860_METHOD_1_CF8BA38996D09531_OFFSET))(this);
	}
};
