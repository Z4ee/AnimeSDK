#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceLoanPrepareType.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceFieldData; }

#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORFIELDINFO_OFFSET UNITYSDK_OFFSET(0x922ACF0)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORINVITED_OFFSET UNITYSDK_OFFSET(0x922AD90)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORRETURNMATCH_OFFSET UNITYSDK_OFFSET(0x92205D0)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0x922ACB0)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x922ACD0)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_PREPARETYPE_OFFSET UNITYSDK_OFFSET(0x922AC70)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_RETURNUITYPE_OFFSET UNITYSDK_OFFSET(0x922AC90)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0x922ACC0)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x922ACE0)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_PREPARETYPE_OFFSET UNITYSDK_OFFSET(0x922AC80)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_RETURNUITYPE_OFFSET UNITYSDK_OFFSET(0x922ACA0)
#define RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x922AD80)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceLoanPrepareData_TypeDefinitionIndex = 62229;

	class CakeRaceLoanPrepareData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceFieldData* _FieldData_k__BackingField; // 0x10
		::System::UInt64 _LobbyID_k__BackingField; // 0x18
		::RPG::Client::CakeRace::CakeRaceLoanPrepareType _PrepareType_k__BackingField; // 0x20
		::RPG::Client::CakeRace::CakeRaceUIType _ReturnUIType_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceLoanPrepareType get_PrepareType()
		{
			return ((::RPG::Client::CakeRace::CakeRaceLoanPrepareType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_PREPARETYPE_OFFSET))(this);
		}

		::System::Void set_PrepareType(::RPG::Client::CakeRace::CakeRaceLoanPrepareType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_PREPARETYPE_OFFSET))(this, value);
		}

		::RPG::Client::CakeRace::CakeRaceUIType get_ReturnUIType()
		{
			return ((::RPG::Client::CakeRace::CakeRaceUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_RETURNUITYPE_OFFSET))(this);
		}

		::System::Void set_ReturnUIType(::RPG::Client::CakeRace::CakeRaceUIType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_RETURNUITYPE_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceFieldData* get_FieldData()
		{
			return ((::RPG::Client::CakeRaceFieldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_FIELDDATA_OFFSET))(this);
		}

		::System::Void set_FieldData(::RPG::Client::CakeRaceFieldData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_FIELDDATA_OFFSET))(this, value);
		}

		::System::UInt64 get_LobbyID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_SET_LOBBYID_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* CreateForFieldInfo(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::RPG::Client::CakeRace::CakeRaceLoanPrepareData*(*)(::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORFIELDINFO_OFFSET))(fieldData);
		}

		static ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* CreateForInvited(::System::UInt64 lobbyID)
		{
			return ((::RPG::Client::CakeRace::CakeRaceLoanPrepareData*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORINVITED_OFFSET))(lobbyID);
		}

		static ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* CreateForReturnMatch()
		{
			return ((::RPG::Client::CakeRace::CakeRaceLoanPrepareData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACELOANPREPAREDATA_CREATEFORRETURNMATCH_OFFSET))();
		}
	};
}
