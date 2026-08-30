#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_590460ACFA807B81_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17242DC0)
#define CLASS_2_590460ACFA807B81_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17242F20)
#define CLASS_2_590460ACFA807B81_METHOD_2_11610CE9BAC64B48_OFFSET UNITYSDK_OFFSET(0x172429A0)
#define CLASS_2_590460ACFA807B81_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x172422D0)
#define CLASS_2_590460ACFA807B81_METHOD_2_2579B977859E46CE_OFFSET UNITYSDK_OFFSET(0x172427B0)
#define CLASS_2_590460ACFA807B81_METHOD_2_6C282C312B6A0234_OFFSET UNITYSDK_OFFSET(0x17242540)
#define CLASS_2_590460ACFA807B81_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17242460)
#define CLASS_2_590460ACFA807B81_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x17241BF0)
#define CLASS_2_590460ACFA807B81_METHOD_2_BFF777A41DE1C9B0_OFFSET UNITYSDK_OFFSET(0x17242B20)
#define CLASS_2_590460ACFA807B81_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17242200)
#define CLASS_2_590460ACFA807B81_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17241C50)
#define CLASS_2_590460ACFA807B81_METHOD_2_CF0D4B58606967D2_OFFSET UNITYSDK_OFFSET(0x17242740)
#define CLASS_2_590460ACFA807B81_METHOD_2_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0x17241F60)
#define CLASS_2_590460ACFA807B81_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x17242060)
#define CLASS_2_590460ACFA807B81_METHOD_2_F289A5A170401D6B_OFFSET UNITYSDK_OFFSET(0x17241B20)
#define CLASS_2_590460ACFA807B81_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x17242C40)
#define CLASS_2_590460ACFA807B81_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x17242D00)
#define CLASS_2_590460ACFA807B81_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17242B80)
#define CLASS_2_590460ACFA807B81_METHOD_2_FF35922B674791EC_OFFSET UNITYSDK_OFFSET(0x17241DA0)
#define CLASS_2_590460ACFA807B81_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x17241C90)
#define CLASS_2_590460ACFA807B81_ONRETURN_OFFSET UNITYSDK_OFFSET(0x17241DF0)
#define CLASS_2_590460ACFA807B81__CTOR_OFFSET UNITYSDK_OFFSET(0x17243050)
#define CLASS_2_590460ACFA807B81__ONBIND_OFFSET UNITYSDK_OFFSET(0x17241AC0)
#define CLASS_2_590460ACFA807B81__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x17242270)

inline static constexpr unsigned int Class_2_590460ACFA807B81_TypeDefinitionIndex = 71708;

class Class_2_590460ACFA807B81 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* IIFENECAOBG; // 0x0
	// static const ::System::String* CGNGHKIIGCM; // 0x0
	::UnityEngine::RectTransform* DDNJLCOOFND; // 0x60
	::RPG::Client::PrefabLoadMeta* AGIHDGFPEFI; // 0x68
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
	::UnityEngine::Transform* GGLIIDOCCCC; // 0x78
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
	::System::Boolean FMNEEONAMNO; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F289A5A170401D6B(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_F289A5A170401D6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_FF35922B674791EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_FF35922B674791EC_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C282C312B6A0234(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_6C282C312B6A0234_OFFSET))(this, a1);
	}

	::System::Void Method_2_2579B977859E46CE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_2579B977859E46CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_11610CE9BAC64B48(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_11610CE9BAC64B48_OFFSET))(this, a1);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Boolean Method_2_CF0D4B58606967D2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_CF0D4B58606967D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_BFF777A41DE1C9B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_BFF777A41DE1C9B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590460ACFA807B81_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
