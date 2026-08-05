#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_40C4D493DB33DA57.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
class Class_2_2A56CCCB20A346FA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6528F6A8D44C1CD0_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FE3040)
#define CLASS_1_6528F6A8D44C1CD0_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16FE34B0)
#define CLASS_1_6528F6A8D44C1CD0_METHOD_1_14DF275FDD6E920A_OFFSET UNITYSDK_OFFSET(0x16FE3530)
#define CLASS_1_6528F6A8D44C1CD0_METHOD_1_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x16FE30A0)
#define CLASS_1_6528F6A8D44C1CD0__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE3D90)

inline static constexpr unsigned int Class_1_6528F6A8D44C1CD0_TypeDefinitionIndex = 69922;

class Class_1_6528F6A8D44C1CD0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_6; // 0x20
	::System::Boolean Field_1_0; // 0x28
	::Enum_3_40C4D493DB33DA57 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6528F6A8D44C1CD0__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6528F6A8D44C1CD0_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_6528F6A8D44C1CD0_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6528F6A8D44C1CD0_METHOD_1_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_14DF275FDD6E920A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_6528F6A8D44C1CD0_METHOD_1_14DF275FDD6E920A_OFFSET))(this, a1);
	}
};
