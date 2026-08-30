#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_METHOD_3_9949751E8D8104C4_OFFSET UNITYSDK_OFFSET(0x1CFD0C70)
#define RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_METHOD_3_F048FEE914F18090_OFFSET UNITYSDK_OFFSET(0x1CFD0D50)
#define RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD0D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWaitSecondsNode_TypeDefinitionIndex = 15785;

	class ChimeraDuelWaitSecondsNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Single WaitTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9949751E8D8104C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitSecondsNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitSecondsNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_METHOD_3_9949751E8D8104C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F048FEE914F18090(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitSecondsNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitSecondsNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_METHOD_3_F048FEE914F18090_OFFSET))(a1, a2);
		}
	};
}
