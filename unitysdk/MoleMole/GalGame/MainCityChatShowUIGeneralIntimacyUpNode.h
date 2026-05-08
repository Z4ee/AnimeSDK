#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/MoleMole/UIGeneralIntimacyUpPopWindowController_Context_Type.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x10E1CA00)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1C9F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUIGeneralIntimacyUpNode_TypeDefinitionIndex = 50543;

	class MainCityChatShowUIGeneralIntimacyUpNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Nullable_1<::System::Int32> CurTrustLevel; // 0x18
		::System::Int32 PartnerID; // 0x20
		::System::Boolean usePopShowModel; // 0x24
		::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type ModTrustType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
