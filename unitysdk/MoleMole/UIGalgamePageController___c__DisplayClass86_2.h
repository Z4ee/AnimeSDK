#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayStoryNode_SwitchContinuousShakeType.h"
#include "unitysdk/Struct_2_DB26017D92737DC1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass86_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_2__CTOR_OFFSET UNITYSDK_OFFSET(0x155AF940)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_2__PLAYSTORYNODE_B__10_OFFSET UNITYSDK_OFFSET(0x155AF950)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_2__PLAYSTORYNODE_B__11_OFFSET UNITYSDK_OFFSET(0x155AFB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass86_2_TypeDefinitionIndex = 41791;

	class UIGalgamePageController___c__DisplayClass86_2 : public ::System::Object
	{
	public:
		::Struct_2_DB26017D92737DC1 itemGroup; // 0x10
		::System::Action* __9__11; // 0x28
		::MoleMole::UIGalgamePageController___c__DisplayClass86_0* CS___8__locals2; // 0x30
		::MoleMole::GalGame::GalPlayStoryNode_SwitchContinuousShakeType switchContinuousShakeType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_2__PLAYSTORYNODE_B__10_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_2__PLAYSTORYNODE_B__11_OFFSET))(this);
		}
	};
}
