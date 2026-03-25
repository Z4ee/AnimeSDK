#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_D27BF54F25500E5F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }

#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAE9B30)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0xAAE9F40)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xAAEA460)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAAE99F0)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xAAE9A30)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xAAE9AE0)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RESETANIMSTATETOIDLE_OFFSET UNITYSDK_OFFSET(0xAAEA240)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RPG_GAMECORE_IGAMEANIMCONTROLLERCOMPONENT_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0xAAEA370)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RPG_GAMECORE_IGAMEANIMCONTROLLERCOMPONENT_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0xAAEA3B0)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SETBOOL_OFFSET UNITYSDK_OFFSET(0xAAE9B80)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SETLAYERWEIGHTWITHDURATION_OFFSET UNITYSDK_OFFSET(0xAAE9BF0)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xAAEA470)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_TICKLAYERTRANSITION_OFFSET UNITYSDK_OFFSET(0xAAE9F80)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xAAEA400)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEA480)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAAEA490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DAnimControllerComponent_TypeDefinitionIndex = 46361;

	class UI3DAnimControllerComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D27BF54F25500E5F*>* _animLayerTransDict; // 0x18
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void SetBool(::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SETBOOL_OFFSET))(this, name, value);
		}

		::System::Void SetLayerWeightWithDuration(::System::String* layerName, ::System::Single weight, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SETLAYERWEIGHTWITHDURATION_OFFSET))(this, layerName, weight, duration);
		}

		::System::Void ResetAnimStateToIdle(::System::Single fCrossFadeTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RESETANIMSTATETOIDLE_OFFSET))(this, fCrossFadeTime);
		}

		::System::Void TickLayerTransition(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_TICKLAYERTRANSITION_OFFSET))(this, deltaTime);
		}

		::System::Int32 RPG_GameCore_IGameAnimControllerComponent_GetUnevaluatedNextState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RPG_GAMECORE_IGAMEANIMCONTROLLERCOMPONENT_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IGameAnimControllerComponent_QueryStateNoramlizedStartTime(::System::Int32 hash)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RPG_GAMECORE_IGAMEANIMCONTROLLERCOMPONENT_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, hash);
		}

		::UnityEngine::Animator* GetUnityAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_GETUNITYANIMATOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SET_ANIMATORREF_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
