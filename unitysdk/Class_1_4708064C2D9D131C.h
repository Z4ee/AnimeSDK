#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }

#define CLASS_1_4708064C2D9D131C_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14CB8600)
#define CLASS_1_4708064C2D9D131C_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14CB8050)
#define CLASS_1_4708064C2D9D131C_METHOD_1_4A800470AF0169D6_OFFSET UNITYSDK_OFFSET(0x14CB8660)
#define CLASS_1_4708064C2D9D131C_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x14CB80D0)
#define CLASS_1_4708064C2D9D131C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB88D0)

inline static constexpr unsigned int Class_1_4708064C2D9D131C_TypeDefinitionIndex = 72097;

class Class_1_4708064C2D9D131C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_2; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4708064C2D9D131C__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_4708064C2D9D131C_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4708064C2D9D131C_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_4708064C2D9D131C_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4A800470AF0169D6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4708064C2D9D131C_METHOD_1_4A800470AF0169D6_OFFSET))(this, a1, a2);
	}
};
