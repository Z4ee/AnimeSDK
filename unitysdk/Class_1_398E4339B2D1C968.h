#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_3F84F94BB18519B8_1;

#define CLASS_1_398E4339B2D1C968_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14232F70)
#define CLASS_1_398E4339B2D1C968_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14232AD0)
#define CLASS_1_398E4339B2D1C968_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x14232B50)
#define CLASS_1_398E4339B2D1C968_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x14232A50)
#define CLASS_1_398E4339B2D1C968_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x14232FD0)
#define CLASS_1_398E4339B2D1C968__CTOR_OFFSET UNITYSDK_OFFSET(0x14233250)

inline static constexpr unsigned int Class_1_398E4339B2D1C968_TypeDefinitionIndex = 48893;

class Class_1_398E4339B2D1C968 : public ::System::Object
{
public:
	::Class_1_3F84F94BB18519B8_1* Field_1_0; // 0x10
	::Class_1_3F84F94BB18519B8_1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_398E4339B2D1C968__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_398E4339B2D1C968_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_398E4339B2D1C968_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398E4339B2D1C968_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398E4339B2D1C968_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_398E4339B2D1C968_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
