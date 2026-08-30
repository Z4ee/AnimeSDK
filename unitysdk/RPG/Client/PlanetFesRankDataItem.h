#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_FB0633E85BD6CF8E_10;
namespace System { class String; }

#define RPG_CLIENT_PLANETFESRANKDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C2C1ED0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_ACTIVITEDCARDNUM_OFFSET UNITYSDK_OFFSET(0x1C2C2550)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x1C2C2570)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_COINSTRING_OFFSET UNITYSDK_OFFSET(0x1C2C2590)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_COIN_OFFSET UNITYSDK_OFFSET(0x1C2C25B0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_FESLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2C2530)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1C2C2360)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_ISPSPLAYER_OFFSET UNITYSDK_OFFSET(0x1C2C2410)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_RANKNUM_OFFSET UNITYSDK_OFFSET(0x1C2C24F0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1C2C2510)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0x1C2C2120)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SETRANK_OFFSET UNITYSDK_OFFSET(0x1C2C20D0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_ACTIVITEDCARDNUM_OFFSET UNITYSDK_OFFSET(0x1C2C2560)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x1C2C2580)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_COINSTRING_OFFSET UNITYSDK_OFFSET(0x1C2C25A0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_COIN_OFFSET UNITYSDK_OFFSET(0x1C2C25C0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_FESLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2C2540)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_RANKNUM_OFFSET UNITYSDK_OFFSET(0x1C2C2500)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1C2C2520)
#define RPG_CLIENT_PLANETFESRANKDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C20C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesRankDataItem_TypeDefinitionIndex = 66672;

	class PlanetFesRankDataItem : public ::System::Object
	{
	public:
		::System::String* _CoinString_k__BackingField; // 0x10
		::System::Numerics::BigInteger _Coin_k__BackingField; // 0x18
		::System::UInt32 _BusinessDay_k__BackingField; // 0x28
		::System::Int32 _RankNum_k__BackingField; // 0x2C
		::System::UInt32 _UserID_k__BackingField; // 0x30
		::System::UInt32 _FesLevel_k__BackingField; // 0x34
		::System::UInt32 _ActivitedCardNum_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesRankDataItem* Create(::Class_1_FB0633E85BD6CF8E_10* a1)
		{
			return ((::RPG::Client::PlanetFesRankDataItem*(*)(::Class_1_FB0633E85BD6CF8E_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Void SetRank(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_SETRANK_OFFSET))(this, a1);
		}

		::System::Boolean IsItemValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_ISITEMVALID_OFFSET))(this);
		}

		::System::Int32 get_RankNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_GET_RANKNUM_OFFSET))(this);
		}

		::System::Void set_RankNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_SET_RANKNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_SET_USERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FesLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_GET_FESLEVEL_OFFSET))(this);
		}

		::System::Void set_FesLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_SET_FESLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivitedCardNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_GET_ACTIVITEDCARDNUM_OFFSET))(this);
		}

		::System::Void set_ActivitedCardNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_SET_ACTIVITEDCARDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_BusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_GET_BUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_BusinessDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_SET_BUSINESSDAY_OFFSET))(this, a1);
		}

		::System::String* get_CoinString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_GET_COINSTRING_OFFSET))(this);
		}

		::System::Void set_CoinString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_SET_COINSTRING_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_Coin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_GET_COIN_OFFSET))(this);
		}

		::System::Void set_Coin(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_SET_COIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsPSPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_GET_ISPSPLAYER_OFFSET))(this);
		}
	};
}
