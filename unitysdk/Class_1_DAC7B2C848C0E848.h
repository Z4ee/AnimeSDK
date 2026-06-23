#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_2E0139C1FD4A0C66;
namespace System { class String; }

#define CLASS_1_DAC7B2C848C0E848_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1DF01080)
#define CLASS_1_DAC7B2C848C0E848_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF01010)
#define CLASS_1_DAC7B2C848C0E848__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF00F90)
#define CLASS_1_DAC7B2C848C0E848__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF00F10)

inline static constexpr unsigned int Class_1_DAC7B2C848C0E848_TypeDefinitionIndex = 28834;

class Class_1_DAC7B2C848C0E848 : public ::System::Object
{
public:
	::Class_3_2E0139C1FD4A0C66* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1, ::Class_3_2E0139C1FD4A0C66* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_2E0139C1FD4A0C66*))((::PBYTE)hIl2Cpp + CLASS_1_DAC7B2C848C0E848__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_3_2E0139C1FD4A0C66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2E0139C1FD4A0C66*))((::PBYTE)hIl2Cpp + CLASS_1_DAC7B2C848C0E848__CTOR_1_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAC7B2C848C0E848_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAC7B2C848C0E848_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
