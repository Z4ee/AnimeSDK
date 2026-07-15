#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_07A210D994F284D8_8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F24B00)
#define CLASS_1_07A210D994F284D8_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15F24B50)
#define CLASS_1_07A210D994F284D8_8__CTOR_OFFSET UNITYSDK_OFFSET(0x15F24C50)

inline static constexpr unsigned int Class_1_07A210D994F284D8_8_TypeDefinitionIndex = 65246;

class Class_1_07A210D994F284D8_8 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11
	::System::UInt32 Field_1_2; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_8_TOSTRING_OFFSET))(this);
	}
};
