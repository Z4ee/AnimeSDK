#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BlendCurve.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPGTools::Timeline::Emotion { class EmoBakedPose; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE84BD80)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE84BD70)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBakedPoseData_TypeDefinitionIndex = 49201;

	class EmoBakedPoseData : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::AnimationCurve** StaticGet_s_EaseInOutCurve()
		{
			return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(EmoBakedPoseData_TypeDefinitionIndex)->GetStaticField(0x33990);
		}
		::RPGTools::Timeline::Emotion::BlendCurve Curve; // 0x18
		::Il2CppArray<::RPGTools::Timeline::Emotion::EmoBakedPose*>* Poses; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSEDATA__CCTOR_OFFSET))();
		}
	};
}
