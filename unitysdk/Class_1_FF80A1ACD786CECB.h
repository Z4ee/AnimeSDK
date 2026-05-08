#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE8B6010)
#define CLASS_1_FF80A1ACD786CECB_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xE8B6000)
#define CLASS_1_FF80A1ACD786CECB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE8B5FF0)
#define CLASS_1_FF80A1ACD786CECB__CTOR_OFFSET UNITYSDK_OFFSET(0xE8B5FE0)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_TypeDefinitionIndex = 38896;

class Class_1_FF80A1ACD786CECB : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
