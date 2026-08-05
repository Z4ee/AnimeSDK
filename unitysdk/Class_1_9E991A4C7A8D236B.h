#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_5845D5E7E3311DD9;
namespace System { class String; }

#define CLASS_1_9E991A4C7A8D236B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x124E7710)
#define CLASS_1_9E991A4C7A8D236B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x124E7190)
#define CLASS_1_9E991A4C7A8D236B_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x124E7210)
#define CLASS_1_9E991A4C7A8D236B_METHOD_1_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x124E7770)
#define CLASS_1_9E991A4C7A8D236B__CTOR_OFFSET UNITYSDK_OFFSET(0x124E7AB0)

inline static constexpr unsigned int Class_1_9E991A4C7A8D236B_TypeDefinitionIndex = 56014;

class Class_1_9E991A4C7A8D236B : public ::System::Object
{
public:
	::Class_1_5845D5E7E3311DD9* Field_1_0; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E991A4C7A8D236B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_9E991A4C7A8D236B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E991A4C7A8D236B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E991A4C7A8D236B_METHOD_1_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_9E991A4C7A8D236B_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
