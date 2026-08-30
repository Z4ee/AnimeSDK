#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_2FA40FF0BD34B01D;
class Class_1_7807B2B04302CD7B_25;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_62EB2964F3E05483_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17678030)
#define CLASS_2_62EB2964F3E05483_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x176781B0)
#define CLASS_2_62EB2964F3E05483_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x17677150)
#define CLASS_2_62EB2964F3E05483_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x17677170)
#define CLASS_2_62EB2964F3E05483_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x176771B0)
#define CLASS_2_62EB2964F3E05483_METHOD_2_04B5EDB18FECE00C_OFFSET UNITYSDK_OFFSET(0x17677880)
#define CLASS_2_62EB2964F3E05483_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17677370)
#define CLASS_2_62EB2964F3E05483_METHOD_2_73351D543AC31E3E_OFFSET UNITYSDK_OFFSET(0x17677B60)
#define CLASS_2_62EB2964F3E05483_METHOD_2_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x176774E0)
#define CLASS_2_62EB2964F3E05483_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x17677DA0)
#define CLASS_2_62EB2964F3E05483_METHOD_2_C450A961450309C9_2_OFFSET UNITYSDK_OFFSET(0x17677E90)
#define CLASS_2_62EB2964F3E05483_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x17677C20)
#define CLASS_2_62EB2964F3E05483_METHOD_2_E530905EC9C5B4AD_OFFSET UNITYSDK_OFFSET(0x17677990)
#define CLASS_2_62EB2964F3E05483_METHOD_2_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0x17677680)
#define CLASS_2_62EB2964F3E05483_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17677F80)
#define CLASS_2_62EB2964F3E05483_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x17677160)
#define CLASS_2_62EB2964F3E05483__CTOR_OFFSET UNITYSDK_OFFSET(0x17678310)
#define CLASS_2_62EB2964F3E05483__ONBIND_OFFSET UNITYSDK_OFFSET(0x17677000)

inline static constexpr unsigned int Class_2_62EB2964F3E05483_TypeDefinitionIndex = 71343;

class Class_2_62EB2964F3E05483 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::UI::Button* HNMPOPNPDDB; // 0x60
	::Il2CppArray<::System::String*>* NBPLHLICCNN; // 0x68
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x70
	::UnityEngine::UI::Image* KBJDOEDBFDC; // 0x78
	::RPG::Client::LocalizedText* AFABAFFOLGO; // 0x80
	::RPG::Client::LocalizedText* HCPKJEKHAPF; // 0x88
	::UnityEngine::UI::Image* NMMAJIDOFHE; // 0x90
	::UnityEngine::UI::Button* OHGOGOOHGCK; // 0x98
	::UnityEngine::Animation* JPHOOFFIAAH; // 0xA0
	::System::Int32 _Index_k__BackingField; // 0xA8
	::System::UInt32 LKGLNFBMHOG; // 0xAC
	::System::Int32 DGNAHHHKGKD; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_2_04B5EDB18FECE00C(::Class_1_2FA40FF0BD34B01D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FA40FF0BD34B01D*))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_04B5EDB18FECE00C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E530905EC9C5B4AD(::Class_1_7807B2B04302CD7B_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_25*))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_E530905EC9C5B4AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_73351D543AC31E3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_73351D543AC31E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5B2D19C36637166()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_E5B2D19C36637166_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_C450A961450309C9_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EB2964F3E05483_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
