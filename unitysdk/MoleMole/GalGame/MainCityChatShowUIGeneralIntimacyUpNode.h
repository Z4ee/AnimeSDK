#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/MoleMole/UIGeneralIntimacyUpPopWindowController_Context_Type.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x18B33B70)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B33B60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUIGeneralIntimacyUpNode_TypeDefinitionIndex = 65745;

	class MainCityChatShowUIGeneralIntimacyUpNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type ModTrustType; // 0x18
		::System::Nullable_1<::System::Int32> CurTrustLevel; // 0x1C
		::System::Int32 PartnerID; // 0x24
		::System::Boolean usePopShowModel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
