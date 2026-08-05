#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_9E991A4C7A8D236B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FE7E81DE5EE6F03B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D59FC0)
#define CLASS_1_FE7E81DE5EE6F03B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D59A80)
#define CLASS_1_FE7E81DE5EE6F03B_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x13D59B00)
#define CLASS_1_FE7E81DE5EE6F03B_METHOD_1_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x13D5A020)
#define CLASS_1_FE7E81DE5EE6F03B__CTOR_OFFSET UNITYSDK_OFFSET(0x13D5A380)

inline static constexpr unsigned int Class_1_FE7E81DE5EE6F03B_TypeDefinitionIndex = 79266;

class Class_1_FE7E81DE5EE6F03B : public ::System::Object
{
public:
	::Class_1_9E991A4C7A8D236B* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_9E991A4C7A8D236B*>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE7E81DE5EE6F03B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_FE7E81DE5EE6F03B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FE7E81DE5EE6F03B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_FE7E81DE5EE6F03B_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FE7E81DE5EE6F03B_METHOD_1_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}
};
