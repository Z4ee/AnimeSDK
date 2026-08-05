#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_229DBE8532954410_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x159EE2D0)
#define CLASS_1_229DBE8532954410__CTOR_OFFSET UNITYSDK_OFFSET(0x159EE2C0)

inline static constexpr unsigned int Class_1_229DBE8532954410_TypeDefinitionIndex = 45073;

class Class_1_229DBE8532954410 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x1C

	::System::Void _ctor(::System::Action* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_229DBE8532954410__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_229DBE8532954410_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
