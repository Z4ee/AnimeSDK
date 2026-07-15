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

#define CLASS_2_1ACADEE3DCF6AD74_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x162CFDF0)
#define CLASS_2_1ACADEE3DCF6AD74_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x162CFEE0)
#define CLASS_2_1ACADEE3DCF6AD74_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x162CEF50)
#define CLASS_2_1ACADEE3DCF6AD74_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x162CEF70)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x162CF220)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x162CEFB0)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x162CFCE0)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x162CF120)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_DE52BD42C4B0B772_1_OFFSET UNITYSDK_OFFSET(0x162CF380)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x162CF290)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x162CF960)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x162CFD30)
#define CLASS_2_1ACADEE3DCF6AD74_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x162CEF60)
#define CLASS_2_1ACADEE3DCF6AD74__CTOR_OFFSET UNITYSDK_OFFSET(0x162CFFB0)
#define CLASS_2_1ACADEE3DCF6AD74__ONBIND_OFFSET UNITYSDK_OFFSET(0x162CEB10)

inline static constexpr unsigned int Class_2_1ACADEE3DCF6AD74_TypeDefinitionIndex = 68829;

class Class_2_1ACADEE3DCF6AD74 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::UnityEngine::UI::Text* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::RPG::GameCore::LevelUIComponent* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_5; // 0x80
	::UnityEngine::UI::Text* Field_2_6; // 0x88
	::UnityEngine::UI::Text* Field_2_7; // 0x90
	::UnityEngine::UI::Image* Field_2_8; // 0x98
	::UnityEngine::Transform* Field_2_9; // 0xA0
	::UnityEngine::Transform* Field_2_10; // 0xA8
	::UnityEngine::UI::Text* Field_2_11; // 0xB0
	::UnityEngine::UI::Text* Field_2_12; // 0xB8
	::UnityEngine::Transform* Field_2_13; // 0xC0
	::UnityEngine::UI::Text* Field_2_14; // 0xC8
	::UnityEngine::Transform* Field_2_15; // 0xD0
	::UnityEngine::Transform* Field_2_16; // 0xD8
	::UnityEngine::UI::Image* Field_2_17; // 0xE0
	::RPG::Client::HPBar* Field_2_18; // 0xE8
	::System::Int32 _Index_k__BackingField; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_DE52BD42C4B0B772_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_METHOD_2_DE52BD42C4B0B772_1_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACADEE3DCF6AD74_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
