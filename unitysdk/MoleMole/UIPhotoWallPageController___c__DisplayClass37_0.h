#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPhotoWallPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS37_0__CHANGETOWATCHMODE_B__0_OFFSET UNITYSDK_OFFSET(0x1788C220)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS37_0__CHANGETOWATCHMODE_B__1_OFFSET UNITYSDK_OFFSET(0x1788CB10)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1788C210)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass37_0_TypeDefinitionIndex = 52443;

	class UIPhotoWallPageController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIPhotoWallPageController* __4__this; // 0x18
		::System::Boolean anim; // 0x20
		::System::Boolean curtain; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeToWatchMode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS37_0__CHANGETOWATCHMODE_B__0_OFFSET))(this);
		}

		::System::Void _ChangeToWatchMode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS37_0__CHANGETOWATCHMODE_B__1_OFFSET))(this);
		}
	};
}
