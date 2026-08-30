#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_07A210D994F284D8_10_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x187D2AE0)
#define CLASS_1_07A210D994F284D8_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187D2B30)
#define CLASS_1_07A210D994F284D8_10__CTOR_OFFSET UNITYSDK_OFFSET(0x187D2C30)

inline static constexpr unsigned int Class_1_07A210D994F284D8_10_TypeDefinitionIndex = 68258;

class Class_1_07A210D994F284D8_10 : public ::System::Object
{
public:
	::System::Boolean DKBNNGMAIFO; // 0x10
	::System::Boolean KKKIONIDKFA; // 0x11
	::System::UInt32 FDAKECLCKGP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_10__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_10_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_10_TOSTRING_OFFSET))(this);
	}
};
