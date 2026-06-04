#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_97;
namespace System { class String; }

#define CLASS_1_3925C3F12C34B450__CTOR_OFFSET UNITYSDK_OFFSET(0x18DACFD0)

inline static constexpr unsigned int Class_1_3925C3F12C34B450_TypeDefinitionIndex = 39877;

class Class_1_3925C3F12C34B450 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_97* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3925C3F12C34B450__CTOR_OFFSET))(this);
	}
};
