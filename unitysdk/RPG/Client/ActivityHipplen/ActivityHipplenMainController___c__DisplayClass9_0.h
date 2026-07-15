#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMainController; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMAINCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBEFF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMAINCONTROLLER___C__DISPLAYCLASS9_0__ONENTERMAINPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x19BC0180)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMainController___c__DisplayClass9_0_TypeDefinitionIndex = 71870;

	class ActivityHipplenMainController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIController* topPage; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMAINCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterMainPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMAINCONTROLLER___C__DISPLAYCLASS9_0__ONENTERMAINPAGE_B__0_OFFSET))(this);
		}
	};
}
