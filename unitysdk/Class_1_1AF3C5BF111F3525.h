#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E398E2F4402CE967;
namespace System { class String; }

#define CLASS_1_1AF3C5BF111F3525__CTOR_OFFSET UNITYSDK_OFFSET(0x1D325750)

inline static constexpr unsigned int Class_1_1AF3C5BF111F3525_TypeDefinitionIndex = 55493;

class Class_1_1AF3C5BF111F3525 : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::Class_1_E398E2F4402CE967* Field_1_2; // 0x18
	::System::String* Field_1_7; // 0x20
	::System::Boolean Field_1_6; // 0x28
	::System::Boolean Field_1_5; // 0x29
	::System::Single Field_1_1; // 0x2C
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AF3C5BF111F3525__CTOR_OFFSET))(this);
	}
};
