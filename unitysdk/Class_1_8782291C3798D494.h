#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace System { class String; }

#define CLASS_1_8782291C3798D494_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E9E260)
#define CLASS_1_8782291C3798D494__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9E330)

inline static constexpr unsigned int Class_1_8782291C3798D494_TypeDefinitionIndex = 53342;

class Class_1_8782291C3798D494 : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8782291C3798D494__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8782291C3798D494_DISPOSE_OFFSET))(this);
	}
};
