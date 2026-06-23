#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_A6E47B602565A201_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15E1C990)
#define CLASS_1_A6E47B602565A201_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15E1C5D0)
#define CLASS_1_A6E47B602565A201_METHOD_1_297EA0FD117460C4_OFFSET UNITYSDK_OFFSET(0x15E1C9F0)
#define CLASS_1_A6E47B602565A201_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x15E1C650)
#define CLASS_1_A6E47B602565A201__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1CC50)

inline static constexpr unsigned int Class_1_A6E47B602565A201_TypeDefinitionIndex = 77986;

class Class_1_A6E47B602565A201 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6E47B602565A201__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_A6E47B602565A201_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A6E47B602565A201_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_297EA0FD117460C4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A6E47B602565A201_METHOD_1_297EA0FD117460C4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_A6E47B602565A201_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
