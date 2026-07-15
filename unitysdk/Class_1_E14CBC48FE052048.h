#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_097F2E6093D93EC7;
namespace System { class String; }

#define CLASS_1_E14CBC48FE052048_CLEAR_OFFSET UNITYSDK_OFFSET(0x180C4630)
#define CLASS_1_E14CBC48FE052048__CTOR_OFFSET UNITYSDK_OFFSET(0x180C46C0)

inline static constexpr unsigned int Class_1_E14CBC48FE052048_TypeDefinitionIndex = 40822;

class Class_1_E14CBC48FE052048 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_097F2E6093D93EC7* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048_CLEAR_OFFSET))(this);
	}
};
