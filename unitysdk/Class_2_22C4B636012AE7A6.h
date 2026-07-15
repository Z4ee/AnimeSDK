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

#define CLASS_2_22C4B636012AE7A6_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x179888C0)
#define CLASS_2_22C4B636012AE7A6_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x179888E0)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x17988DB0)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_0517EE1B2F8956FE_OFFSET UNITYSDK_OFFSET(0x17988F70)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17988940)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x17988D30)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_837B832C4CA7C908_OFFSET UNITYSDK_OFFSET(0x17989050)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_86FDF9B846367A7E_OFFSET UNITYSDK_OFFSET(0x179890F0)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_B75C7B573F2E1A01_OFFSET UNITYSDK_OFFSET(0x179893F0)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x17988FC0)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_C363D49B19844D3D_OFFSET UNITYSDK_OFFSET(0x17989210)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_DD784213055292FB_1_OFFSET UNITYSDK_OFFSET(0x17988B00)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x17988AB0)
#define CLASS_2_22C4B636012AE7A6_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17989630)
#define CLASS_2_22C4B636012AE7A6_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x179888D0)
#define CLASS_2_22C4B636012AE7A6__CTOR_OFFSET UNITYSDK_OFFSET(0x179897E0)
#define CLASS_2_22C4B636012AE7A6__ONBIND_OFFSET UNITYSDK_OFFSET(0x17988740)

inline static constexpr unsigned int Class_2_22C4B636012AE7A6_TypeDefinitionIndex = 68459;

class Class_2_22C4B636012AE7A6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_3; // 0x60
	::UnityEngine::UI::Text* Field_2_4; // 0x68
	::UnityEngine::UI::Image* Field_2_5; // 0x70
	::UnityEngine::UI::Image* Field_2_6; // 0x78
	::UnityEngine::UI::Text* Field_2_7; // 0x80
	::UnityEngine::Animation* Field_2_8; // 0x88
	::Class_1_1D7B69991D584C07* Field_2_9; // 0x90
	::UnityEngine::UI::Button* Field_2_10; // 0x98
	::UnityEngine::UI::Button* Field_2_11; // 0xA0
	::UnityEngine::Transform* Field_2_12; // 0xA8
	::UnityEngine::Transform* Field_2_13; // 0xB0
	::System::UInt32 Field_2_14; // 0xB8
	::System::Int32 _Index_k__BackingField; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_0517EE1B2F8956FE(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_0517EE1B2F8956FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_837B832C4CA7C908(::Class_1_1D7B69991D584C07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D7B69991D584C07*))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_837B832C4CA7C908_OFFSET))(this, a1);
	}

	::System::Void Method_2_86FDF9B846367A7E(::Class_1_49DA0019D59F36B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49DA0019D59F36B2*))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_86FDF9B846367A7E_OFFSET))(this, a1);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_DD784213055292FB_1_OFFSET))(this);
	}

	::System::Void Method_2_B75C7B573F2E1A01(::Class_1_49DA0019D59F36B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49DA0019D59F36B2*))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_B75C7B573F2E1A01_OFFSET))(this, a1);
	}

	::System::Void Method_2_C363D49B19844D3D(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_C363D49B19844D3D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_22C4B636012AE7A6_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}
};
