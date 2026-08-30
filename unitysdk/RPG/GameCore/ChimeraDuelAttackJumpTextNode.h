#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_METHOD_3_3FC97F01B904F3E7_OFFSET UNITYSDK_OFFSET(0x1CFBFAA0)
#define RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_METHOD_3_AA279FDCC7136976_OFFSET UNITYSDK_OFFSET(0x1CFBFB40)
#define RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBFB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAttackJumpTextNode_TypeDefinitionIndex = 15790;

	class ChimeraDuelAttackJumpTextNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3FC97F01B904F3E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_METHOD_3_3FC97F01B904F3E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA279FDCC7136976(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_METHOD_3_AA279FDCC7136976_OFFSET))(a1, a2);
		}
	};
}
