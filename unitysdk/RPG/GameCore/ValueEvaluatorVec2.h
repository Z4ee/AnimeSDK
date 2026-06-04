#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_VALUEEVALUATORVEC2_METHOD_2_BBC35E0C2AE1CFC0_OFFSET UNITYSDK_OFFSET(0x19E49990)
#define RPG_GAMECORE_VALUEEVALUATORVEC2__CTOR_OFFSET UNITYSDK_OFFSET(0x19E49A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValueEvaluatorVec2_TypeDefinitionIndex = 22716;

	class ValueEvaluatorVec2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* x; // 0x10
		::RPG::GameCore::ValueEvaluatorConfig* y; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BBC35E0C2AE1CFC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ValueEvaluatorVec2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ValueEvaluatorVec2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC2_METHOD_2_BBC35E0C2AE1CFC0_OFFSET))(a1, a2);
		}
	};
}
