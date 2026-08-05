#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_83CB18DF2BB6E6AB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12F594A0)
#define CLASS_1_83CB18DF2BB6E6AB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12F59810)
#define CLASS_1_83CB18DF2BB6E6AB_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x12F59890)
#define CLASS_1_83CB18DF2BB6E6AB_METHOD_1_9D3F039E4985BDFB_OFFSET UNITYSDK_OFFSET(0x12F59500)
#define CLASS_1_83CB18DF2BB6E6AB__CTOR_OFFSET UNITYSDK_OFFSET(0x12F5A120)

inline static constexpr unsigned int Class_1_83CB18DF2BB6E6AB_TypeDefinitionIndex = 61525;

class Class_1_83CB18DF2BB6E6AB : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::String* Field_1_6; // 0x20
	::MoleMole::Config::BaseProperty Field_1_1; // 0x28
	::MoleMole::Config::BaseProperty Field_1_3; // 0x2C
	::MoleMole::Config::BaseProperty Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83CB18DF2BB6E6AB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83CB18DF2BB6E6AB_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_83CB18DF2BB6E6AB_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_83CB18DF2BB6E6AB_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9D3F039E4985BDFB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83CB18DF2BB6E6AB_METHOD_1_9D3F039E4985BDFB_OFFSET))(this, a1, a2);
	}
};
