#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalPlayStoryNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177E1150)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0x177E14A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x177E1500)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0x177E1160)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__3_OFFSET UNITYSDK_OFFSET(0x177E1200)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__4_OFFSET UNITYSDK_OFFSET(0x177E1220)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__5_OFFSET UNITYSDK_OFFSET(0x177E1300)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__6_OFFSET UNITYSDK_OFFSET(0x177E1320)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__7_OFFSET UNITYSDK_OFFSET(0x177E1400)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass86_0_TypeDefinitionIndex = 54858;

	class UIGalgamePageController___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x10
		::MoleMole::GalGame::GalPlayStoryNode* galConfigNode; // 0x18
		::System::String* facialKey; // 0x20
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x28
		::MoleMole::UIGalgamePageController* __4__this; // 0x30
		::System::String* poseKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__2_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__3_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__4_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__5_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__6_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__7_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_0__PLAYSTORYNODE_B__1_OFFSET))(this);
		}
	};
}
