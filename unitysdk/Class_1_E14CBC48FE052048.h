#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
namespace System { class String; }

#define CLASS_1_E14CBC48FE052048__CTOR_OFFSET UNITYSDK_OFFSET(0x12DCD630)

inline static constexpr unsigned int Class_1_E14CBC48FE052048_TypeDefinitionIndex = 84426;

class Class_1_E14CBC48FE052048 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_1EA8435E138F2E03* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048__CTOR_OFFSET))(this);
	}
};
