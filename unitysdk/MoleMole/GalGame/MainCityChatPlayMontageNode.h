#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D90D63B32AE2841C.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/NPCCrowd/Ability/EMontageEndBehavior.h"
#include "unitysdk/NPCCrowd/Ability/EMontagePriorityLayer.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_GET_SHOWGROUPMEMBERID_OFFSET UNITYSDK_OFFSET(0x129A5880)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_GET_SHOWTAGID_OFFSET UNITYSDK_OFFSET(0x129A5870)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x129A5890)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x129A5850)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayMontageNode_TypeDefinitionIndex = 55288;

	class MainCityChatPlayMontageNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* GroupMemberID; // 0x18
		::NPCCrowd::Ability::EMontagePriorityLayer PriorityLayer; // 0x20
		::NPCCrowd::Ability::EMontageEndBehavior EndBehavior; // 0x24
		::System::Int32 MontageID; // 0x28
		::Enum_3_D90D63B32AE2841C EntitySourceType; // 0x2C
		::System::Boolean MontageIDUseAnimationID; // 0x30
		::System::Int32 TagID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowTagID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_GET_SHOWTAGID_OFFSET))(this);
		}

		::System::Boolean get_ShowGroupMemberID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_GET_SHOWGROUPMEMBERID_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
