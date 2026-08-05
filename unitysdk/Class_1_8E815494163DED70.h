#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_8E815494163DED70_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11FC6510)
#define CLASS_1_8E815494163DED70_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11FC5B10)
#define CLASS_1_8E815494163DED70_METHOD_1_33D9277D1D76DE9B_OFFSET UNITYSDK_OFFSET(0x11FC6570)
#define CLASS_1_8E815494163DED70_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x11FC5B90)
#define CLASS_1_8E815494163DED70__CTOR_OFFSET UNITYSDK_OFFSET(0x11FC6AD0)

inline static constexpr unsigned int Class_1_8E815494163DED70_TypeDefinitionIndex = 72965;

class Class_1_8E815494163DED70 : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::System::String* Field_1_11; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::Int32 Field_1_6; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E815494163DED70__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8E815494163DED70_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E815494163DED70_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_33D9277D1D76DE9B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E815494163DED70_METHOD_1_33D9277D1D76DE9B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_8E815494163DED70_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
