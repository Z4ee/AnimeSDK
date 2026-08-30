#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E01A963C39A160F3;
namespace System { class String; }

#define CLASS_1_E14CBC48FE052048_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4666E0)

inline static constexpr unsigned int Class_1_E14CBC48FE052048_3_TypeDefinitionIndex = 64851;

class Class_1_E14CBC48FE052048_3 : public ::System::Object
{
public:
	::System::String* ID; // 0x10
	::Class_1_E01A963C39A160F3* Base; // 0x18
	::System::String* OpType; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048_3__CTOR_OFFSET))(this);
	}
};
