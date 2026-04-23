#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;

#define CLASS_1_C0277CE3A38B20B6_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0xB4933A0)
#define CLASS_1_C0277CE3A38B20B6_METHOD_1_F75C4B0F0C0FC599_OFFSET UNITYSDK_OFFSET(0xB493400)
#define CLASS_1_C0277CE3A38B20B6__CTOR_OFFSET UNITYSDK_OFFSET(0xB493740)

inline static constexpr unsigned int Class_1_C0277CE3A38B20B6_TypeDefinitionIndex = 59595;

class Class_1_C0277CE3A38B20B6 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_3; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0277CE3A38B20B6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C0277CE3A38B20B6_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F75C4B0F0C0FC599(::System::UInt32 a1, ::System::UInt32 a2, ::Class_0_16E4307DCC419505_722* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_C0277CE3A38B20B6_METHOD_1_F75C4B0F0C0FC599_OFFSET))(this, a1, a2, a3);
	}
};
