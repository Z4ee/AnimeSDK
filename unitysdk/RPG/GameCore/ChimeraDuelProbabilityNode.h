#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelProbilityComparePredicate; }

#define RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_METHOD_3_124DFD5F7173633E_OFFSET UNITYSDK_OFFSET(0x170A2F00)
#define RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_METHOD_3_5C7AC2C757C52D33_OFFSET UNITYSDK_OFFSET(0x170A2E20)
#define RPG_GAMECORE_CHIMERADUELPROBABILITYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A2EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelProbabilityNode_TypeDefinitionIndex = 14674;

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

		static ::System::Void Method_3_5C7AC2C757C52D33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelProbabilityNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelProbabilityNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_METHOD_3_5C7AC2C757C52D33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_124DFD5F7173633E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelProbabilityNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_METHOD_3_124DFD5F7173633E_OFFSET))(a1, a2);
		}
	};
}
