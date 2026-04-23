#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;
namespace System { class String; }

#define CLASS_1_1FCAAEF5576DC4EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11E604E0)
#define CLASS_1_1FCAAEF5576DC4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x11E60550)

inline static constexpr unsigned int Class_1_1FCAAEF5576DC4EA_TypeDefinitionIndex = 51522;

class Class_1_1FCAAEF5576DC4EA : public ::System::Object
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FCAAEF5576DC4EA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FCAAEF5576DC4EA_DISPOSE_OFFSET))(this);
	}
};
