#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

class Class_0_16E4307DCC419505_16;
class Class_1_9CC9BA8044EDE678;
namespace RPG::Client { class MockAnimator; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_GAMECORE_CHARACTERANIMZONE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD40660)
#define RPG_GAMECORE_CHARACTERANIMZONE_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xCD40DE0)
#define RPG_GAMECORE_CHARACTERANIMZONE_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCD40DF0)
#define RPG_GAMECORE_CHARACTERANIMZONE_GET_ISARTLOADED_OFFSET UNITYSDK_OFFSET(0xCD411A0)
#define RPG_GAMECORE_CHARACTERANIMZONE_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xCD40AF0)
#define RPG_GAMECORE_CHARACTERANIMZONE_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCD40960)
#define RPG_GAMECORE_CHARACTERANIMZONE_INITMODEL_OFFSET UNITYSDK_OFFSET(0xCD40770)
#define RPG_GAMECORE_CHARACTERANIMZONE_ISINANIMZONE_1_OFFSET UNITYSDK_OFFSET(0xCD40CC0)
#define RPG_GAMECORE_CHARACTERANIMZONE_ISINANIMZONE_OFFSET UNITYSDK_OFFSET(0xCD40C50)
#define RPG_GAMECORE_CHARACTERANIMZONE_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xCD40E00)
#define RPG_GAMECORE_CHARACTERANIMZONE_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xCD40720)
#define RPG_GAMECORE_CHARACTERANIMZONE_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCD40880)
#define RPG_GAMECORE_CHARACTERANIMZONE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xCD411B0)
#define RPG_GAMECORE_CHARACTERANIMZONE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD404D0)
#define RPG_GAMECORE_CHARACTERANIMZONE__ONANIMATORJOBCALLBACK_OFFSET UNITYSDK_OFFSET(0xCD40E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAnimZone_TypeDefinitionIndex = 53402;

	class CharacterAnimZone : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MockAnimator* _AnimatorRef; // 0x18
		::Class_1_9CC9BA8044EDE678* _AnimatorStateZoneInstance; // 0x20
		::Il2CppArray<::System::Boolean>* _InAnimZoneCache; // 0x28
		::System::Boolean _IsArtLoaded; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void InitComponent(::Class_0_16E4307DCC419505_16* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_16*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void InitComponent_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_INITCOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInAnimZone(::RPG::GameCore::AnimZoneType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnimZoneType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ISINANIMZONE_OFFSET))(this, a1);
		}

		::System::Boolean IsInAnimZone_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ISINANIMZONE_1_OFFSET))(this, a1);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void _OnAnimatorJobCallback(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE__ONANIMATORJOBCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_INITMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsArtLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_GET_ISARTLOADED_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_RESETTODEFAULT_OFFSET))(this);
		}
	};
}
