#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::GalGame { class MainCityChatPlayStoryNode; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1783F610)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_0__PLAYSTORYNODE_G__DOPLAYSTORYNODE_0_OFFSET UNITYSDK_OFFSET(0x1783F620)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass59_0_TypeDefinitionIndex = 83699;

	class UIMainCityChatPlayWidgetController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::System::Action* finishFunc; // 0x10
		::MoleMole::GalGame::MainCityChatPlayStoryNode* config; // 0x18
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x20
		::System::Boolean isSkip; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_g__DoPlayStoryNode_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS59_0__PLAYSTORYNODE_G__DOPLAYSTORYNODE_0_OFFSET))(this);
		}
	};
}
