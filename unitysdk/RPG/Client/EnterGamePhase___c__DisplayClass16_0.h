#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionModule_MissionResState; }

#define RPG_CLIENT_ENTERGAMEPHASE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96000C0)
#define RPG_CLIENT_ENTERGAMEPHASE___C__DISPLAYCLASS16_0___CHECKMISSIONRES_B__0_OFFSET UNITYSDK_OFFSET(0x9602220)

namespace RPG::Client
{
	inline static constexpr unsigned int EnterGamePhase___c__DisplayClass16_0_TypeDefinitionIndex = 49570;

	class EnterGamePhase___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule_MissionResState* missionResState; // 0x10
		::System::Int64 downloadSize; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void __CheckMissionRes_b__0(::System::Boolean isOK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C__DISPLAYCLASS16_0___CHECKMISSIONRES_B__0_OFFSET))(this, isOK);
		}
	};
}
