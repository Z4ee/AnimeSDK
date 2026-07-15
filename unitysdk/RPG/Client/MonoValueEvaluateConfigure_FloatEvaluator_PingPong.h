#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoValueEvaluateConfigure_FloatEvaluator.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_PINGPONG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A367880)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoValueEvaluateConfigure_FloatEvaluator_PingPong_TypeDefinitionIndex = 65576;

	class MonoValueEvaluateConfigure_FloatEvaluator_PingPong : public ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator
	{
	public:
		::UnityEngine::AnimationCurve* OutputCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_PINGPONG__CTOR_OFFSET))(this);
		}
	};
}
