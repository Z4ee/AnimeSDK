#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class HPBar; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_8720C62A09922894_2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1456E060)
#define CLASS_2_8720C62A09922894_2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1456E150)
#define CLASS_2_8720C62A09922894_2_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1456D300)
#define CLASS_2_8720C62A09922894_2_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1456D320)
#define CLASS_2_8720C62A09922894_2_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1456D330)
#define CLASS_2_8720C62A09922894_2_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1456D600)
#define CLASS_2_8720C62A09922894_2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1456E310)
#define CLASS_2_8720C62A09922894_2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1456E2B0)
#define CLASS_2_8720C62A09922894_2_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x1456DF80)
#define CLASS_2_8720C62A09922894_2_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1456D4A0)
#define CLASS_2_8720C62A09922894_2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1456DFD0)
#define CLASS_2_8720C62A09922894_2_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x1456D590)
#define CLASS_2_8720C62A09922894_2_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1456D6F0)
#define CLASS_2_8720C62A09922894_2_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1456DC00)
#define CLASS_2_8720C62A09922894_2_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1456D310)
#define CLASS_2_8720C62A09922894_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1456E220)
#define CLASS_2_8720C62A09922894_2__ONBIND_OFFSET UNITYSDK_OFFSET(0x1456CEC0)
#define CLASS_2_8720C62A09922894_2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1456E370)
#define CLASS_2_8720C62A09922894_2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1456E3D0)
#define CLASS_2_8720C62A09922894_2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1456E250)

inline static constexpr unsigned int Class_2_8720C62A09922894_2_TypeDefinitionIndex = 67360;

class Class_2_8720C62A09922894_2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::RPG::GameCore::LevelUIComponent* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78
	::UnityEngine::UI::Image* Field_2_5; // 0x80
	::UnityEngine::UI::Text* Field_2_6; // 0x88
	::UnityEngine::UI::Text* Field_2_7; // 0x90
	::UnityEngine::UI::Text* Field_2_8; // 0x98
	::UnityEngine::UI::Text* Field_2_9; // 0xA0
	::RPG::Client::HPBar* Field_2_10; // 0xA8
	::UnityEngine::UI::Text* Field_2_11; // 0xB0
	::UnityEngine::Transform* Field_2_12; // 0xB8
	::UnityEngine::Transform* Field_2_13; // 0xC0
	::UnityEngine::Transform* Field_2_14; // 0xC8
	::UnityEngine::Transform* Field_2_15; // 0xD0
	::UnityEngine::UI::Text* Field_2_16; // 0xD8
	::UnityEngine::UI::Text* Field_2_17; // 0xE0
	::UnityEngine::Transform* Field_2_18; // 0xE8
	::System::Int32 _Index_k__BackingField; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8720C62A09922894_2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
