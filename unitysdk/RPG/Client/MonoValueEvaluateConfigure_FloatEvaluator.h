#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoValueEvaluateConfigure_Evaluator.h"

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC1607A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoValueEvaluateConfigure_FloatEvaluator_TypeDefinitionIndex = 64209;

	class MonoValueEvaluateConfigure_FloatEvaluator : public ::RPG::Client::MonoValueEvaluateConfigure_Evaluator
	{
	public:
		::System::Single MaxValue; // 0x18
		::System::Single MinValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR__CTOR_OFFSET))(this);
		}
	};
}
