#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass441_0; }
namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_5__CTOR_OFFSET UNITYSDK_OFFSET(0x155AEA70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_5__PLAYNPCFADEACTIONS_B__11_OFFSET UNITYSDK_OFFSET(0x155AF230)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_5__PLAYNPCFADEACTIONS_B__12_OFFSET UNITYSDK_OFFSET(0x155AEA80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_5__PLAYNPCFADEACTIONS_G__APPLYPOSENFACIALWHENFADE_10_OFFSET UNITYSDK_OFFSET(0x155AF020)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass441_5_TypeDefinitionIndex = 41804;

	class UIGalgamePageController___c__DisplayClass441_5 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass441_0* CS___8__locals5; // 0x10
		::MoleMole::GalGame::GalGameNPCFadeAction* fadeAction; // 0x18
		::MoleMole::GalGame::GalNPCLocation location; // 0x20
		::System::Int32 locationKey; // 0x24
		::System::Int32 currStageNodeIdx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_5__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__12(::UnityEngine::Object* res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_5__PLAYNPCFADEACTIONS_B__12_OFFSET))(this, res);
		}

		::System::Void _PlayNPCFadeActions_g__ApplyPoseNFacialWhenFade_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_5__PLAYNPCFADEACTIONS_G__APPLYPOSENFACIALWHENFADE_10_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_5__PLAYNPCFADEACTIONS_B__11_OFFSET))(this);
		}
	};
}
