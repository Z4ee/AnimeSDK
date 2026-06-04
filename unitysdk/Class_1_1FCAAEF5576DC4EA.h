#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace System { class String; }

#define CLASS_1_1FCAAEF5576DC4EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13562C50)
#define CLASS_1_1FCAAEF5576DC4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x13562CC0)

inline static constexpr unsigned int Class_1_1FCAAEF5576DC4EA_TypeDefinitionIndex = 52190;

class Class_1_1FCAAEF5576DC4EA : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FCAAEF5576DC4EA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FCAAEF5576DC4EA_DISPOSE_OFFSET))(this);
	}
};
