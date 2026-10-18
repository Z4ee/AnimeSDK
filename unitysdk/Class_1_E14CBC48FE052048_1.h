#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_17;
class Class_1_945ACFB1FEBC7A2C_18;
namespace System { class String; }

#define CLASS_1_E14CBC48FE052048_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1556ADD0)

inline static constexpr unsigned int Class_1_E14CBC48FE052048_1_TypeDefinitionIndex = 48935;

class Class_1_E14CBC48FE052048_1 : public ::System::Object
{
public:
	::System::String* GeneratedBy; // 0x10
	::System::String* OperationMode; // 0x18
	::Class_1_945ACFB1FEBC7A2C_18* Prompts; // 0x20
	::Class_1_945ACFB1FEBC7A2C_17* Model; // 0x28
	::System::String* CreatedAt; // 0x30
	::System::String* TaskId; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048_1__CTOR_OFFSET))(this);
	}
};
