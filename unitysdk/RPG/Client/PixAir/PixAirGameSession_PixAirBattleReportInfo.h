#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGameSession_PixAirPlaneReportInfo.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGameSession_PixAirStageReportInfo.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIRBATTLEREPORTINFO_GET_PLANEINFO_OFFSET UNITYSDK_OFFSET(0x1409D0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIRBATTLEREPORTINFO_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x140A00)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIRBATTLEREPORTINFO_SET_PLANEINFO_OFFSET UNITYSDK_OFFSET(0x1409F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIRBATTLEREPORTINFO_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x140A20)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameSession_PixAirBattleReportInfo_TypeDefinitionIndex = 73676;

	struct alignas(4) PixAirGameSession_PixAirBattleReportInfo
	{
		::RPG::Client::PixAir::PixAirGameSession_PixAirPlaneReportInfo _PlaneInfo_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirGameSession_PixAirStageReportInfo _StageInfo_k__BackingField; // 0x28

		::RPG::Client::PixAir::PixAirGameSession_PixAirPlaneReportInfo get_PlaneInfo()
		{
			return ((::RPG::Client::PixAir::PixAirGameSession_PixAirPlaneReportInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIRBATTLEREPORTINFO_GET_PLANEINFO_OFFSET))(this);
		}

		::System::Void set_PlaneInfo(::RPG::Client::PixAir::PixAirGameSession_PixAirPlaneReportInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGameSession_PixAirPlaneReportInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIRBATTLEREPORTINFO_SET_PLANEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirGameSession_PixAirStageReportInfo get_StageInfo()
		{
			return ((::RPG::Client::PixAir::PixAirGameSession_PixAirStageReportInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIRBATTLEREPORTINFO_GET_STAGEINFO_OFFSET))(this);
		}

		::System::Void set_StageInfo(::RPG::Client::PixAir::PixAirGameSession_PixAirStageReportInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGameSession_PixAirStageReportInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIRBATTLEREPORTINFO_SET_STAGEINFO_OFFSET))(this, a1);
		}
	};
}
