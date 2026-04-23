#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_0808C5146CEB55DA_OFFSET UNITYSDK_OFFSET(0x190ED420)
#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_589FA871C09BD997_OFFSET UNITYSDK_OFFSET(0x190ED460)
#define RPG_GAMECORE_VE_PREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x190ED450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Predicate_TypeDefinitionIndex = 23033;

	class VE_Predicate : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* TrueValue; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* FalseValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0808C5146CEB55DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Predicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Predicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_METHOD_3_0808C5146CEB55DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_589FA871C09BD997(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Predicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Predicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_METHOD_3_589FA871C09BD997_OFFSET))(a1, a2);
		}
	};
}
