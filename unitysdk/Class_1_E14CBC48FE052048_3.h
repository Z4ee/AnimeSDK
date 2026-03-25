#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF6C010A7514983E;
namespace System { class String; }

#define CLASS_1_E14CBC48FE052048_3__CTOR_OFFSET UNITYSDK_OFFSET(0x8C8FF20)

inline static constexpr unsigned int Class_1_E14CBC48FE052048_3_TypeDefinitionIndex = 52592;

class Class_1_E14CBC48FE052048_3 : public ::System::Object
{
public:
	::System::String* ShareCode; // 0x10
	::Class_1_FF6C010A7514983E* Base; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048_3__CTOR_OFFSET))(this);
	}
};
