#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole::GalGame { class GalPlaySubStoryNode; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15807500)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__PLAYSUBSTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0x15807910)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__PLAYSUBSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x15807510)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__PLAYSUBSTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0x15807790)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass93_0_TypeDefinitionIndex = 41777;

	class UIGalgamePageController___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::System::String* facialKey; // 0x10
		::System::String* poseKey; // 0x18
		::MoleMole::GalGame::GalPlaySubStoryNode* galConfigNode; // 0x20
		::MoleMole::UIGalgamePageController* __4__this; // 0x28
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x30
		::System::Int32 locationKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__PLAYSUBSTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__PLAYSUBSTORYNODE_B__2_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__PLAYSUBSTORYNODE_B__0_OFFSET))(this);
		}
	};
}
