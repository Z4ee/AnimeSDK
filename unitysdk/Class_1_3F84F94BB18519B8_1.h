#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_3F84F94BB18519B8_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x100C6350)
#define CLASS_1_3F84F94BB18519B8_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x100C5F90)
#define CLASS_1_3F84F94BB18519B8_1_METHOD_1_46F5479027C46F32_OFFSET UNITYSDK_OFFSET(0x100C63B0)
#define CLASS_1_3F84F94BB18519B8_1_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x100C6010)
#define CLASS_1_3F84F94BB18519B8_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x100C66F0)
#define CLASS_1_3F84F94BB18519B8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x100C66E0)

inline static constexpr unsigned int Class_1_3F84F94BB18519B8_1_TypeDefinitionIndex = 57354;

class Class_1_3F84F94BB18519B8_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_1_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_46F5479027C46F32(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_1_METHOD_1_46F5479027C46F32_OFFSET))(this, a1, a2);
	}
};
