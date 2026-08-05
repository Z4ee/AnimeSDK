#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::GalGame { class MainCityChatInLevelPlayStoryNode; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179E5310)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS74_0__INLEVELPLAYSTORYNODE_G__DOPLAYSTORYNODE_0_OFFSET UNITYSDK_OFFSET(0x179E5320)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass74_0_TypeDefinitionIndex = 77916;

	class UIMainCityChatPlayWidgetController___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::System::Action* finishFunc; // 0x10
		::MoleMole::Battle::Entity* entity; // 0x18
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x20
		::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode* config; // 0x28
		::System::Boolean isSkip; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Void _InLevelPlayStoryNode_g__DoPlayStoryNode_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS74_0__INLEVELPLAYSTORYNODE_G__DOPLAYSTORYNODE_0_OFFSET))(this);
		}
	};
}
