#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_EB2ACEE93C9CA60D;
namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesAvatarEventData; }
namespace RPG::Client { class PlanetFesMiniGame; }
namespace RPG::Client { class PlanetFesUnlockData; }
namespace RPG::GameCore { class PlanetFesLandRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESLANDDATA_BUYLAND_OFFSET UNITYSDK_OFFSET(0xACC0910)
#define RPG_CLIENT_PLANETFESLANDDATA_CANBUY_OFFSET UNITYSDK_OFFSET(0xACC0360)
#define RPG_CLIENT_PLANETFESLANDDATA_GETACTIVEAVATARVISIT_OFFSET UNITYSDK_OFFSET(0xACC0FF0)
#define RPG_CLIENT_PLANETFESLANDDATA_GETACTIVEGAMEDATA_OFFSET UNITYSDK_OFFSET(0xACC1360)
#define RPG_CLIENT_PLANETFESLANDDATA_GETNOTFINISHEDUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xACC07C0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CANCOLLECTINCOME_OFFSET UNITYSDK_OFFSET(0xACC1A90)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CARGOICON_OFFSET UNITYSDK_OFFSET(0xACC1C40)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMECANCOLLECTTOSTR_OFFSET UNITYSDK_OFFSET(0xACC1A10)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMECANCOLLECT_OFFSET UNITYSDK_OFFSET(0xACC18F0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMEPREDICT_OFFSET UNITYSDK_OFFSET(0xACC1620)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CURWORKAVATAR_OFFSET UNITYSDK_OFFSET(0xACC1830)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xACC1BF0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_INCOMEPERSECOND_OFFSET UNITYSDK_OFFSET(0xACC15E0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_ISOWNED_OFFSET UNITYSDK_OFFSET(0xACC1B60)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_LANDID_OFFSET UNITYSDK_OFFSET(0xACC15A0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_LANDTYPE_OFFSET UNITYSDK_OFFSET(0xACC1BA0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_LASTSETTLEINCOMETIME_OFFSET UNITYSDK_OFFSET(0xACC15C0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xACC1BC0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_PIC_OFFSET UNITYSDK_OFFSET(0xACC1C20)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xACC1B80)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0xACC05B0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_WAITCOLLECTINCOME_OFFSET UNITYSDK_OFFSET(0xACC1600)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_INCOMEPERSECOND_OFFSET UNITYSDK_OFFSET(0xACC15F0)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_ISOWNED_OFFSET UNITYSDK_OFFSET(0xACC1B70)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_LANDID_OFFSET UNITYSDK_OFFSET(0xACC15B0)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_LASTSETTLEINCOMETIME_OFFSET UNITYSDK_OFFSET(0xACC15D0)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_PRICE_OFFSET UNITYSDK_OFFSET(0xACC1B90)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_WAITCOLLECTINCOME_OFFSET UNITYSDK_OFFSET(0xACC1610)
#define RPG_CLIENT_PLANETFESLANDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xACC01B0)
#define RPG_CLIENT_PLANETFESLANDDATA_TRYCOLLECTINCOME_OFFSET UNITYSDK_OFFSET(0xACC0E50)
#define RPG_CLIENT_PLANETFESLANDDATA_TRYEQUIPAVATAR_OFFSET UNITYSDK_OFFSET(0xACC0A90)
#define RPG_CLIENT_PLANETFESLANDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xACC0130)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLandData_TypeDefinitionIndex = 61359;

	class PlanetFesLandData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesLandRow* _Row; // 0x10
		::System::Numerics::BigInteger _IncomePerSecond_k__BackingField; // 0x18
		::System::Numerics::BigInteger _Price_k__BackingField; // 0x28
		::System::Numerics::BigInteger _WaitCollectIncome_k__BackingField; // 0x38
		::System::Boolean _IsOwned_k__BackingField; // 0x48
		::System::UInt32 _LandID_k__BackingField; // 0x4C
		::System::Int64 _LastSettleIncomeTime_k__BackingField; // 0x50

		::System::Void _ctor(::System::UInt32 landID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA__CTOR_OFFSET))(this, landID);
		}

		::System::Void Sync(::Class_1_EB2ACEE93C9CA60D* land)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB2ACEE93C9CA60D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SYNC_OFFSET))(this, land);
		}

		::System::Boolean CanBuy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_CANBUY_OFFSET))(this);
		}

		::RPG::Client::PlanetFesUnlockData* GetNotFinishedUnlockData()
		{
			return ((::RPG::Client::PlanetFesUnlockData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GETNOTFINISHEDUNLOCKDATA_OFFSET))(this);
		}

		::System::Void BuyLand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_BUYLAND_OFFSET))(this);
		}

		::System::Void TryEquipAvatar(::RPG::Client::PlanetFesAvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_TRYEQUIPAVATAR_OFFSET))(this, avatarData);
		}

		::System::Void TryCollectIncome()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_TRYCOLLECTINCOME_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarEventData* GetActiveAvatarVisit()
		{
			return ((::RPG::Client::PlanetFesAvatarEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GETACTIVEAVATARVISIT_OFFSET))(this);
		}

		::RPG::Client::PlanetFesMiniGame* GetActiveGameData()
		{
			return ((::RPG::Client::PlanetFesMiniGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GETACTIVEGAMEDATA_OFFSET))(this);
		}

		::System::UInt32 get_LandID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_LANDID_OFFSET))(this);
		}

		::System::Void set_LandID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_LANDID_OFFSET))(this, value);
		}

		::System::Int64 get_LastSettleIncomeTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_LASTSETTLEINCOMETIME_OFFSET))(this);
		}

		::System::Void set_LastSettleIncomeTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_LASTSETTLEINCOMETIME_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_IncomePerSecond()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_INCOMEPERSECOND_OFFSET))(this);
		}

		::System::Void set_IncomePerSecond(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_INCOMEPERSECOND_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_WaitCollectIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_WAITCOLLECTINCOME_OFFSET))(this);
		}

		::System::Void set_WaitCollectIncome(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_WAITCOLLECTINCOME_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_CurIncomePredict()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMEPREDICT_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_CurIncomeCanCollect()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMECANCOLLECT_OFFSET))(this);
		}

		::System::String* get_CurIncomeCanCollectToStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMECANCOLLECTTOSTR_OFFSET))(this);
		}

		::System::Boolean get_CanCollectIncome()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CANCOLLECTINCOME_OFFSET))(this);
		}

		::System::Boolean get_IsOwned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_ISOWNED_OFFSET))(this);
		}

		::System::Void set_IsOwned(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_ISOWNED_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_Price()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_PRICE_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesAvatarData* get_CurWorkAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CURWORKAVATAR_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesLandType get_LandType()
		{
			return ((::RPG::GameCore::PlanetFesLandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_LANDTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_Pic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_PIC_OFFSET))(this);
		}

		::System::String* get_CargoIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CARGOICON_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_UnlockIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_UNLOCKIDLIST_OFFSET))(this);
		}
	};
}
