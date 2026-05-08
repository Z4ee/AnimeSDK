#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CharacterVolumeProxyBehaviour_Struct_2_E658502528B7C034_5.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class CharacterVolumeProxy; }

#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1585F460)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x158600D0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_38BC5CA56EFB3107_OFFSET UNITYSDK_OFFSET(0x1585F600)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1585FA70)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x15860100)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x158600F0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x158600E0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1585F9F0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1585FDD0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1585FF70)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x158600C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CharacterVolumeProxyBehaviour_TypeDefinitionIndex = 66620;

	class CharacterVolumeProxyBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CharacterVolumeProxyBehaviour_Struct_2_E658502528B7C034_5 _methodParm; // 0x18
		::System::Boolean enabled; // 0x24
		::System::Boolean active_indoorWeight; // 0x25
		::System::Boolean use_indoorWeight; // 0x26
		::System::Single indoorWeight; // 0x28
		::UnityEngine::Rendering::Universal::CharacterVolumeProxy* _CharacterVolumeProxy; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::CharacterVolumeProxy* Method_4_38BC5CA56EFB3107(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::CharacterVolumeProxy*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_38BC5CA56EFB3107_OFFSET))(this, a1);
		}

		::System::Void Method_4_601EF3E7226D7DC2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_601EF3E7226D7DC2_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
