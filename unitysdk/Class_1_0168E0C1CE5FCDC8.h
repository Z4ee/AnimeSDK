#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0168E0C1CE5FCDC8_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14578B80)
#define CLASS_1_0168E0C1CE5FCDC8_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14578EB0)
#define CLASS_1_0168E0C1CE5FCDC8_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x14578BE0)
#define CLASS_1_0168E0C1CE5FCDC8_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x14578F30)
#define CLASS_1_0168E0C1CE5FCDC8__CTOR_OFFSET UNITYSDK_OFFSET(0x14579290)

inline static constexpr unsigned int Class_1_0168E0C1CE5FCDC8_TypeDefinitionIndex = 56342;

class Class_1_0168E0C1CE5FCDC8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0168E0C1CE5FCDC8__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0168E0C1CE5FCDC8_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_0168E0C1CE5FCDC8_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_0168E0C1CE5FCDC8_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0168E0C1CE5FCDC8_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
	}
};
