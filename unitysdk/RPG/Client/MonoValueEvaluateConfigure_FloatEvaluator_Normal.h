#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoValueEvaluateConfigure_FloatEvaluator.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_NORMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4EC90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoValueEvaluateConfigure_FloatEvaluator_Normal_TypeDefinitionIndex = 56044;

	class MonoValueEvaluateConfigure_FloatEvaluator_Normal : public ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator
	{
	public:
		::UnityEngine::AnimationCurve* OutputCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_NORMAL__CTOR_OFFSET))(this);
		}
	};
}
