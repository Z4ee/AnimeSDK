#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_3_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xE12DD90)
#define CLASS_1_FF80A1ACD786CECB_3_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE12DD80)
#define CLASS_1_FF80A1ACD786CECB_3__CTOR_OFFSET UNITYSDK_OFFSET(0xE12DD70)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_3_TypeDefinitionIndex = 45745;

class Class_1_FF80A1ACD786CECB_3 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor(::System::Int32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
