#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class AudioEventItem; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET UNITYSDK_OFFSET(0x155AFFA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS87_0__PLAYAUDIOLIST_B__2_OFFSET UNITYSDK_OFFSET(0x155AFFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass87_0_TypeDefinitionIndex = 41797;

	class UIGalgamePageController___c__DisplayClass87_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::MoleMole::GalGame::AudioEventItem* eventItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAudioList_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS87_0__PLAYAUDIOLIST_B__2_OFFSET))(this);
		}
	};
}
