#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GETROGUETOURNBUILDREFHISTORYHTTPRSP_HISTORYDATA_GET_TIME_OFFSET UNITYSDK_OFFSET(0xBACAD30)
#define RPG_CLIENT_GETROGUETOURNBUILDREFHISTORYHTTPRSP_HISTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBACADC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GetRogueTournBuildRefHistoryHttpRsp_HistoryData_TypeDefinitionIndex = 63419;

	class GetRogueTournBuildRefHistoryHttpRsp_HistoryData : public ::System::Object
	{
	public:
		::System::String* BuildRefID; // 0x10
		::System::UInt64 TimestampSec; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GETROGUETOURNBUILDREFHISTORYHTTPRSP_HISTORYDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_Time()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GETROGUETOURNBUILDREFHISTORYHTTPRSP_HISTORYDATA_GET_TIME_OFFSET))(this);
		}
	};
}
