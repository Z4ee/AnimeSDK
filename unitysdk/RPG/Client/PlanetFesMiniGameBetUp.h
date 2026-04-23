#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesModule; }
namespace RPG::GameCore { class PlanetFesRaiseConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_CREATE_OFFSET UNITYSDK_OFFSET(0xACC4F30)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_COSTSTR_OFFSET UNITYSDK_OFFSET(0xACC5610)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDCOSTBIGINTEGER_OFFSET UNITYSDK_OFFSET(0xACC50D0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDCOST_OFFSET UNITYSDK_OFFSET(0xACC5050)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDICON_OFFSET UNITYSDK_OFFSET(0xACC5690)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_ISGOLDENOUGH_OFFSET UNITYSDK_OFFSET(0xACC5820)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_RAISECURVEID_OFFSET UNITYSDK_OFFSET(0xACC4FA0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_RAISEVALUE_OFFSET UNITYSDK_OFFSET(0xACC4FC0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_ROW_OFFSET UNITYSDK_OFFSET(0xACC4FE0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET__GOLDITEMID_OFFSET UNITYSDK_OFFSET(0xACC57C0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xACC5340)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_SET_RAISECURVEID_OFFSET UNITYSDK_OFFSET(0xACC4FB0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_SET_RAISEVALUE_OFFSET UNITYSDK_OFFSET(0xACC4FD0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP__CTOR_OFFSET UNITYSDK_OFFSET(0xACC4F90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameBetUp_TypeDefinitionIndex = 61364;

	class PlanetFesMiniGameBetUp : public ::System::Object
	{
	public:
		::System::UInt32 _RaiseValue_k__BackingField; // 0x10
		::System::UInt32 _RaiseCurveID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesMiniGameBetUp* Create(::System::UInt32 raiseCurveID, ::System::UInt32 raiseValue)
		{
			return ((::RPG::Client::PlanetFesMiniGameBetUp*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_CREATE_OFFSET))(raiseCurveID, raiseValue);
		}

		::System::UInt32 get_RaiseCurveID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_RAISECURVEID_OFFSET))(this);
		}

		::System::Void set_RaiseCurveID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_SET_RAISECURVEID_OFFSET))(this, value);
		}

		::System::UInt32 get_RaiseValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_RAISEVALUE_OFFSET))(this);
		}

		::System::Void set_RaiseValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_SET_RAISEVALUE_OFFSET))(this, value);
		}

		::RPG::GameCore::PlanetFesRaiseConfigRow* get_Row()
		{
			return ((::RPG::GameCore::PlanetFesRaiseConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_GoldCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDCOST_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_GoldCostBigInteger()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDCOSTBIGINTEGER_OFFSET))(this);
		}

		::System::String* get_CostStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_COSTSTR_OFFSET))(this);
		}

		::System::String* get_GoldIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDICON_OFFSET))(this);
		}

		::System::Boolean get_IsGoldEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_ISGOLDENOUGH_OFFSET))(this);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET__MODULE_OFFSET))(this);
		}

		::System::UInt32 get__GoldItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET__GOLDITEMID_OFFSET))(this);
		}
	};
}
