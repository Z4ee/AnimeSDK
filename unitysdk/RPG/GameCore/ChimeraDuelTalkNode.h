#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELTALKNODE_METHOD_3_12EDFA6FDC1A917F_OFFSET UNITYSDK_OFFSET(0x18806800)
#define RPG_GAMECORE_CHIMERADUELTALKNODE_METHOD_3_D03E6B265D9017B1_OFFSET UNITYSDK_OFFSET(0x18806900)
#define RPG_GAMECORE_CHIMERADUELTALKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x188068A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTalkNode_TypeDefinitionIndex = 15136;

	class ChimeraDuelTalkNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelBubbleEventType EventType; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* TargetSelector; // 0x18
		::System::Boolean IsImmediateFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_12EDFA6FDC1A917F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelTalkNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelTalkNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKNODE_METHOD_3_12EDFA6FDC1A917F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D03E6B265D9017B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelTalkNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKNODE_METHOD_3_D03E6B265D9017B1_OFFSET))(a1, a2);
		}
	};
}
