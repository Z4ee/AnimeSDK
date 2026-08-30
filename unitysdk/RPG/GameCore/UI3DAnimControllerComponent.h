#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_D27BF54F25500E5F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }

#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE7C5BE0)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0xE7C6010)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xE7C6520)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE7C5AA0)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xE7C5AE0)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xE7C5B90)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RESETANIMSTATETOIDLE_OFFSET UNITYSDK_OFFSET(0xE7C6300)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RPG_GAMECORE_IGAMEANIMCONTROLLERCOMPONENT_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0xE7C6430)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RPG_GAMECORE_IGAMEANIMCONTROLLERCOMPONENT_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0xE7C6470)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SETBOOL_OFFSET UNITYSDK_OFFSET(0xE7C5C30)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SETLAYERWEIGHTWITHDURATION_OFFSET UNITYSDK_OFFSET(0xE7C5CA0)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xE7C6530)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_TICKLAYERTRANSITION_OFFSET UNITYSDK_OFFSET(0xE7C6050)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xE7C64C0)
#define RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE7C6540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DAnimControllerComponent_TypeDefinitionIndex = 57689;

	class UI3DAnimControllerComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D27BF54F25500E5F*>* _animLayerTransDict; // 0x20

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

		::System::Void SetBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetLayerWeightWithDuration(::System::String* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SETLAYERWEIGHTWITHDURATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetAnimStateToIdle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RESETANIMSTATETOIDLE_OFFSET))(this, a1);
		}

		::System::Void TickLayerTransition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_TICKLAYERTRANSITION_OFFSET))(this, a1);
		}

		::System::Int32 RPG_GameCore_IGameAnimControllerComponent_GetUnevaluatedNextState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RPG_GAMECORE_IGAMEANIMCONTROLLERCOMPONENT_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IGameAnimControllerComponent_QueryStateNoramlizedStartTime(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_RPG_GAMECORE_IGAMEANIMCONTROLLERCOMPONENT_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* GetUnityAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_GETUNITYANIMATOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DANIMCONTROLLERCOMPONENT_SET_ANIMATORREF_OFFSET))(this, a1);
		}
	};
}
