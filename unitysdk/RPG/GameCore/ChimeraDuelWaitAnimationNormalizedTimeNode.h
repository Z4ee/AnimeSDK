#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_METHOD_3_D62CD939A8D64A57_OFFSET UNITYSDK_OFFSET(0x19648D50)
#define RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_METHOD_3_FA78EB09E178FA91_OFFSET UNITYSDK_OFFSET(0x19648BB0)
#define RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19648D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWaitAnimationNormalizedTimeNode_TypeDefinitionIndex = 15174;

	class ChimeraDuelWaitAnimationNormalizedTimeNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Single NormalizedTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA78EB09E178FA91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_METHOD_3_FA78EB09E178FA91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D62CD939A8D64A57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_METHOD_3_D62CD939A8D64A57_OFFSET))(a1, a2);
		}
	};
}
