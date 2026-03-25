#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_LIKECHIMERA_OFFSET UNITYSDK_OFFSET(0xA05F240)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_UNLIKECHIMERA_OFFSET UNITYSDK_OFFSET(0xA05F330)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA05F3E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEvaluationMockAnimator_TypeDefinitionIndex = 63895;

	class ChimeraEvaluationMockAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* ChimeraAnimator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void LikeChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_LIKECHIMERA_OFFSET))(this);
		}

		::System::Void UnlikeChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_UNLIKECHIMERA_OFFSET))(this);
		}
	};
}
