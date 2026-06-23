#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/DirectionalBlurBehaviour_Struct_2_52AD02145F5FCE36_22.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }

#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1839BF30)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x1839C620)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_2A2F4871A4F10FFC_OFFSET UNITYSDK_OFFSET(0x1839C170)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1839D4C0)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1839D4E0)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1839D4D0)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1839D4B0)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1839C560)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1839CF60)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1839D130)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1839D470)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DirectionalBlurBehaviour_TypeDefinitionIndex = 62677;

	class DirectionalBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::DirectionalBlurBehaviour_Struct_2_52AD02145F5FCE36_22 _methodParm; // 0x18
		::System::Boolean enabled; // 0x48
		::System::Boolean active_downSample; // 0x49
		::System::Boolean use_downSample; // 0x4A
		::UnityEngine::Rendering::Universal::DownSampleLevel downSample; // 0x4C
		::System::Boolean active_sampleDistanceMode; // 0x50
		::System::Boolean use_sampleDistanceMode; // 0x51
		::UnityEngine::Rendering::Universal::SampleDistanceMode sampleDistanceMode; // 0x54
		::System::Boolean active_sampleCount; // 0x58
		::System::Boolean use_sampleCount; // 0x59
		::System::Int32 sampleCount; // 0x5C
		::System::Boolean active_radius; // 0x60
		::System::Boolean use_radius; // 0x61
		::System::Single radius; // 0x64
		::System::Boolean active_direction; // 0x68
		::System::Boolean use_direction; // 0x69
		::UnityEngine::Vector2 direction; // 0x6C
		::UnityEngine::Rendering::Universal::DirectionalBlur* _DirectionalBlur; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::DirectionalBlur* Method_4_2A2F4871A4F10FFC(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::DirectionalBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_METHOD_4_2A2F4871A4F10FFC_OFFSET))(this, a1);
		}
	};
}
