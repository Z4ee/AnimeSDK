#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D5377C51B3991026.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_8A50BFB20D9D2482_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10FFF170)
#define CLASS_1_8A50BFB20D9D2482_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10FFEDC0)
#define CLASS_1_8A50BFB20D9D2482_1_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x10FFEE40)
#define CLASS_1_8A50BFB20D9D2482_1_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x10FFF1D0)
#define CLASS_1_8A50BFB20D9D2482_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10FFF3A0)

inline static constexpr unsigned int Class_1_8A50BFB20D9D2482_1_TypeDefinitionIndex = 47548;

class Class_1_8A50BFB20D9D2482_1 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Enum_3_D5377C51B3991026 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
