#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
class Class_2_2A56CCCB20A346FA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F60537181F84C7F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12129A30)
#define CLASS_1_7F60537181F84C7F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1212A170)
#define CLASS_1_7F60537181F84C7F_METHOD_1_529A9CA1CFAF7016_OFFSET UNITYSDK_OFFSET(0x12129A90)
#define CLASS_1_7F60537181F84C7F_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1212A1F0)
#define CLASS_1_7F60537181F84C7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1212B4B0)

inline static constexpr unsigned int Class_1_7F60537181F84C7F_TypeDefinitionIndex = 85769;

class Class_1_7F60537181F84C7F : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_9; // 0x20
	::System::String* Field_1_11; // 0x28
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_1_6; // 0x30
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_8; // 0x38
	::System::String* Field_1_4; // 0x40
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_10; // 0x48
	::MoleMole::Config::BaseProperty Field_1_1; // 0x50
	::System::Boolean Field_1_5; // 0x54
	::System::Boolean Field_1_7; // 0x55
	::MoleMole::Config::BaseProperty Field_1_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_529A9CA1CFAF7016(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_METHOD_1_529A9CA1CFAF7016_OFFSET))(this, a1, a2);
	}
};
