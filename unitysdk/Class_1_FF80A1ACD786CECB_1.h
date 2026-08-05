#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_1_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x13989B80)
#define CLASS_1_FF80A1ACD786CECB_1_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13989B70)
#define CLASS_1_FF80A1ACD786CECB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13989B60)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_1_TypeDefinitionIndex = 50251;

class Class_1_FF80A1ACD786CECB_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor(::System::Int32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_1_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_1_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
