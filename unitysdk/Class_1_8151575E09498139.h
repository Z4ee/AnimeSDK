#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8151575E09498139__CTOR_OFFSET UNITYSDK_OFFSET(0xF256140)

inline static constexpr unsigned int Class_1_8151575E09498139_TypeDefinitionIndex = 43726;

class Class_1_8151575E09498139 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Single Field_1_2; // 0x14
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8151575E09498139__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
