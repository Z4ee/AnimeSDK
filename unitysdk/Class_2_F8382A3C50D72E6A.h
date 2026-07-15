#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F8382A3C50D72E6A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15279D90)
#define CLASS_2_F8382A3C50D72E6A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15279F10)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x15278FF0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_2439E02BA9E39325_OFFSET UNITYSDK_OFFSET(0x15279730)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_26BC69D24FA97C57_1_OFFSET UNITYSDK_OFFSET(0x15279400)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_26BC69D24FA97C57_OFFSET UNITYSDK_OFFSET(0x15279150)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_289F28027FF47717_1_OFFSET UNITYSDK_OFFSET(0x15279A30)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x152799A0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_2BFB72D7A3D3B8CB_OFFSET UNITYSDK_OFFSET(0x15278F20)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_525124EFF71D885C_OFFSET UNITYSDK_OFFSET(0x15279330)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_74E6DAC6EB8EDCAC_OFFSET UNITYSDK_OFFSET(0x152795E0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x15279060)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x15279AC0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_AE20E5BD3B1974BD_OFFSET UNITYSDK_OFFSET(0x15279880)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_EBDCA6CEF092A306_OFFSET UNITYSDK_OFFSET(0x15279800)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x15279C10)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x15279CD0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15279B50)
#define CLASS_2_F8382A3C50D72E6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1527A0A0)
#define CLASS_2_F8382A3C50D72E6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1527A070)
#define CLASS_2_F8382A3C50D72E6A__ONBIND_OFFSET UNITYSDK_OFFSET(0x15278E50)

inline static constexpr unsigned int Class_2_F8382A3C50D72E6A_TypeDefinitionIndex = 69058;

class Class_2_F8382A3C50D72E6A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8382A3C50D72E6A_TypeDefinitionIndex)->GetStaticField(0x53BF0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_3; // 0x60
	::UnityEngine::Animation* Field_2_4; // 0x68
	::RPG::GameCore::GameEntity* Field_2_5; // 0x70
	::UnityEngine::Transform* Field_2_6; // 0x78
	::System::Boolean Field_2_7; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2BFB72D7A3D3B8CB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_2BFB72D7A3D3B8CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_2_26BC69D24FA97C57(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_26BC69D24FA97C57_OFFSET))(this, a1);
	}

	::System::Void Method_2_26BC69D24FA97C57_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_26BC69D24FA97C57_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_74E6DAC6EB8EDCAC(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_74E6DAC6EB8EDCAC_OFFSET))(this, a1);
	}

	::System::Void Method_2_525124EFF71D885C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_525124EFF71D885C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2439E02BA9E39325(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_2439E02BA9E39325_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_289F28027FF47717_1_OFFSET))(this);
	}

	::System::Boolean Method_2_AE20E5BD3B1974BD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_AE20E5BD3B1974BD_OFFSET))(this);
	}

	::System::Boolean Method_2_EBDCA6CEF092A306(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_EBDCA6CEF092A306_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
