#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_METHOD_3_1F4E42CB5E5B1B1E_OFFSET UNITYSDK_OFFSET(0x170A7080)
#define RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_METHOD_3_B658D4E04E2A7F2D_OFFSET UNITYSDK_OFFSET(0x170A7160)
#define RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A7110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSwapPositionNode_TypeDefinitionIndex = 14660;

	class ChimeraDuelSwapPositionNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* From; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* To; // 0x18
		::System::Single SwapTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F4E42CB5E5B1B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSwapPositionNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSwapPositionNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_METHOD_3_1F4E42CB5E5B1B1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B658D4E04E2A7F2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSwapPositionNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSwapPositionNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_METHOD_3_B658D4E04E2A7F2D_OFFSET))(a1, a2);
		}
	};
}
