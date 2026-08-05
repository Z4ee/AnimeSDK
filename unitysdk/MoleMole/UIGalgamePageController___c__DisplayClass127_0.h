#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A98F487E59440D0B;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170EBCC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__0_OFFSET UNITYSDK_OFFSET(0x170EBF80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__1_OFFSET UNITYSDK_OFFSET(0x170EBFA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__2_OFFSET UNITYSDK_OFFSET(0x170EC020)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__3_OFFSET UNITYSDK_OFFSET(0x170EBCD0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__4_OFFSET UNITYSDK_OFFSET(0x170EBF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass127_0_TypeDefinitionIndex = 62802;

	class UIGalgamePageController___c__DisplayClass127_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::Class_2_A98F487E59440D0B* textPlayNode; // 0x18
		::System::String* voiceKey; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x28
		::System::Boolean hasOneShotSound; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__3_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__4_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS127_0__PLAYSUBNARRATORNODE_B__2_OFFSET))(this);
		}
	};
}
