#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_METHOD_3_D62CD939A8D64A57_OFFSET UNITYSDK_OFFSET(0x1CFD0900)
#define RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_METHOD_3_D7418CCD00891843_OFFSET UNITYSDK_OFFSET(0x1CFD0820)
#define RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD08F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWaitAnimationNormalizedTimeNode_TypeDefinitionIndex = 15775;

	class ChimeraDuelWaitAnimationNormalizedTimeNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Single NormalizedTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7418CCD00891843(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_METHOD_3_D7418CCD00891843_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D62CD939A8D64A57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_METHOD_3_D62CD939A8D64A57_OFFSET))(a1, a2);
		}
	};
}
