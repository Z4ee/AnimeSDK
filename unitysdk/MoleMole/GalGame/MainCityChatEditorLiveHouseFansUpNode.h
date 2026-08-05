#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x149EA780)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x149EA770)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatEditorLiveHouseFansUpNode_TypeDefinitionIndex = 42100;

	class MainCityChatEditorLiveHouseFansUpNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 headid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
