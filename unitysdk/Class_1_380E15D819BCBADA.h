#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_615D6B88F98D475B;
class Class_1_D0D2B3C2533F6DF2_3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_380E15D819BCBADA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB676E0)
#define CLASS_1_380E15D819BCBADA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFB66250)
#define CLASS_1_380E15D819BCBADA_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xFB662D0)
#define CLASS_1_380E15D819BCBADA_METHOD_1_2A40FD6706B84D8D_OFFSET UNITYSDK_OFFSET(0xFB67740)
#define CLASS_1_380E15D819BCBADA__CTOR_OFFSET UNITYSDK_OFFSET(0xFB68070)

inline static constexpr unsigned int Class_1_380E15D819BCBADA_TypeDefinitionIndex = 69771;

class Class_1_380E15D819BCBADA : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_615D6B88F98D475B*>* Field_1_9; // 0x18
	::System::String* Field_1_7; // 0x20
	::Class_1_D0D2B3C2533F6DF2_3* Field_1_12; // 0x28
	::System::String* Field_1_11; // 0x30
	::System::Collections::Generic::List_1<::Class_1_615D6B88F98D475B*>* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::String* Field_1_10; // 0x48
	::System::Int32 Field_1_2; // 0x50
	::System::Int32 Field_1_4; // 0x54
	::System::Int32 Field_1_0; // 0x58
	::System::Int32 Field_1_8; // 0x5C
	::System::Int32 Field_1_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_380E15D819BCBADA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_380E15D819BCBADA_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_380E15D819BCBADA_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_380E15D819BCBADA_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2A40FD6706B84D8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_380E15D819BCBADA_METHOD_1_2A40FD6706B84D8D_OFFSET))(this, a1, a2);
	}
};
