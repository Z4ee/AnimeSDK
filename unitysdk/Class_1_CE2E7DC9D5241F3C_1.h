#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_CE2E7DC9D5241F3C_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1135A800)
#define CLASS_1_CE2E7DC9D5241F3C_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1135A3D0)
#define CLASS_1_CE2E7DC9D5241F3C_1_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x1135A860)
#define CLASS_1_CE2E7DC9D5241F3C_1_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1135A450)
#define CLASS_1_CE2E7DC9D5241F3C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1135AA50)

inline static constexpr unsigned int Class_1_CE2E7DC9D5241F3C_1_TypeDefinitionIndex = 66108;

class Class_1_CE2E7DC9D5241F3C_1 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2E7DC9D5241F3C_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_CE2E7DC9D5241F3C_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CE2E7DC9D5241F3C_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_CE2E7DC9D5241F3C_1_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CE2E7DC9D5241F3C_1_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}
};
