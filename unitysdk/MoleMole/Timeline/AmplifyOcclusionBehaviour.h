#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AmplifyOcclusionBehaviour_Struct_2_52AD02145F5FCE36_4.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x13EBD4C0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13EC01F0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_598135D05796BD05_OFFSET UNITYSDK_OFFSET(0x13EBD8F0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x13EC01E0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x13EBDEC0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x13EC0210)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x13EC0200)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13EBDCE0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13EBF780)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13EBFA80)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC0140)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AmplifyOcclusionBehaviour_TypeDefinitionIndex = 41412;

	class AmplifyOcclusionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::AmplifyOcclusionBehaviour_Struct_2_52AD02145F5FCE36_4 _methodParm; // 0x18
		::System::Boolean enabled; // 0x94
		::System::Boolean active_intensityMultiOnMobile; // 0x95
		::System::Boolean use_intensityMultiOnMobile; // 0x96
		::System::Single intensityMultiOnMobile; // 0x98
		::System::Boolean active_radiusMultiOnMobile; // 0x9C
		::System::Boolean use_radiusMultiOnMobile; // 0x9D
		::System::Single radiusMultiOnMobile; // 0xA0
		::System::Boolean active_sampleCount; // 0xA4
		::System::Boolean use_sampleCount; // 0xA5
		::UnityEngine::NAPRenderPipeline0::SampleCountLevel sampleCount; // 0xA8
		::System::Boolean active_intensity; // 0xAC
		::System::Boolean use_intensity; // 0xAD
		::System::Single intensity; // 0xB0
		::System::Boolean active_tint; // 0xB4
		::System::Boolean use_tint; // 0xB5
		::UnityEngine::Color tint; // 0xB8
		::System::Boolean active_radius; // 0xC8
		::System::Boolean use_radius; // 0xC9
		::System::Single radius; // 0xCC
		::System::Boolean active_powerExponent; // 0xD0
		::System::Boolean use_powerExponent; // 0xD1
		::System::Single powerExponent; // 0xD4
		::System::Boolean active_bias; // 0xD8
		::System::Boolean use_bias; // 0xD9
		::System::Single bias; // 0xDC
		::System::Boolean active_thickness; // 0xE0
		::System::Boolean use_thickness; // 0xE1
		::System::Single thickness; // 0xE4
		::System::Boolean active_downSample; // 0xE8
		::System::Boolean use_downSample; // 0xE9
		::System::Boolean downSample; // 0xEA
		::System::Boolean active_cacheAware; // 0xEB
		::System::Boolean use_cacheAware; // 0xEC
		::System::Boolean cacheAware; // 0xED
		::System::Boolean active_blurEnabled; // 0xEE
		::System::Boolean use_blurEnabled; // 0xEF
		::System::Boolean blurEnabled; // 0xF0
		::System::Boolean active_blurRadius; // 0xF1
		::System::Boolean use_blurRadius; // 0xF2
		::System::Int32 blurRadius; // 0xF4
		::System::Boolean active_blurPasses; // 0xF8
		::System::Boolean use_blurPasses; // 0xF9
		::System::Int32 blurPasses; // 0xFC
		::System::Boolean active_blurSharpness; // 0x100
		::System::Boolean use_blurSharpness; // 0x101
		::System::Single blurSharpness; // 0x104
		::System::Boolean active_lowSSAOQuality; // 0x108
		::System::Boolean use_lowSSAOQuality; // 0x109
		::System::Boolean lowSSAOQuality; // 0x10A
		::UnityEngine::Rendering::Universal::AmplifyOcclusion* _AmplifyOcclusion; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::AmplifyOcclusion* Method_4_598135D05796BD05(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::AmplifyOcclusion*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_598135D05796BD05_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
