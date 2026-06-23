#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController___c__DisplayClass467_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1764D170)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_2__PLAYNPCFADEACTIONS_B__3_OFFSET UNITYSDK_OFFSET(0x1764D180)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_2__PLAYNPCFADEACTIONS_B__4_OFFSET UNITYSDK_OFFSET(0x1764D1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass467_2_TypeDefinitionIndex = 54895;

	class UIGalgamePageController___c__DisplayClass467_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass467_1* CS___8__locals2; // 0x10
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x18
		::UnityEngine::RectTransform* stageNodeRoot; // 0x20
		::System::Int32 location; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_2__PLAYNPCFADEACTIONS_B__3_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_2__PLAYNPCFADEACTIONS_B__4_OFFSET))(this);
		}
	};
}
