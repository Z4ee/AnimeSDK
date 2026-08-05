#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A98F487E59440D0B;
namespace MoleMole { class UIGalgamePageController___c__DisplayClass177_0; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS177_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1859C050)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS177_1__PLAYSWITCHSCENENODE_INNER_B__8_OFFSET UNITYSDK_OFFSET(0x1859C060)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS177_1__PLAYSWITCHSCENENODE_INNER_B__9_OFFSET UNITYSDK_OFFSET(0x1859C430)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass177_1_TypeDefinitionIndex = 62836;

	class UIGalgamePageController___c__DisplayClass177_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass177_0* CS___8__locals1; // 0x10
		::Class_2_A98F487E59440D0B* textNode; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x20
		::System::String* talkText; // 0x28
		::System::Boolean hasOneShotSound; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS177_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS177_1__PLAYSWITCHSCENENODE_INNER_B__8_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS177_1__PLAYSWITCHSCENENODE_INNER_B__9_OFFSET))(this);
		}
	};
}
