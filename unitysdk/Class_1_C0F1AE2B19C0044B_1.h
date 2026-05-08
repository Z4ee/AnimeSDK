#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_C0F1AE2B19C0044B_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x138ED370)
#define CLASS_1_C0F1AE2B19C0044B_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x138ECFB0)
#define CLASS_1_C0F1AE2B19C0044B_1_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x138ED030)
#define CLASS_1_C0F1AE2B19C0044B_1_METHOD_1_9144040ECD391705_OFFSET UNITYSDK_OFFSET(0x138ED3D0)
#define CLASS_1_C0F1AE2B19C0044B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x138ED570)

inline static constexpr unsigned int Class_1_C0F1AE2B19C0044B_1_TypeDefinitionIndex = 78785;

class Class_1_C0F1AE2B19C0044B_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F1AE2B19C0044B_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_C0F1AE2B19C0044B_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C0F1AE2B19C0044B_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_C0F1AE2B19C0044B_1_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9144040ECD391705(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C0F1AE2B19C0044B_1_METHOD_1_9144040ECD391705_OFFSET))(this, a1, a2);
	}
};
