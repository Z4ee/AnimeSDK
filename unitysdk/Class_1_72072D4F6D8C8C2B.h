#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D65F42F0EEB3310.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_72072D4F6D8C8C2B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF7AB460)
#define CLASS_1_72072D4F6D8C8C2B_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF7AB7C0)
#define CLASS_1_72072D4F6D8C8C2B_METHOD_1_03482897E56BA861_OFFSET UNITYSDK_OFFSET(0xF7AB4C0)
#define CLASS_1_72072D4F6D8C8C2B_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xF7AB840)
#define CLASS_1_72072D4F6D8C8C2B__CTOR_OFFSET UNITYSDK_OFFSET(0xF7ABE40)

inline static constexpr unsigned int Class_1_72072D4F6D8C8C2B_TypeDefinitionIndex = 71222;

class Class_1_72072D4F6D8C8C2B : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::Enum_3_5D65F42F0EEB3310 Field_1_7; // 0x20
	::System::Boolean Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72072D4F6D8C8C2B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_72072D4F6D8C8C2B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_72072D4F6D8C8C2B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_72072D4F6D8C8C2B_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_03482897E56BA861(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_72072D4F6D8C8C2B_METHOD_1_03482897E56BA861_OFFSET))(this, a1, a2);
	}
};
