#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_298A0E0CFA826838;
class Class_1_CCFD1BC350071063;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController_UIRoleInfo; }
namespace System { class Action; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE75B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_0__SETAVATARNEW_B__0_OFFSET UNITYSDK_OFFSET(0x19DF0630)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_0__SETAVATARNEW_B__1_OFFSET UNITYSDK_OFFSET(0x19DF06A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_0__SETAVATARNEW_B__2_OFFSET UNITYSDK_OFFSET(0x19DF0800)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass444_0_TypeDefinitionIndex = 54882;

	class UIGalgamePageController___c__DisplayClass444_0 : public ::System::Object
	{
	public:
		::Class_1_298A0E0CFA826838* filterContext; // 0x10
		::UnityEngine::CanvasGroup* rootCanvasGroup; // 0x18
		::MoleMole::UIGalgamePageController* __4__this; // 0x20
		::MoleMole::UIGalgamePageController_UIRoleInfo* currUnit; // 0x28
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x30
		::System::Action* loadFinished; // 0x38
		::MoleMole::AvatarShowSetting* showSetting; // 0x40
		::Class_1_CCFD1BC350071063* avatarModelInfo; // 0x48
		::MoleMole::GalGame::GalNPCLocation location; // 0x50
		::System::Int32 realIndex; // 0x54
		::System::Boolean isUsingPlayerAvatarSkin; // 0x58
		::System::Boolean hasOverridedAvatarSkin; // 0x59
		::System::Boolean useSelfLightSetting; // 0x5A
		::System::Int32 avatarId; // 0x5C
		::System::Int32 overrideSkinID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__0(::MoleMole::UIGalgamePageController_UIRoleInfo* recycleRoleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgamePageController_UIRoleInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_0__SETAVATARNEW_B__0_OFFSET))(this, recycleRoleInfo);
		}

		::System::Void _SetAvatarNew_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_0__SETAVATARNEW_B__1_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_0__SETAVATARNEW_B__2_OFFSET))(this);
		}
	};
}
