#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
class Class_2_828B2711AF58BA0B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F60537181F84C7F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11D06440)
#define CLASS_1_7F60537181F84C7F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11D06B80)
#define CLASS_1_7F60537181F84C7F_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x11D06C00)
#define CLASS_1_7F60537181F84C7F_METHOD_1_529A9CA1CFAF7016_OFFSET UNITYSDK_OFFSET(0x11D064A0)
#define CLASS_1_7F60537181F84C7F__CTOR_OFFSET UNITYSDK_OFFSET(0x11D07EB0)

inline static constexpr unsigned int Class_1_7F60537181F84C7F_TypeDefinitionIndex = 43198;

class Class_1_7F60537181F84C7F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_1_5; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_10; // 0x30
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_11; // 0x38
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_9; // 0x40
	::System::String* Field_1_8; // 0x48
	::System::Boolean Field_1_6; // 0x50
	::System::Boolean Field_1_4; // 0x51
	::MoleMole::Config::BaseProperty Field_1_2; // 0x54
	::MoleMole::Config::BaseProperty Field_1_0; // 0x58

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

	::System::Boolean Method_1_529A9CA1CFAF7016(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_METHOD_1_529A9CA1CFAF7016_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
