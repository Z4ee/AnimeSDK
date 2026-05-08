#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_7C9A70DC3FC57CDC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F3BF8FC1B925744_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1185A6F0)
#define CLASS_1_6F3BF8FC1B925744_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1185A2B0)
#define CLASS_1_6F3BF8FC1B925744_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x1185A750)
#define CLASS_1_6F3BF8FC1B925744_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1185A330)
#define CLASS_1_6F3BF8FC1B925744__CTOR_OFFSET UNITYSDK_OFFSET(0x1185A980)

inline static constexpr unsigned int Class_1_6F3BF8FC1B925744_TypeDefinitionIndex = 59157;

class Class_1_6F3BF8FC1B925744 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F3BF8FC1B925744__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_6F3BF8FC1B925744_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F3BF8FC1B925744_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_6F3BF8FC1B925744_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F3BF8FC1B925744_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}
};
