#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D36393D5F41E9497;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIGalgamePageController___c__DisplayClass534_1; }
namespace UnityEngine { class RectTransform; }
namespace miHoYoEmotion { class EmoSync; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB54A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_2__PLAYNPCFADEACTIONS_B__1_OFFSET UNITYSDK_OFFSET(0x18EB54B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_2__PLAYNPCFADEACTIONS_B__2_OFFSET UNITYSDK_OFFSET(0x18EB5520)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_2__PLAYNPCFADEACTIONS_B__3_OFFSET UNITYSDK_OFFSET(0x18EB56A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass534_2_TypeDefinitionIndex = 62762;

	class UIGalgamePageController___c__DisplayClass534_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass534_1* CS___8__locals2; // 0x10
		::Class_1_D36393D5F41E9497* avatarSetting; // 0x18
		::Class_2_FDFE69FE7B72463B* moveOutStageAnim; // 0x20
		::UnityEngine::RectTransform* stageNodeRoot; // 0x28
		::miHoYoEmotion::EmoSync* emoSync; // 0x30
		::UnityEngine::RectTransform* whiteBGRoot; // 0x38
		::System::Int32 location; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_2__PLAYNPCFADEACTIONS_B__1_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_2__PLAYNPCFADEACTIONS_B__2_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_2__PLAYNPCFADEACTIONS_B__3_OFFSET))(this);
		}
	};
}
