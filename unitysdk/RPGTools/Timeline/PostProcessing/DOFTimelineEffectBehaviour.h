#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/DOFEffectParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class RPGDepthOfField; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_ENABLEDOF_OFFSET UNITYSDK_OFFSET(0xB8FDFE0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_TARGETFAR_OFFSET UNITYSDK_OFFSET(0xB8FE020)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xB8FE000)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_METHOD_2_2E866BF7FD6485AB_OFFSET UNITYSDK_OFFSET(0xB8FE2F0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB8FE230)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB8FE040)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8FE4C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_ENABLEDOF_OFFSET UNITYSDK_OFFSET(0xB8FDFF0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_TARGETFAR_OFFSET UNITYSDK_OFFSET(0xB8FE030)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xB8FE010)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FF220)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB8FF240)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8FF250)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineEffectBehaviour_TypeDefinitionIndex = 45278;

	class DOFTimelineEffectBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::DOFEffectParameter DepthOfFieldParamter; // 0x10
		::RPG::CustomRP::RPGDepthOfField* _dof; // 0x20
		::System::Boolean _EnableDof_k__BackingField; // 0x28
		::System::Boolean HiendOnly; // 0x29
		::UnityEngine::GameObject* _Target_k__BackingField; // 0x30
		::UnityEngine::GameObject* _TargetFar_k__BackingField; // 0x38
		::System::Boolean useCustomRegion; // 0x40
		::UnityEngine::Vector3 customRegionNearPos; // 0x44
		::UnityEngine::Vector3 customRegionFarPos; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableDof()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_ENABLEDOF_OFFSET))(this);
		}

		::System::Void set_EnableDof(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_ENABLEDOF_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_Target()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_TARGET_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_TargetFar()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_TARGETFAR_OFFSET))(this);
		}

		::System::Void set_TargetFar(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_TARGETFAR_OFFSET))(this, value);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_2_2E866BF7FD6485AB(::RPG::CustomRP::RPGDepthOfField* a1, ::RPGTools::Timeline::PostProcessing::DOFEffectParameter a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*, ::RPGTools::Timeline::PostProcessing::DOFEffectParameter))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_METHOD_2_2E866BF7FD6485AB_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
