#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleCoopBossPVPManager; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC533640)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS8_0___TRYCREATECLIENTINSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0xC536010)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleCoopBossPVPManager___c__DisplayClass8_0_TypeDefinitionIndex = 75999;

	class MarbleCoopBossPVPManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarbleCoopBossPVPManager* __4__this; // 0x10
		::System::Int32 flowVersion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryCreateClientInstance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS8_0___TRYCREATECLIENTINSTANCE_B__0_OFFSET))(this);
		}
	};
}
