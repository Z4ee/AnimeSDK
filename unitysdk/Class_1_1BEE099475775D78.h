#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_067CA7F45E71A430.h"
#include "unitysdk/System/Object.h"

class Class_2_6DA289675FB59393;
namespace System { class String; }

#define CLASS_1_1BEE099475775D78__CTOR_OFFSET UNITYSDK_OFFSET(0x13969C40)

inline static constexpr unsigned int Class_1_1BEE099475775D78_TypeDefinitionIndex = 57838;

class Class_1_1BEE099475775D78 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::Class_2_6DA289675FB59393* Field_1_0; // 0x18
	::Enum_3_067CA7F45E71A430 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BEE099475775D78__CTOR_OFFSET))(this);
	}
};
