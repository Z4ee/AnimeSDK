#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueResidentActivityPanelData; }

#define RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC642DA0)
#define RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS58_0__GETROGUERESIDENTPANELDATA_B__0_OFFSET UNITYSDK_OFFSET(0xC653750)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule___c__DisplayClass58_0_TypeDefinitionIndex = 61782;

	class ActivityModule___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueSubMode rogueSubMode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueResidentPanelData_b__0(::RPG::Client::RogueResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS58_0__GETROGUERESIDENTPANELDATA_B__0_OFFSET))(this, a1);
		}
	};
}
