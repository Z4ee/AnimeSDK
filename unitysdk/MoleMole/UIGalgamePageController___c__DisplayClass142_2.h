#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayStoryNode_SwitchContinuousShakeType.h"
#include "unitysdk/Struct_2_DB26017D92737DC1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass142_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBC8F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_2__PLAYSTORYNODE_B__10_OFFSET UNITYSDK_OFFSET(0x16DBC900)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_2__PLAYSTORYNODE_B__11_OFFSET UNITYSDK_OFFSET(0x16DBCAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass142_2_TypeDefinitionIndex = 62818;

	class UIGalgamePageController___c__DisplayClass142_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass142_0* CS___8__locals2; // 0x10
		::System::Action* __9__11; // 0x18
		::Struct_2_DB26017D92737DC1 itemGroup; // 0x20
		::MoleMole::GalGame::GalPlayStoryNode_SwitchContinuousShakeType switchContinuousShakeType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_2__PLAYSTORYNODE_B__10_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_2__PLAYSTORYNODE_B__11_OFFSET))(this);
		}
	};
}
