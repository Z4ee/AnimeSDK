#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoValueEvaluateConfigure_FloatEvaluator.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_LOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C299A40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoValueEvaluateConfigure_FloatEvaluator_Loop_TypeDefinitionIndex = 68592;

	class MonoValueEvaluateConfigure_FloatEvaluator_Loop : public ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator
	{
	public:
		::UnityEngine::AnimationCurve* OutputCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_LOOP__CTOR_OFFSET))(this);
		}
	};
}
