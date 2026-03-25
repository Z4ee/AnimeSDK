#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueResidentActivityPanelData; }

#define RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F75910)
#define RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS51_0__GETROGUERESIDENTPANELDATA_B__0_OFFSET UNITYSDK_OFFSET(0x8F83E80)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule___c__DisplayClass51_0_TypeDefinitionIndex = 50050;

	class ActivityModule___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueSubMode rogueSubMode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueResidentPanelData_b__0(::RPG::Client::RogueResidentActivityPanelData* panel)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS51_0__GETROGUERESIDENTPANELDATA_B__0_OFFSET))(this, panel);
		}
	};
}
