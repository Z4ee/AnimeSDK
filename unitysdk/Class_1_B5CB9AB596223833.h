#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_78C576179D59721D;
class Class_1_CF95A1A81C7C32A8;

#define CLASS_1_B5CB9AB596223833__CTOR_OFFSET UNITYSDK_OFFSET(0xF7468C0)

inline static constexpr unsigned int Class_1_B5CB9AB596223833_TypeDefinitionIndex = 80671;

class Class_1_B5CB9AB596223833 : public ::System::Object
{
public:
	::Class_1_CF95A1A81C7C32A8* Field_1_0; // 0x10
	::Class_1_78C576179D59721D* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5CB9AB596223833__CTOR_OFFSET))(this);
	}
};
