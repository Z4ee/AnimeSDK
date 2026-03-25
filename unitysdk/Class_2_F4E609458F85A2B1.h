#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_1D7B69991D584C07;
class Class_1_49DA0019D59F36B2;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_F4E609458F85A2B1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x11909850)
#define CLASS_2_F4E609458F85A2B1_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x11909870)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_0517EE1B2F8956FE_OFFSET UNITYSDK_OFFSET(0x11909EE0)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x119098D0)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_47A94975B0610A2C_OFFSET UNITYSDK_OFFSET(0x1190A2C0)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1190A7F0)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x1190A850)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1190A790)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x11909A90)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x11909CD0)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_9796A29E51C21389_OFFSET UNITYSDK_OFFSET(0x1190A170)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x11909F30)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x1190A920)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0x11909FC0)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x11909D50)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0x1190A500)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x11909A40)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_E2324A13939022E3_OFFSET UNITYSDK_OFFSET(0x1190A060)
#define CLASS_2_F4E609458F85A2B1_METHOD_2_F0880AD023811E29_OFFSET UNITYSDK_OFFSET(0x1190A8B0)
#define CLASS_2_F4E609458F85A2B1_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x11909860)
#define CLASS_2_F4E609458F85A2B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1190A700)
#define CLASS_2_F4E609458F85A2B1__ONBIND_OFFSET UNITYSDK_OFFSET(0x119092F0)
#define CLASS_2_F4E609458F85A2B1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1190A730)

inline static constexpr unsigned int Class_2_F4E609458F85A2B1_TypeDefinitionIndex = 58753;

class Class_2_F4E609458F85A2B1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	// static const ::System::String* Field_2_14; // 0x0
	::UnityEngine::UI::Text* Field_2_2; // 0x60
	::Class_1_1D7B69991D584C07* Field_2_11; // 0x68
	::UnityEngine::Transform* Field_2_8; // 0x70
	::UnityEngine::UI::Text* Field_2_3; // 0x78
	::UnityEngine::Animation* Field_2_5; // 0x80
	::UnityEngine::UI::Button* Field_2_6; // 0x88
	::RPG::GameCore::LevelUIComponent* Field_2_10; // 0x90
	::UnityEngine::UI::Image* Field_2_0; // 0x98
	::UnityEngine::Transform* Field_2_4; // 0xA0
	::UnityEngine::UI::Button* Field_2_7; // 0xA8
	::UnityEngine::UI::Image* Field_2_1; // 0xB0
	::System::Int32 _Index_k__BackingField; // 0xB8
	::System::UInt32 Field_2_15; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_0517EE1B2F8956FE(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_0517EE1B2F8956FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF0EF72A03B510AB(::Class_1_1D7B69991D584C07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D7B69991D584C07*))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_CF0EF72A03B510AB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E2324A13939022E3(::Class_1_49DA0019D59F36B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49DA0019D59F36B2*))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_E2324A13939022E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_47A94975B0610A2C(::Class_1_49DA0019D59F36B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49DA0019D59F36B2*))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_47A94975B0610A2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9796A29E51C21389(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_9796A29E51C21389_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_F0880AD023811E29(::InControl::InputDeviceClass P0)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_F0880AD023811E29_OFFSET))(this, P0);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F4E609458F85A2B1_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}
};
