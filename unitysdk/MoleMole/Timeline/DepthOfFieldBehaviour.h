#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/DepthOfFieldBehaviour_Struct_2_52AD02145F5FCE36_16.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1304E320)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_236B13DADDAA2EAD_OFFSET UNITYSDK_OFFSET(0x1304E710)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13050D50)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x13050D40)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x1304ECC0)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x13050D30)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x13050D20)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1304EB00)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13050380)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13050650)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13050C60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DepthOfFieldBehaviour_TypeDefinitionIndex = 58515;

	class DepthOfFieldBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::DepthOfFieldBehaviour_Struct_2_52AD02145F5FCE36_16 _methodParm; // 0x18
		::System::Boolean enabled; // 0x80
		::System::Boolean active_mode; // 0x81
		::System::Boolean use_mode; // 0x82
		::UnityEngine::Rendering::Universal::DepthOfFieldMode mode; // 0x84
		::System::Boolean active_gaussianStart; // 0x88
		::System::Boolean use_gaussianStart; // 0x89
		::System::Single gaussianStart; // 0x8C
		::System::Boolean active_gaussianEnd; // 0x90
		::System::Boolean use_gaussianEnd; // 0x91
		::System::Single gaussianEnd; // 0x94
		::System::Boolean active_gaussianMaxRadius; // 0x98
		::System::Boolean use_gaussianMaxRadius; // 0x99
		::System::Single gaussianMaxRadius; // 0x9C
		::System::Boolean active_highQualitySampling; // 0xA0
		::System::Boolean use_highQualitySampling; // 0xA1
		::System::Boolean highQualitySampling; // 0xA2
		::System::Boolean active_focusDistance; // 0xA3
		::System::Boolean use_focusDistance; // 0xA4
		::System::Single focusDistance; // 0xA8
		::System::Boolean active_aperture; // 0xAC
		::System::Boolean use_aperture; // 0xAD
		::System::Single aperture; // 0xB0
		::System::Boolean active_focalLength; // 0xB4
		::System::Boolean use_focalLength; // 0xB5
		::System::Single focalLength; // 0xB8
		::System::Boolean active_bladeCount; // 0xBC
		::System::Boolean use_bladeCount; // 0xBD
		::System::Int32 bladeCount; // 0xC0
		::System::Boolean active_bladeCurvature; // 0xC4
		::System::Boolean use_bladeCurvature; // 0xC5
		::System::Single bladeCurvature; // 0xC8
		::System::Boolean active_bladeRotation; // 0xCC
		::System::Boolean use_bladeRotation; // 0xCD
		::System::Single bladeRotation; // 0xD0
		::System::Boolean active_debugMode; // 0xD4
		::System::Boolean use_debugMode; // 0xD5
		::UnityEngine::Rendering::Universal::DofDebugMode debugMode; // 0xD8
		::System::Boolean active_discardNearCoc; // 0xDC
		::System::Boolean use_discardNearCoc; // 0xDD
		::System::Boolean discardNearCoc; // 0xDE
		::System::Boolean active_blurQualityHigh; // 0xDF
		::System::Boolean use_blurQualityHigh; // 0xE0
		::System::Boolean blurQualityHigh; // 0xE1
		::System::Boolean active_forceNoDefaultDof; // 0xE2
		::System::Boolean use_forceNoDefaultDof; // 0xE3
		::System::Boolean forceNoDefaultDof; // 0xE4
		::UnityEngine::Rendering::Universal::DepthOfField* _DepthOfField; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::DepthOfField* Method_4_236B13DADDAA2EAD(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::DepthOfField*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_236B13DADDAA2EAD_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
