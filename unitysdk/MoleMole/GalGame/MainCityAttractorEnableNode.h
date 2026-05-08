#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYATTRACTORENABLENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1780FF70)
#define MOLEMOLE_GALGAME_MAINCITYATTRACTORENABLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1780FF60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityAttractorEnableNode_TypeDefinitionIndex = 55261;

	class MainCityAttractorEnableNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AttractorIDs; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYATTRACTORENABLENODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYATTRACTORENABLENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
