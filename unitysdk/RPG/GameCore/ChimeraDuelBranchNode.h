#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELBRANCHNODE_METHOD_3_BE30A83E58A638FF_OFFSET UNITYSDK_OFFSET(0x1E32D680)
#define RPG_GAMECORE_CHIMERADUELBRANCHNODE_METHOD_3_FD28E477FE08E259_OFFSET UNITYSDK_OFFSET(0x1E32D6E0)
#define RPG_GAMECORE_CHIMERADUELBRANCHNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32D6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBranchNode_TypeDefinitionIndex = 15806;

	class ChimeraDuelBranchNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelPredicateBase* Condition; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* TrueNode; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* FalseNode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBRANCHNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE30A83E58A638FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBranchNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBranchNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBRANCHNODE_METHOD_3_BE30A83E58A638FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD28E477FE08E259(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBranchNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBRANCHNODE_METHOD_3_FD28E477FE08E259_OFFSET))(a1, a2);
		}
	};
}
