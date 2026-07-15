#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BlendCurve.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPGTools::Timeline::Emotion { class EmoMouthBakedBlendShapes; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x19A4E6B0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19A4E750)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A4E800)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19A4E7E0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoMouthBakedBlendShapesData_TypeDefinitionIndex = 46979;

	class EmoMouthBakedBlendShapesData : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::AnimationCurve** StaticGet_s_EaseInOutCurve()
		{
			return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(EmoMouthBakedBlendShapesData_TypeDefinitionIndex)->GetStaticField(0x569F0);
		}
		::RPGTools::Timeline::Emotion::BlendCurve Curve; // 0x18
		::Il2CppArray<::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes*>* BlendShapes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_GET_LENGTH_OFFSET))(this);
		}
	};
}
