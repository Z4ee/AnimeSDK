#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/DOFEffectParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class RPGDepthOfField; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_ENABLEDOF_OFFSET UNITYSDK_OFFSET(0x1B0A96B0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_TARGETFAR_OFFSET UNITYSDK_OFFSET(0x1B0A96F0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1B0A96D0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_METHOD_2_5D09A94649A55CAE_OFFSET UNITYSDK_OFFSET(0x1B0A9910)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1B0A9850)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1B0A9710)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B0A9E00)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_ENABLEDOF_OFFSET UNITYSDK_OFFSET(0x1B0A96C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_TARGETFAR_OFFSET UNITYSDK_OFFSET(0x1B0A9700)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1B0A96E0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0AADC0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineEffectBehaviour_TypeDefinitionIndex = 49020;

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
		::UnityEngine::Vector3 recordedFormationCenterWorldPos; // 0x5C
		::UnityEngine::Quaternion recordedFormationRotation; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableDof()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_ENABLEDOF_OFFSET))(this);
		}

		::System::Void set_EnableDof(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_ENABLEDOF_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_Target()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_TARGET_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_TargetFar()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_GET_TARGETFAR_OFFSET))(this);
		}

		::System::Void set_TargetFar(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_SET_TARGETFAR_OFFSET))(this, a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_2_5D09A94649A55CAE(::RPG::CustomRP::RPGDepthOfField* a1, ::RPGTools::Timeline::PostProcessing::DOFEffectParameter a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*, ::RPGTools::Timeline::PostProcessing::DOFEffectParameter))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_METHOD_2_5D09A94649A55CAE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
