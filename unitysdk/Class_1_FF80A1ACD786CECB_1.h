#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD8B00)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_1_TypeDefinitionIndex = 42916;

class Class_1_FF80A1ACD786CECB_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_1__CTOR_OFFSET))(this, a1);
	}
};
