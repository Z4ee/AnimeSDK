#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x13EDE870)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDE860)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBranchNode_TypeDefinitionIndex = 60884;

	class MainCityChatBranchNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* fromIndexList; // 0x18
		::MoleMole::GalGame::MainCityChatBranchItem* Failure; // 0x20
		::MoleMole::GalGame::MainCityChatBranchItem* Success; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
