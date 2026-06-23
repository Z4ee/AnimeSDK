#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E0707159A4819BEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_076ECF9462B7C843_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15204C00)
#define CLASS_1_076ECF9462B7C843_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15204EB0)
#define CLASS_1_076ECF9462B7C843_METHOD_1_D4E1509D156FE808_OFFSET UNITYSDK_OFFSET(0x15204C60)
#define CLASS_1_076ECF9462B7C843_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x15204F30)
#define CLASS_1_076ECF9462B7C843__CTOR_OFFSET UNITYSDK_OFFSET(0x152054A0)

inline static constexpr unsigned int Class_1_076ECF9462B7C843_TypeDefinitionIndex = 52350;

class Class_1_076ECF9462B7C843 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Object* Field_1_2; // 0x18
	::Enum_3_E0707159A4819BEE Field_1_3; // 0x20
	::MoleMole::Config::PropertyModifyFunction Field_1_1; // 0x24

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

	::System::Boolean Method_1_D4E1509D156FE808(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_076ECF9462B7C843_METHOD_1_D4E1509D156FE808_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_076ECF9462B7C843_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
