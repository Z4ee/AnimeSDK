#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_18;
class Class_1_945ACFB1FEBC7A2C_19;
namespace System { class String; }

#define CLASS_1_E14CBC48FE052048_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC52E0)

inline static constexpr unsigned int Class_1_E14CBC48FE052048_1_TypeDefinitionIndex = 49378;

class Class_1_E14CBC48FE052048_1 : public ::System::Object
{
public:
	::System::String* CreatedAt; // 0x10
	::Class_1_945ACFB1FEBC7A2C_19* Prompts; // 0x18
	::Class_1_945ACFB1FEBC7A2C_18* Model; // 0x20
	::System::String* TaskId; // 0x28
	::System::String* GeneratedBy; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048_1__CTOR_OFFSET))(this);
	}
};
