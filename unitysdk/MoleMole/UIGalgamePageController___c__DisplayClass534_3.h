#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass534_0; }
namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_3__CTOR_OFFSET UNITYSDK_OFFSET(0x186BFA30)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_3__PLAYNPCFADEACTIONS_B__7_OFFSET UNITYSDK_OFFSET(0x186C0210)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_3__PLAYNPCFADEACTIONS_B__8_OFFSET UNITYSDK_OFFSET(0x186BFA40)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_3__PLAYNPCFADEACTIONS_G__APPLYPOSENFACIALWHENFADE_6_OFFSET UNITYSDK_OFFSET(0x186C0000)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass534_3_TypeDefinitionIndex = 62800;

	class UIGalgamePageController___c__DisplayClass534_3 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalGameNPCFadeAction* fadeAction; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass534_0* CS___8__locals3; // 0x18
		::System::Int32 locationKey; // 0x20
		::System::Int32 currStageNodeIdx; // 0x24
		::MoleMole::GalGame::GalNPCLocation location; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_3__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__8(::UnityEngine::Object* res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_3__PLAYNPCFADEACTIONS_B__8_OFFSET))(this, res);
		}

		::System::Void _PlayNPCFadeActions_g__ApplyPoseNFacialWhenFade_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_3__PLAYNPCFADEACTIONS_G__APPLYPOSENFACIALWHENFADE_6_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_3__PLAYNPCFADEACTIONS_B__7_OFFSET))(this);
		}
	};
}
