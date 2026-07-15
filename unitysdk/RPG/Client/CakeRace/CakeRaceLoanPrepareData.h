#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceLoanPrepareType.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceFieldData; }

#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORFIELDINFO_OFFSET UNITYSDK_OFFSET(0x1AAB8390)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORINVITED_OFFSET UNITYSDK_OFFSET(0x1AAB8420)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORRETURNMATCH_OFFSET UNITYSDK_OFFSET(0x1AAACCE0)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0x1AAB8350)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1AAB8370)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_PREPARETYPE_OFFSET UNITYSDK_OFFSET(0x1AAB8310)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_RETURNUITYPE_OFFSET UNITYSDK_OFFSET(0x1AAB8330)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0x1AAB8360)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1AAB8380)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_PREPARETYPE_OFFSET UNITYSDK_OFFSET(0x1AAB8320)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_RETURNUITYPE_OFFSET UNITYSDK_OFFSET(0x1AAB8340)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAB8410)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceLoanPrepareData_TypeDefinitionIndex = 72553;

	class CakeRaceLoanPrepareData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceFieldData* _FieldData_k__BackingField; // 0x10
		::RPG::Client::CakeRace::CakeRaceUIType _ReturnUIType_k__BackingField; // 0x18
		::RPG::Client::CakeRace::CakeRaceLoanPrepareType _PrepareType_k__BackingField; // 0x1C
		::System::UInt64 _LobbyID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceLoanPrepareType get_PrepareType()
		{
			return ((::RPG::Client::CakeRace::CakeRaceLoanPrepareType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_PREPARETYPE_OFFSET))(this);
		}

		::System::Void set_PrepareType(::RPG::Client::CakeRace::CakeRaceLoanPrepareType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_PREPARETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRace::CakeRaceUIType get_ReturnUIType()
		{
			return ((::RPG::Client::CakeRace::CakeRaceUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_RETURNUITYPE_OFFSET))(this);
		}

		::System::Void set_ReturnUIType(::RPG::Client::CakeRace::CakeRaceUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_RETURNUITYPE_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceFieldData* get_FieldData()
		{
			return ((::RPG::Client::CakeRaceFieldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_FIELDDATA_OFFSET))(this);
		}

		::System::Void set_FieldData(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_FIELDDATA_OFFSET))(this, a1);
		}

		::System::UInt64 get_LobbyID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_LOBBYID_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* CreateForFieldInfo(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::RPG::Client::CakeRace::CakeRaceLoanPrepareData*(*)(::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORFIELDINFO_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* CreateForInvited(::System::UInt64 a1)
		{
			return ((::RPG::Client::CakeRace::CakeRaceLoanPrepareData*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORINVITED_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* CreateForReturnMatch()
		{
			return ((::RPG::Client::CakeRace::CakeRaceLoanPrepareData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORRETURNMATCH_OFFSET))();
		}
	};
}
