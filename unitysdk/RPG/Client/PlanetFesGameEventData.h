#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventDataBase.h"

class Class_1_2E7F169E0B5641A4;
namespace RPG::Client { class PlanetFesMiniGame; }

#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_ACTIVEGAMEDATA_OFFSET UNITYSDK_OFFSET(0x1C375CC0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0x1C375CA0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C375C40)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_SET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0x1C375CB0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0x1C375BF0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3758D0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0x1C375900)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGameEventData_TypeDefinitionIndex = 66590;

	class PlanetFesGameEventData : public ::RPG::Client::PlanetFesEventDataBase
	{
	public:
		::System::Boolean IsInGamePlayPage; // 0x68
		::System::UInt32 _GameType_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void _SyncDetail(::Class_1_2E7F169E0B5641A4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E7F169E0B5641A4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__SYNCDETAIL_OFFSET))(this, a1);
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

		::System::Void set_GameType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_SET_GAMETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesMiniGame* get_ActiveGameData()
		{
			return ((::RPG::Client::PlanetFesMiniGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_ACTIVEGAMEDATA_OFFSET))(this);
		}
	};
}
