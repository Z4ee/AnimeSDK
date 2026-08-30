#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelProbilityComparePredicate; }

#define RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_METHOD_3_1BFF0BD08D7CB90C_OFFSET UNITYSDK_OFFSET(0x1E339900)
#define RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_METHOD_3_3567DAED0032F9B2_OFFSET UNITYSDK_OFFSET(0x1E3398A0)
#define RPG_GAMECORE_CHIMERADUELPROBABILITYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3398F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelProbabilityNode_TypeDefinitionIndex = 15807;

	class ChimeraDuelProbabilityNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelProbilityComparePredicate* Condition; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* CommonNode; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* FailNode; // 0x20
		::RPG::GameCore::ChimeraDuelPredicateBase* ExtraCastCondition; // 0x28
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* ExtraNode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBABILITYNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3567DAED0032F9B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelProbabilityNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelProbabilityNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_METHOD_3_3567DAED0032F9B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1BFF0BD08D7CB90C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelProbabilityNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_METHOD_3_1BFF0BD08D7CB90C_OFFSET))(a1, a2);
		}
	};
}
