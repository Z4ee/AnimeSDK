#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_3F84F94BB18519B8_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1125F470)
#define CLASS_1_3F84F94BB18519B8_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1125F0D0)
#define CLASS_1_3F84F94BB18519B8_1_METHOD_1_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x1125F150)
#define CLASS_1_3F84F94BB18519B8_1_METHOD_1_46F5479027C46F32_OFFSET UNITYSDK_OFFSET(0x1125F4D0)
#define CLASS_1_3F84F94BB18519B8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1125F800)

inline static constexpr unsigned int Class_1_3F84F94BB18519B8_1_TypeDefinitionIndex = 73610;

class Class_1_3F84F94BB18519B8_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

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

	::System::Boolean Method_1_46F5479027C46F32(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_1_METHOD_1_46F5479027C46F32_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_1_METHOD_1_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}
};
