#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F95350)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYNOAVATARSTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0x17F95360)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYNOAVATARSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x17F953B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYNOAVATARSTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0x17F95410)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYNOAVATARSTORYNODE_B__3_OFFSET UNITYSDK_OFFSET(0x17F95390)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass104_0_TypeDefinitionIndex = 54914;

	class UIGalgamePageController___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x18
		::System::String* avatarName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYNOAVATARSTORYNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYNOAVATARSTORYNODE_B__3_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYNOAVATARSTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYNOAVATARSTORYNODE_B__2_OFFSET))(this);
		}
	};
}
