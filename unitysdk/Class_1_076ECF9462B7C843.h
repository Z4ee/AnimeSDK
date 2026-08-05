#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D65F42F0EEB3310.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_076ECF9462B7C843_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EF0D00)
#define CLASS_1_076ECF9462B7C843_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16EF0FB0)
#define CLASS_1_076ECF9462B7C843_METHOD_1_D4E1509D156FE808_OFFSET UNITYSDK_OFFSET(0x16EF0D60)
#define CLASS_1_076ECF9462B7C843_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x16EF1030)
#define CLASS_1_076ECF9462B7C843__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF1580)

inline static constexpr unsigned int Class_1_076ECF9462B7C843_TypeDefinitionIndex = 40656;

class Class_1_076ECF9462B7C843 : public ::System::Object
{
public:
	::System::Object* Field_1_6; // 0x10
	::System::String* Field_1_0; // 0x18
	::MoleMole::Config::PropertyModifyFunction Field_1_7; // 0x20
	::Enum_3_5D65F42F0EEB3310 Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_076ECF9462B7C843__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_076ECF9462B7C843_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_076ECF9462B7C843_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_076ECF9462B7C843_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D4E1509D156FE808(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_076ECF9462B7C843_METHOD_1_D4E1509D156FE808_OFFSET))(this, a1, a2);
	}
};
