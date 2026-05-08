#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_786E4F3802BBF710_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFE67530)
#define CLASS_1_786E4F3802BBF710_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFE66BF0)
#define CLASS_1_786E4F3802BBF710_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0xFE66C70)
#define CLASS_1_786E4F3802BBF710_METHOD_1_41430AFD3BF44B19_OFFSET UNITYSDK_OFFSET(0xFE67590)
#define CLASS_1_786E4F3802BBF710__CTOR_OFFSET UNITYSDK_OFFSET(0xFE67BF0)

inline static constexpr unsigned int Class_1_786E4F3802BBF710_TypeDefinitionIndex = 80320;

class Class_1_786E4F3802BBF710 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_786E4F3802BBF710__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_786E4F3802BBF710_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_786E4F3802BBF710_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_786E4F3802BBF710_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_41430AFD3BF44B19(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_786E4F3802BBF710_METHOD_1_41430AFD3BF44B19_OFFSET))(this, a1, a2);
	}
};
