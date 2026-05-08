#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6C587B1DA6AB62AC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10153B30)
#define CLASS_1_6C587B1DA6AB62AC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10154120)
#define CLASS_1_6C587B1DA6AB62AC_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x101541A0)
#define CLASS_1_6C587B1DA6AB62AC_METHOD_1_6064CE8C10DDEFF7_OFFSET UNITYSDK_OFFSET(0x10153B90)
#define CLASS_1_6C587B1DA6AB62AC__CTOR_OFFSET UNITYSDK_OFFSET(0x10155260)

inline static constexpr unsigned int Class_1_6C587B1DA6AB62AC_TypeDefinitionIndex = 70103;

class Class_1_6C587B1DA6AB62AC : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_5; // 0x10
	::Class_1_4ED21A115C97704D* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_10; // 0x20
	::Class_1_4ED21A115C97704D* Field_1_9; // 0x28
	::MoleMole::Config::DynamicString* Field_1_3; // 0x30
	::MoleMole::Config::DynamicFloat* Field_1_4; // 0x38
	::MoleMole::Config::DynamicInt* Field_1_6; // 0x40
	::MoleMole::Config::DynamicInt* Field_1_8; // 0x48
	::MoleMole::Config::DynamicInt* Field_1_2; // 0x50
	::System::Boolean Field_1_11; // 0x58
	::System::Boolean Field_1_1; // 0x59
	::System::Boolean Field_1_0; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C587B1DA6AB62AC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6C587B1DA6AB62AC_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_6C587B1DA6AB62AC_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_6C587B1DA6AB62AC_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6064CE8C10DDEFF7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6C587B1DA6AB62AC_METHOD_1_6064CE8C10DDEFF7_OFFSET))(this, a1, a2);
	}
};
