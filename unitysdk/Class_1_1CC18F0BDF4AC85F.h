#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_3F84F94BB18519B8_1;

#define CLASS_1_1CC18F0BDF4AC85F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x150BD030)
#define CLASS_1_1CC18F0BDF4AC85F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x150BCC30)
#define CLASS_1_1CC18F0BDF4AC85F_METHOD_1_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x150BD090)
#define CLASS_1_1CC18F0BDF4AC85F_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x150BCCB0)
#define CLASS_1_1CC18F0BDF4AC85F__CTOR_OFFSET UNITYSDK_OFFSET(0x150BD330)

inline static constexpr unsigned int Class_1_1CC18F0BDF4AC85F_TypeDefinitionIndex = 66518;

class Class_1_1CC18F0BDF4AC85F : public ::System::Object
{
public:
	::Class_1_3F84F94BB18519B8_1* Field_1_0; // 0x10
	::System::Boolean Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC18F0BDF4AC85F__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_1CC18F0BDF4AC85F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1CC18F0BDF4AC85F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1CC18F0BDF4AC85F_METHOD_1_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_1CC18F0BDF4AC85F_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
