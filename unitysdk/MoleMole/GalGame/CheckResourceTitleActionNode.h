#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_CHECKRESOURCETITLEACTIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x16854E90)
#define MOLEMOLE_GALGAME_CHECKRESOURCETITLEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16854E80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int CheckResourceTitleActionNode_TypeDefinitionIndex = 69114;

	class CheckResourceTitleActionNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* ResourceTitleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHECKRESOURCETITLEACTIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHECKRESOURCETITLEACTIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
