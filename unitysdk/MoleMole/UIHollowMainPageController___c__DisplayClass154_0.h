#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS154_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169CD970)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS154_0__REFRESHMISSIONTITLEPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x169CD980)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass154_0_TypeDefinitionIndex = 44942;

	class UIHollowMainPageController___c__DisplayClass154_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::UnityEngine::Animation* anim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS154_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMissionTitleProgress_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS154_0__REFRESHMISSIONTITLEPROGRESS_B__0_OFFSET))(this);
		}
	};
}
