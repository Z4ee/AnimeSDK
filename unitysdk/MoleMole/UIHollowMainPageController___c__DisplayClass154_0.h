#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS154_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199D7AA0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS154_0__REFRESHMISSIONTITLEPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x199D7AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass154_0_TypeDefinitionIndex = 73669;

	class UIHollowMainPageController___c__DisplayClass154_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18

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
