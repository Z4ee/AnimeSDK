#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x168559D0)
#define MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x168559C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityAttractorUseNode_TypeDefinitionIndex = 58761;

	class MainCityAttractorUseNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 AttractorID; // 0x18
		::System::Int32 TagID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
