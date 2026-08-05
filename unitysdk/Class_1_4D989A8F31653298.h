#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D65F42F0EEB3310.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_4D989A8F31653298_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B8EE10)
#define CLASS_1_4D989A8F31653298_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18B8F080)
#define CLASS_1_4D989A8F31653298_METHOD_1_723D4849983651D2_OFFSET UNITYSDK_OFFSET(0x18B8EE70)
#define CLASS_1_4D989A8F31653298_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x18B8F100)
#define CLASS_1_4D989A8F31653298__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8F540)

inline static constexpr unsigned int Class_1_4D989A8F31653298_TypeDefinitionIndex = 59344;

class Class_1_4D989A8F31653298 : public ::System::Object
{
public:
	::System::Object* Field_1_7; // 0x10
	::System::String* Field_1_1; // 0x18
	::Enum_3_5D65F42F0EEB3310 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D989A8F31653298__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D989A8F31653298_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_4D989A8F31653298_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_4D989A8F31653298_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_723D4849983651D2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D989A8F31653298_METHOD_1_723D4849983651D2_OFFSET))(this, a1, a2);
	}
};
