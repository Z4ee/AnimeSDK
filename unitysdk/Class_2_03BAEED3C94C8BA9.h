#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_2FA40FF0BD34B01D;
class Class_1_7807B2B04302CD7B_24;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_03BAEED3C94C8BA9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13A63D00)
#define CLASS_2_03BAEED3C94C8BA9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13A63E80)
#define CLASS_2_03BAEED3C94C8BA9_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x13A62A40)
#define CLASS_2_03BAEED3C94C8BA9_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x13A62A60)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x13A62AA0)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x13A62C60)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x13A63A70)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_C450A961450309C9_2_OFFSET UNITYSDK_OFFSET(0x13A63B60)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x13A638F0)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_C8D6B29192F288ED_1_OFFSET UNITYSDK_OFFSET(0x13A62F70)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x13A62DD0)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_E530905EC9C5B4AD_OFFSET UNITYSDK_OFFSET(0x13A63660)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_F17E9F999BA3386F_OFFSET UNITYSDK_OFFSET(0x13A632B0)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_F330D51B75494860_OFFSET UNITYSDK_OFFSET(0x13A63830)
#define CLASS_2_03BAEED3C94C8BA9_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x13A63C50)
#define CLASS_2_03BAEED3C94C8BA9_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x13A62A50)
#define CLASS_2_03BAEED3C94C8BA9__CTOR_OFFSET UNITYSDK_OFFSET(0x13A63FE0)
#define CLASS_2_03BAEED3C94C8BA9__ONBIND_OFFSET UNITYSDK_OFFSET(0x13A628D0)

inline static constexpr unsigned int Class_2_03BAEED3C94C8BA9_TypeDefinitionIndex = 68166;

class Class_2_03BAEED3C94C8BA9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animation* Field_2_1; // 0x60
	::RPG::GameCore::LevelUIComponent* Field_2_2; // 0x68
	::UnityEngine::UI::Button* Field_2_3; // 0x70
	::RPG::Client::LocalizedText* Field_2_4; // 0x78
	::UnityEngine::UI::Image* Field_2_5; // 0x80
	::UnityEngine::UI::Button* Field_2_6; // 0x88
	::UnityEngine::UI::Image* Field_2_7; // 0x90
	::Il2CppArray<::System::String*>* Field_2_8; // 0x98
	::RPG::Client::LocalizedText* Field_2_9; // 0xA0
	::UnityEngine::UI::Image* Field_2_10; // 0xA8
	::System::UInt32 Field_2_11; // 0xB0
	::System::Int32 _Index_k__BackingField; // 0xB4
	::System::Int32 Field_2_13; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_F17E9F999BA3386F(::Class_1_2FA40FF0BD34B01D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FA40FF0BD34B01D*))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_F17E9F999BA3386F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E530905EC9C5B4AD(::Class_1_7807B2B04302CD7B_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_24*))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_E530905EC9C5B4AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_F330D51B75494860(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_F330D51B75494860_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8D6B29192F288ED_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_C8D6B29192F288ED_1_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_C450A961450309C9_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03BAEED3C94C8BA9_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
