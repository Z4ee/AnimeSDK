#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_14FE66EA0621E228.h"
#include "unitysdk/Enum_3_45C24FCC552C3B06.h"
#include "unitysdk/MoleMole/Tweener_Enum_3_F79A84F0BED12119.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define MOLEMOLE_TWEENER_ADDONFINISHED_OFFSET UNITYSDK_OFFSET(0x19199690)
#define MOLEMOLE_TWEENER_GET_AMOUNTPERDELTA_OFFSET UNITYSDK_OFFSET(0x19198BA0)
#define MOLEMOLE_TWEENER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x19198CC0)
#define MOLEMOLE_TWEENER_GET_TWEENFACTOR_OFFSET UNITYSDK_OFFSET(0x19198C40)
#define MOLEMOLE_TWEENER_ISSAMPLESTART_OFFSET UNITYSDK_OFFSET(0x191995D0)
#define MOLEMOLE_TWEENER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19199730)
#define MOLEMOLE_TWEENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x191993A0)
#define MOLEMOLE_TWEENER_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x19199770)
#define MOLEMOLE_TWEENER_PLAYREVERSE_OFFSET UNITYSDK_OFFSET(0x191998D0)
#define MOLEMOLE_TWEENER_PLAY_OFFSET UNITYSDK_OFFSET(0x191997C0)
#define MOLEMOLE_TWEENER_REMOVEONFINISHED_OFFSET UNITYSDK_OFFSET(0x191996E0)
#define MOLEMOLE_TWEENER_RESETTOBEGINNING_OFFSET UNITYSDK_OFFSET(0x191993F0)
#define MOLEMOLE_TWEENER_RESET_OFFSET UNITYSDK_OFFSET(0x19198DA0)
#define MOLEMOLE_TWEENER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x191994F0)
#define MOLEMOLE_TWEENER_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x19199B80)
#define MOLEMOLE_TWEENER_SETCURRENTVALUETOSTART_OFFSET UNITYSDK_OFFSET(0x19199B40)
#define MOLEMOLE_TWEENER_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x19199B00)
#define MOLEMOLE_TWEENER_SETONFINISHED_OFFSET UNITYSDK_OFFSET(0x19199640)
#define MOLEMOLE_TWEENER_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x19199AC0)
#define MOLEMOLE_TWEENER_SET_TWEENFACTOR_OFFSET UNITYSDK_OFFSET(0x19198C50)
#define MOLEMOLE_TWEENER_START_OFFSET UNITYSDK_OFFSET(0x19198E30)
#define MOLEMOLE_TWEENER_TOGGLE_OFFSET UNITYSDK_OFFSET(0x19199920)
#define MOLEMOLE_TWEENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19198E80)
#define MOLEMOLE_TWEENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19199BC0)

namespace MoleMole
{
	inline static constexpr unsigned int Tweener_TypeDefinitionIndex = 76291;

	class Tweener : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Tweener** StaticGet_current()
		{
			return (::MoleMole::Tweener**)Il2CppClass::FromTypeDefinitionIndex(Tweener_TypeDefinitionIndex)->GetStaticField(0x39F50);
		}
		::Enum_3_14FE66EA0621E228 method; // 0x18
		::MoleMole::Tweener_Enum_3_F79A84F0BED12119 style; // 0x1C
		::UnityEngine::AnimationCurve* animationCurve; // 0x20
		::System::Boolean ignoreTimeScale; // 0x28
		::System::Single delay; // 0x2C
		::System::Single duration; // 0x30
		::System::Boolean steeperCurves; // 0x34
		::System::Int32 tweenGroup; // 0x38
		::UnityEngine::Events::UnityEvent* onFinished; // 0x40
		::UnityEngine::Events::UnityAction* onUpdate; // 0x48
		::UnityEngine::GameObject* eventReceiver; // 0x50
		::System::String* callWhenFinished; // 0x58
		::System::Boolean Field_5_13; // 0x60
		::System::Single Field_5_14; // 0x64
		::System::Single Field_5_15; // 0x68
		::System::Single Field_5_16; // 0x6C
		::System::Single Field_5_17; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER__CTOR_OFFSET))(this);
		}

		::System::Single get_amountPerDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_GET_AMOUNTPERDELTA_OFFSET))(this);
		}

		::System::Single get_tweenFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_GET_TWEENFACTOR_OFFSET))(this);
		}

		::System::Void set_tweenFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SET_TWEENFACTOR_OFFSET))(this, a1);
		}

		::Enum_3_45C24FCC552C3B06 get_direction()
		{
			return ((::Enum_3_45C24FCC552C3B06(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_RESET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_UPDATE_OFFSET))(this);
		}

		::System::Boolean IsSampleStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_ISSAMPLESTART_OFFSET))(this);
		}

		::System::Void SetOnFinished(::UnityEngine::Events::UnityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETONFINISHED_OFFSET))(this, a1);
		}

		::System::Void AddOnFinished(::UnityEngine::Events::UnityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_ADDONFINISHED_OFFSET))(this, a1);
		}

		::System::Void RemoveOnFinished(::UnityEngine::Events::UnityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_REMOVEONFINISHED_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Sample(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SAMPLE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_PLAYFORWARD_OFFSET))(this);
		}

		::System::Void PlayReverse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_PLAYREVERSE_OFFSET))(this);
		}

		::System::Void Play(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_PLAY_OFFSET))(this, a1);
		}

		::System::Void ResetToBeginning()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_RESETTOBEGINNING_OFFSET))(this);
		}

		::System::Void Toggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_TOGGLE_OFFSET))(this);
		}

		::System::Void SetStartToCurrentValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETSTARTTOCURRENTVALUE_OFFSET))(this);
		}

		::System::Void SetEndToCurrentValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETENDTOCURRENTVALUE_OFFSET))(this);
		}

		::System::Void SetCurrentValueToStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETCURRENTVALUETOSTART_OFFSET))(this);
		}

		::System::Void SetCurrentValueToEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETCURRENTVALUETOEND_OFFSET))(this);
		}
	};
}
