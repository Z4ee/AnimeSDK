#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }

#define CLASS_1_E04CAFF8A1BED1D3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A0C1B90)
#define CLASS_1_E04CAFF8A1BED1D3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A0C1DF0)
#define CLASS_1_E04CAFF8A1BED1D3_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x1A0C1BF0)
#define CLASS_1_E04CAFF8A1BED1D3_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1A0C1E70)
#define CLASS_1_E04CAFF8A1BED1D3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C2220)

inline static constexpr unsigned int Class_1_E04CAFF8A1BED1D3_TypeDefinitionIndex = 61042;

class Class_1_E04CAFF8A1BED1D3 : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_1; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E04CAFF8A1BED1D3__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E04CAFF8A1BED1D3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_E04CAFF8A1BED1D3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_E04CAFF8A1BED1D3_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E04CAFF8A1BED1D3_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}
};
