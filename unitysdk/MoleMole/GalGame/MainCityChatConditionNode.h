#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class BranchItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x118C7340)
#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x118C7300)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatConditionNode_TypeDefinitionIndex = 72789;

	class MainCityChatConditionNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		// static const ::System::String* GENDER_COND; // 0x0
		// static const ::System::String* PARTNER_LEVEL_COND; // 0x0
		// static const ::System::String* Check_Resource_Title; // 0x0
		::System::String* conditionKey; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>* conditionList; // 0x20
		::System::Int32 intParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
