#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;

#define CLASS_1_78EF39ACCF652772_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x97F3B20)
#define CLASS_1_78EF39ACCF652772_METHOD_1_E6A29CDAC03F1132_OFFSET UNITYSDK_OFFSET(0x97F3B80)
#define CLASS_1_78EF39ACCF652772__CTOR_OFFSET UNITYSDK_OFFSET(0x97F3C20)

inline static constexpr unsigned int Class_1_78EF39ACCF652772_TypeDefinitionIndex = 59596;

class Class_1_78EF39ACCF652772 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EF39ACCF652772__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_78EF39ACCF652772_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_E6A29CDAC03F1132(::System::UInt32 a1, ::System::UInt32 a2, ::Class_0_16E4307DCC419505_722* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_78EF39ACCF652772_METHOD_1_E6A29CDAC03F1132_OFFSET))(this, a1, a2, a3);
	}
};
