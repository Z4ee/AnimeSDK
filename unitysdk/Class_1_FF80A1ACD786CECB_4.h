#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_4__CTOR_OFFSET UNITYSDK_OFFSET(0x12AED3A0)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_4_TypeDefinitionIndex = 75885;

class Class_1_FF80A1ACD786CECB_4 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_4__CTOR_OFFSET))(this, a1);
	}
};
