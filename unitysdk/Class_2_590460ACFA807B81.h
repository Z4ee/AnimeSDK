#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
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

#define CLASS_2_590460ACFA807B81_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x140F0C60)
#define CLASS_2_590460ACFA807B81_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x140F0DC0)
#define CLASS_2_590460ACFA807B81_METHOD_2_11610CE9BAC64B48_OFFSET UNITYSDK_OFFSET(0x140F0840)
#define CLASS_2_590460ACFA807B81_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x140F0190)
#define CLASS_2_590460ACFA807B81_METHOD_2_2579B977859E46CE_OFFSET UNITYSDK_OFFSET(0x140F0650)
#define CLASS_2_590460ACFA807B81_METHOD_2_6C282C312B6A0234_OFFSET UNITYSDK_OFFSET(0x140F03F0)
#define CLASS_2_590460ACFA807B81_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x140F0320)
#define CLASS_2_590460ACFA807B81_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x140EFAE0)
#define CLASS_2_590460ACFA807B81_METHOD_2_BFF777A41DE1C9B0_OFFSET UNITYSDK_OFFSET(0x140F09C0)
#define CLASS_2_590460ACFA807B81_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x140F00C0)
#define CLASS_2_590460ACFA807B81_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x140EFB30)
#define CLASS_2_590460ACFA807B81_METHOD_2_CF0D4B58606967D2_OFFSET UNITYSDK_OFFSET(0x140F05E0)
#define CLASS_2_590460ACFA807B81_METHOD_2_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0x140EFE30)
#define CLASS_2_590460ACFA807B81_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x140EFF30)
#define CLASS_2_590460ACFA807B81_METHOD_2_F289A5A170401D6B_OFFSET UNITYSDK_OFFSET(0x140EFA10)
#define CLASS_2_590460ACFA807B81_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x140F0AE0)
#define CLASS_2_590460ACFA807B81_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x140F0BA0)
#define CLASS_2_590460ACFA807B81_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x140F0A20)
#define CLASS_2_590460ACFA807B81_METHOD_2_FF35922B674791EC_OFFSET UNITYSDK_OFFSET(0x140EFC70)
#define CLASS_2_590460ACFA807B81_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x140EFB70)
#define CLASS_2_590460ACFA807B81_ONRETURN_OFFSET UNITYSDK_OFFSET(0x140EFCC0)
#define CLASS_2_590460ACFA807B81__CTOR_OFFSET UNITYSDK_OFFSET(0x140F0EF0)
#define CLASS_2_590460ACFA807B81__ONBIND_OFFSET UNITYSDK_OFFSET(0x140EF9B0)
#define CLASS_2_590460ACFA807B81__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x140F0130)

inline static constexpr unsigned int Class_2_590460ACFA807B81_TypeDefinitionIndex = 68514;

class Class_2_590460ACFA807B81 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::RectTransform* Field_2_2; // 0x60
	::UnityEngine::Transform* Field_2_3; // 0x68
	::UnityEngine::Animation* Field_2_4; // 0x70
	::RPG::GameCore::GameEntity* Field_2_5; // 0x78
	::RPG::Client::PrefabLoadMeta* Field_2_6; // 0x80
	::System::Boolean Field_2_7; // 0x88

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
