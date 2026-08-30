#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1050BB558D637BF;
namespace System { class String; }

#define CLASS_1_E14CBC48FE052048_5__CTOR_OFFSET UNITYSDK_OFFSET(0xC11AC10)

inline static constexpr unsigned int Class_1_E14CBC48FE052048_5_TypeDefinitionIndex = 64847;

class Class_1_E14CBC48FE052048_5 : public ::System::Object
{
public:
	::Class_1_B1050BB558D637BF* Data; // 0x10
	::System::String* ID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048_5__CTOR_OFFSET))(this);
	}
};
