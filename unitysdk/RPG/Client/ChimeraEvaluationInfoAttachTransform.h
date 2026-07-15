#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHIMERAEVALUATIONINFOATTACHTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF7140)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEvaluationInfoAttachTransform_TypeDefinitionIndex = 69199;

	class ChimeraEvaluationInfoAttachTransform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* Name; // 0x18
		::UnityEngine::RectTransform* TalkPop; // 0x20
		::UnityEngine::RectTransform* Info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONINFOATTACHTRANSFORM__CTOR_OFFSET))(this);
		}
	};
}
