#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_1BC4003B40DE696C_OFFSET UNITYSDK_OFFSET(0x1B894EC0)
#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_384D7790067CB991_OFFSET UNITYSDK_OFFSET(0x1B894F00)
#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_A5B6C0B293E26748_OFFSET UNITYSDK_OFFSET(0x1B8950C0)
#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_B818790A5CE945C7_OFFSET UNITYSDK_OFFSET(0x1B8950F0)
#define RPG_GAMECORE_VE_TARGETCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B894EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_TargetCount_TypeDefinitionIndex = 23190;

	class VE_TargetCount : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BC4003B40DE696C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_TargetCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_TargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_1BC4003B40DE696C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_384D7790067CB991(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_384D7790067CB991_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5B6C0B293E26748(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_TargetCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_TargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_A5B6C0B293E26748_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B818790A5CE945C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_B818790A5CE945C7_OFFSET))(a1, a2);
		}
	};
}
