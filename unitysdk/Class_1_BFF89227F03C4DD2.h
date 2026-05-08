#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C0F1AE2B19C0044B;
class Class_1_C0F1AE2B19C0044B_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BFF89227F03C4DD2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15700A50)
#define CLASS_1_BFF89227F03C4DD2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15700220)
#define CLASS_1_BFF89227F03C4DD2_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x157002A0)
#define CLASS_1_BFF89227F03C4DD2_METHOD_1_88259E6F27FA9ED8_OFFSET UNITYSDK_OFFSET(0x15700AB0)
#define CLASS_1_BFF89227F03C4DD2__CTOR_OFFSET UNITYSDK_OFFSET(0x15700DA0)

inline static constexpr unsigned int Class_1_BFF89227F03C4DD2_TypeDefinitionIndex = 45992;

class Class_1_BFF89227F03C4DD2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C0F1AE2B19C0044B*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_1_C0F1AE2B19C0044B_1*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFF89227F03C4DD2__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_BFF89227F03C4DD2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BFF89227F03C4DD2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_88259E6F27FA9ED8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BFF89227F03C4DD2_METHOD_1_88259E6F27FA9ED8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_BFF89227F03C4DD2_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
