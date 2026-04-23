#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventDataBase.h"

class Class_1_BE729FA1D1A7FEDD;
namespace RPG::Client { class PlanetFesMiniGame; }

#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_ACTIVEGAMEDATA_OFFSET UNITYSDK_OFFSET(0xACBFF30)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0xACBFF10)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xACBFEB0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_SET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0xACBFF20)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0xACBFE60)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xACBFBA0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0xACBFBD0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xACC00D0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0xACC0090)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0xACC0040)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGameEventData_TypeDefinitionIndex = 61315;

	class PlanetFesGameEventData : public ::RPG::Client::PlanetFesEventDataBase
	{
	public:
		::System::UInt32 _GameType_k__BackingField; // 0x68
		::System::Boolean IsInGamePlayPage; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void _SyncDetail(::Class_1_BE729FA1D1A7FEDD* eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE729FA1D1A7FEDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__SYNCDETAIL_OFFSET))(this, eventInfo);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Boolean IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_ISINPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_GameType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_GAMETYPE_OFFSET))(this);
		}

		::System::Void set_GameType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_SET_GAMETYPE_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesMiniGame* get_ActiveGameData()
		{
			return ((::RPG::Client::PlanetFesMiniGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_ACTIVEGAMEDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SyncDetail(::Class_1_BE729FA1D1A7FEDD* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE729FA1D1A7FEDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY__CLEARDETAIL_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY_ISINPROGRESS_OFFSET))(this);
		}
	};
}
