#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATEBEHAVIOUR_METHOD_2_988EE78A892C77F3_OFFSET UNITYSDK_OFFSET(0x19A5A580)
#define RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19A5A1B0)
#define RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19A5A230)
#define RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5A5F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FresnelRimMaterialAnimateBehaviour_TypeDefinitionIndex = 46297;

	class FresnelRimMaterialAnimateBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Color FresnelColor; // 0x10
		::UnityEngine::Vector4 FresnelBSI; // 0x20
		::System::Single FresnelColorStrength; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* TargetRenderers; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _MaterialList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_2_988EE78A892C77F3(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATEBEHAVIOUR_METHOD_2_988EE78A892C77F3_OFFSET))(this, a1);
		}
	};
}
