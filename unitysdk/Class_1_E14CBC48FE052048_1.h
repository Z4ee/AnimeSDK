#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF6C010A7514983E;
namespace System { class String; }

#define CLASS_1_E14CBC48FE052048_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D7E00)

inline static constexpr unsigned int Class_1_E14CBC48FE052048_1_TypeDefinitionIndex = 52594;

class Class_1_E14CBC48FE052048_1 : public ::System::Object
{
public:
	::System::String* OpType; // 0x10
	::System::String* ID; // 0x18
	::Class_1_FF6C010A7514983E* Base; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048_1__CTOR_OFFSET))(this);
	}
};
