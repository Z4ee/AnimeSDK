#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace System { class Action; }

#define CLASS_2_A9102F935EC52800_CLASS_1_E149353157B2BDDC_METHOD_1_BF36CA78EE3B5455_OFFSET UNITYSDK_OFFSET(0x13A2B2D0)
#define CLASS_2_A9102F935EC52800_CLASS_1_E149353157B2BDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2B2C0)

inline static constexpr unsigned int Class_2_A9102F935EC52800_Class_1_E149353157B2BDDC_TypeDefinitionIndex = 74480;

class Class_2_A9102F935EC52800_Class_1_E149353157B2BDDC : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9102F935EC52800_CLASS_1_E149353157B2BDDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BF36CA78EE3B5455(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A9102F935EC52800_CLASS_1_E149353157B2BDDC_METHOD_1_BF36CA78EE3B5455_OFFSET))(this, a1);
	}
};
