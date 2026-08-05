#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B7070520540ABC52_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141355D0)
#define CLASS_1_B7070520540ABC52_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14134E80)
#define CLASS_1_B7070520540ABC52_METHOD_1_C7F9ED430E054F62_OFFSET UNITYSDK_OFFSET(0x14135630)
#define CLASS_1_B7070520540ABC52_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x14134F00)
#define CLASS_1_B7070520540ABC52__CTOR_OFFSET UNITYSDK_OFFSET(0x14135BB0)

inline static constexpr unsigned int Class_1_B7070520540ABC52_TypeDefinitionIndex = 68708;

class Class_1_B7070520540ABC52 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_7; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C7F9ED430E054F62(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_METHOD_1_C7F9ED430E054F62_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
