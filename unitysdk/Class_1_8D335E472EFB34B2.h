#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D335E472EFB34B2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x120F0840)
#define CLASS_1_8D335E472EFB34B2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x120EFF40)
#define CLASS_1_8D335E472EFB34B2_METHOD_1_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x120EFFC0)
#define CLASS_1_8D335E472EFB34B2_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x120EFEB0)
#define CLASS_1_8D335E472EFB34B2_METHOD_1_41430AFD3BF44B19_OFFSET UNITYSDK_OFFSET(0x120F08A0)
#define CLASS_1_8D335E472EFB34B2_METHOD_1_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x120EFE10)
#define CLASS_1_8D335E472EFB34B2__CTOR_OFFSET UNITYSDK_OFFSET(0x120F0F10)

inline static constexpr unsigned int Class_1_8D335E472EFB34B2_TypeDefinitionIndex = 48978;

class Class_1_8D335E472EFB34B2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D335E472EFB34B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D335E472EFB34B2_METHOD_1_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D335E472EFB34B2_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8D335E472EFB34B2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8D335E472EFB34B2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_8D335E472EFB34B2_METHOD_1_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_41430AFD3BF44B19(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8D335E472EFB34B2_METHOD_1_41430AFD3BF44B19_OFFSET))(this, a1, a2);
	}
};
