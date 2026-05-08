#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/System/Object.h"

class Class_1_C8FB2F60D8408C02;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController_UIRoleInfo; }
namespace System { class Action; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_0__CTOR_OFFSET UNITYSDK_OFFSET(0x158FF050)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_0__SETAVATARNEW_B__0_OFFSET UNITYSDK_OFFSET(0x158FF060)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_0__SETAVATARNEW_B__1_OFFSET UNITYSDK_OFFSET(0x158FF0D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_0__SETAVATARNEW_B__2_OFFSET UNITYSDK_OFFSET(0x158FF280)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass429_0_TypeDefinitionIndex = 41766;

	class UIGalgamePageController___c__DisplayClass429_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController_UIRoleInfo* currUnit; // 0x10
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x18
		::System::Action* loadFinished; // 0x20
		::Class_1_C8FB2F60D8408C02* avatarModelInfo; // 0x28
		::MoleMole::UIGalgamePageController* __4__this; // 0x30
		::UnityEngine::CanvasGroup* rootCanvasGroup; // 0x38
		::MoleMole::AvatarShowSetting* showSetting; // 0x40
		::MoleMole::GalGame::GalgameFilterType filterType; // 0x48
		::MoleMole::GalGame::GalNPCLocation location; // 0x4C
		::System::Boolean hasOverridedAvatarSkin; // 0x50
		::System::Boolean isUsingPlayerAvatarSkin; // 0x51
		::System::Boolean useSelfLightSetting; // 0x52
		::System::Int32 realIndex; // 0x54
		::System::Int32 overrideSkinID; // 0x58
		::System::Int32 avatarId; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__0(::MoleMole::UIGalgamePageController_UIRoleInfo* recycleRoleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgamePageController_UIRoleInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_0__SETAVATARNEW_B__0_OFFSET))(this, recycleRoleInfo);
		}

		::System::Void _SetAvatarNew_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_0__SETAVATARNEW_B__1_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_0__SETAVATARNEW_B__2_OFFSET))(this);
		}
	};
}
