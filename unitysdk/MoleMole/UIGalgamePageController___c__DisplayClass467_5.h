#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass467_0; }
namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1771C6C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_5__PLAYNPCFADEACTIONS_B__11_OFFSET UNITYSDK_OFFSET(0x1771CE80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_5__PLAYNPCFADEACTIONS_B__12_OFFSET UNITYSDK_OFFSET(0x1771C6D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_5__PLAYNPCFADEACTIONS_G__APPLYPOSENFACIALWHENFADE_10_OFFSET UNITYSDK_OFFSET(0x1771CC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass467_5_TypeDefinitionIndex = 54844;

	class UIGalgamePageController___c__DisplayClass467_5 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalGameNPCFadeAction* fadeAction; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass467_0* CS___8__locals5; // 0x18
		::System::Int32 locationKey; // 0x20
		::System::Int32 currStageNodeIdx; // 0x24
		::MoleMole::GalGame::GalNPCLocation location; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_5__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__12(::UnityEngine::Object* res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_5__PLAYNPCFADEACTIONS_B__12_OFFSET))(this, res);
		}

		::System::Void _PlayNPCFadeActions_g__ApplyPoseNFacialWhenFade_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_5__PLAYNPCFADEACTIONS_G__APPLYPOSENFACIALWHENFADE_10_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_5__PLAYNPCFADEACTIONS_B__11_OFFSET))(this);
		}
	};
}
