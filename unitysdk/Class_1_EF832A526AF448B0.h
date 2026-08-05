#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_EF832A526AF448B0_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13C0E400)
#define CLASS_1_EF832A526AF448B0_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13C0E6C0)
#define CLASS_1_EF832A526AF448B0_METHOD_1_297EA0FD117460C4_OFFSET UNITYSDK_OFFSET(0x13C0E460)
#define CLASS_1_EF832A526AF448B0_METHOD_1_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x13C0E740)
#define CLASS_1_EF832A526AF448B0__CTOR_OFFSET UNITYSDK_OFFSET(0x13C0EA60)

inline static constexpr unsigned int Class_1_EF832A526AF448B0_TypeDefinitionIndex = 82283;

class Class_1_EF832A526AF448B0 : public ::System::Object
{
public:
	::System::Single Field_1_7; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF832A526AF448B0__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF832A526AF448B0_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_EF832A526AF448B0_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_297EA0FD117460C4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF832A526AF448B0_METHOD_1_297EA0FD117460C4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_EF832A526AF448B0_METHOD_1_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}
};
