#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_92FC772495A5D164_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x134F27C0)
#define CLASS_1_92FC772495A5D164_FROMFLX_OFFSET UNITYSDK_OFFSET(0x134F2B60)
#define CLASS_1_92FC772495A5D164_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x134F2BE0)
#define CLASS_1_92FC772495A5D164_METHOD_1_3338E25D676DBB67_OFFSET UNITYSDK_OFFSET(0x134F2820)
#define CLASS_1_92FC772495A5D164__CTOR_OFFSET UNITYSDK_OFFSET(0x134F33E0)

inline static constexpr unsigned int Class_1_92FC772495A5D164_TypeDefinitionIndex = 66476;

class Class_1_92FC772495A5D164 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Boolean Field_1_4; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92FC772495A5D164__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92FC772495A5D164_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_92FC772495A5D164_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3338E25D676DBB67(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92FC772495A5D164_METHOD_1_3338E25D676DBB67_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_92FC772495A5D164_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
	}
};
