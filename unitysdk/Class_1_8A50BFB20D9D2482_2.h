#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8ADF0E55BE2EB817.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_8A50BFB20D9D2482_2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x119A1260)
#define CLASS_1_8A50BFB20D9D2482_2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x119A0EB0)
#define CLASS_1_8A50BFB20D9D2482_2_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x119A0F30)
#define CLASS_1_8A50BFB20D9D2482_2_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x119A12C0)
#define CLASS_1_8A50BFB20D9D2482_2__CTOR_OFFSET UNITYSDK_OFFSET(0x119A1490)

inline static constexpr unsigned int Class_1_8A50BFB20D9D2482_2_TypeDefinitionIndex = 63416;

class Class_1_8A50BFB20D9D2482_2 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Enum_3_8ADF0E55BE2EB817 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_2__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_2_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_2_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
