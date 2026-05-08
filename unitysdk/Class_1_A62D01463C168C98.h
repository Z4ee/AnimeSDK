#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A62D01463C168C98_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13F95A40)
#define CLASS_1_A62D01463C168C98_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13F95350)
#define CLASS_1_A62D01463C168C98_METHOD_1_72BF6AD1701A5726_OFFSET UNITYSDK_OFFSET(0x13F95AA0)
#define CLASS_1_A62D01463C168C98_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x13F953D0)
#define CLASS_1_A62D01463C168C98__CTOR_OFFSET UNITYSDK_OFFSET(0x13F95F70)

inline static constexpr unsigned int Class_1_A62D01463C168C98_TypeDefinitionIndex = 71557;

class Class_1_A62D01463C168C98 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A62D01463C168C98__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_A62D01463C168C98_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A62D01463C168C98_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_72BF6AD1701A5726(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A62D01463C168C98_METHOD_1_72BF6AD1701A5726_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_A62D01463C168C98_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
