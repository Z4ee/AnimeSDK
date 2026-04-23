#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_EVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xAA11DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoValueEvaluateConfigure_Evaluator_TypeDefinitionIndex = 63291;

	class MonoValueEvaluateConfigure_Evaluator : public ::System::Object
	{
	public:
		::System::String* ConfigName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_EVALUATOR__CTOR_OFFSET))(this);
		}
	};
}
