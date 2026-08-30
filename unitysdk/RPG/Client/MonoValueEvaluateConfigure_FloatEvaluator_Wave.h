#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoValueEvaluateConfigure_FloatEvaluator.h"

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_WAVE__CTOR_OFFSET UNITYSDK_OFFSET(0xD87F310)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoValueEvaluateConfigure_FloatEvaluator_Wave_TypeDefinitionIndex = 68593;

	class MonoValueEvaluateConfigure_FloatEvaluator_Wave : public ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator
	{
	public:
		::System::Single DampValue; // 0x20
		::System::Single StiffnessValue; // 0x24
		::System::Single ToleranceSpeedVariation; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_WAVE__CTOR_OFFSET))(this);
		}
	};
}
