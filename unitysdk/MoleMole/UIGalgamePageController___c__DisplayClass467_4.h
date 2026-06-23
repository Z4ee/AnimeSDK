#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController___c__DisplayClass467_3; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace miHoYoEmotion { class EmoSync; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_4__CTOR_OFFSET UNITYSDK_OFFSET(0x187EC8B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_4__PLAYNPCFADEACTIONS_B__6_OFFSET UNITYSDK_OFFSET(0x187EC8C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_4__PLAYNPCFADEACTIONS_B__7_OFFSET UNITYSDK_OFFSET(0x187EC930)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_4__PLAYNPCFADEACTIONS_B__8_OFFSET UNITYSDK_OFFSET(0x187ECAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass467_4_TypeDefinitionIndex = 54841;

	class UIGalgamePageController___c__DisplayClass467_4 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* stageNodeRoot; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass467_3* CS___8__locals4; // 0x18
		::miHoYoEmotion::EmoSync* emoSync; // 0x20
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x28
		::UnityEngine::Animation* moveOutStageAnim; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_4__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_4__PLAYNPCFADEACTIONS_B__6_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_4__PLAYNPCFADEACTIONS_B__7_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_4__PLAYNPCFADEACTIONS_B__8_OFFSET))(this);
		}
	};
}
