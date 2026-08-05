#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_0851F6FC382E3414;
class Class_1_298A0E0CFA826838;
class Class_1_CCFD1BC350071063;
class Class_1_D36393D5F41E9497;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS506_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1859C590)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS506_0__SETAVATARNEW_B__0_OFFSET UNITYSDK_OFFSET(0x1859C5A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS506_0__SETAVATARNEW_B__1_OFFSET UNITYSDK_OFFSET(0x1859C610)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS506_0__SETAVATARNEW_B__2_OFFSET UNITYSDK_OFFSET(0x1859C770)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass506_0_TypeDefinitionIndex = 62791;

	class UIGalgamePageController___c__DisplayClass506_0 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* rootCanvasGroup; // 0x10
		::Class_1_298A0E0CFA826838* filterContext; // 0x18
		::System::Action* loadFinished; // 0x20
		::Class_1_0851F6FC382E3414* currUnit; // 0x28
		::MoleMole::UIGalgamePageController* __4__this; // 0x30
		::Class_1_CCFD1BC350071063* avatarModelInfo; // 0x38
		::Class_1_D36393D5F41E9497* avatarSetting; // 0x40
		::MoleMole::AvatarShowSetting* showSetting; // 0x48
		::System::Int32 realIndex; // 0x50
		::System::Boolean useSelfLightSetting; // 0x54
		::System::Boolean isUsingPlayerAvatarSkin; // 0x55
		::System::Boolean hasOverridedAvatarSkin; // 0x56
		::System::Int32 avatarId; // 0x58
		::System::Int32 overrideSkinID; // 0x5C
		::MoleMole::GalGame::GalNPCLocation location; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS506_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__0(::Class_1_0851F6FC382E3414* recycleRoleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0851F6FC382E3414*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS506_0__SETAVATARNEW_B__0_OFFSET))(this, recycleRoleInfo);
		}

		::System::Void _SetAvatarNew_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS506_0__SETAVATARNEW_B__1_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS506_0__SETAVATARNEW_B__2_OFFSET))(this);
		}
	};
}
