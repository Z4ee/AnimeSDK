#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class HPBar; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_1ACADEE3DCF6AD74_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB43AD80)
#define CLASS_2_1ACADEE3DCF6AD74_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB43AE70)
#define CLASS_2_1ACADEE3DCF6AD74_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB439ED0)
#define CLASS_2_1ACADEE3DCF6AD74_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB439EF0)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xB43A1A0)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB439F30)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0xB43AC70)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xB43A0A0)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_DE52BD42C4B0B772_1_OFFSET UNITYSDK_OFFSET(0xB43A310)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xB43A210)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0xB43A8F0)
#define CLASS_2_1ACADEE3DCF6AD74_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB43ACC0)
#define CLASS_2_1ACADEE3DCF6AD74_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB439EE0)
#define CLASS_2_1ACADEE3DCF6AD74__CTOR_OFFSET UNITYSDK_OFFSET(0xB43AF40)
#define CLASS_2_1ACADEE3DCF6AD74__ONBIND_OFFSET UNITYSDK_OFFSET(0xB439A90)

inline static constexpr unsigned int Class_2_1ACADEE3DCF6AD74_TypeDefinitionIndex = 72101;

class Class_2_1ACADEE3DCF6AD74 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::RPG::Client::HPBar* MGNLDKHHICM; // 0x60
	::UnityEngine::UI::Text* GNPDGONNHMO; // 0x68
	::UnityEngine::UI::Image* CPBBHPIGNIE; // 0x70
	::UnityEngine::Transform* JBDEEKEMEOI; // 0x78
	::UnityEngine::UI::Text* IGKMHDHJEON; // 0x80
	::UnityEngine::Transform* DKGDENMBJJJ; // 0x88
	::UnityEngine::UI::Text* LFDEFIEEDJN; // 0x90
	::UnityEngine::UI::Text* BEEBIEFKKCO; // 0x98
	::UnityEngine::Transform* CMLBLNOJOJJ; // 0xA0
	::UnityEngine::Transform* FOIEDEAGHAD; // 0xA8
	::UnityEngine::UI::Text* FENPCMDKDHB; // 0xB0
	::UnityEngine::UI::Text* IBFMKJIDCOE; // 0xB8
	::UnityEngine::Transform* JLIHBJFLOIF; // 0xC0
	::UnityEngine::UI::Image* PKCFLHOBPKD; // 0xC8
	::UnityEngine::Transform* MPBIFMLFHEG; // 0xD0
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xD8
	::UnityEngine::Transform* MLIHPCANBLO; // 0xE0
	::UnityEngine::UI::Text* LCGAGLNKJDJ; // 0xE8
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
