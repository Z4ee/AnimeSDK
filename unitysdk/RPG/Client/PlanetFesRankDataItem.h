#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_DCE302F7FD05DE84_3;
namespace System { class String; }

#define RPG_CLIENT_PLANETFESRANKDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC479FA0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_ACTIVITEDCARDNUM_OFFSET UNITYSDK_OFFSET(0xC47A620)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xC47A640)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_COINSTRING_OFFSET UNITYSDK_OFFSET(0xC47A660)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_COIN_OFFSET UNITYSDK_OFFSET(0xC47A680)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_FESLEVEL_OFFSET UNITYSDK_OFFSET(0xC47A600)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xC47A430)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_ISPSPLAYER_OFFSET UNITYSDK_OFFSET(0xC47A4E0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_RANKNUM_OFFSET UNITYSDK_OFFSET(0xC47A5C0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_GET_USERID_OFFSET UNITYSDK_OFFSET(0xC47A5E0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0xC47A1F0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SETRANK_OFFSET UNITYSDK_OFFSET(0xC47A1A0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_ACTIVITEDCARDNUM_OFFSET UNITYSDK_OFFSET(0xC47A630)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xC47A650)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_COINSTRING_OFFSET UNITYSDK_OFFSET(0xC47A670)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_COIN_OFFSET UNITYSDK_OFFSET(0xC47A690)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_FESLEVEL_OFFSET UNITYSDK_OFFSET(0xC47A610)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_RANKNUM_OFFSET UNITYSDK_OFFSET(0xC47A5D0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM_SET_USERID_OFFSET UNITYSDK_OFFSET(0xC47A5F0)
#define RPG_CLIENT_PLANETFESRANKDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC47A190)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesRankDataItem_TypeDefinitionIndex = 62321;

	class PlanetFesRankDataItem : public ::System::Object
	{
	public:
		::System::String* _CoinString_k__BackingField; // 0x10
		::System::Numerics::BigInteger _Coin_k__BackingField; // 0x18
		::System::UInt32 _FesLevel_k__BackingField; // 0x28
		::System::Int32 _RankNum_k__BackingField; // 0x2C
		::System::UInt32 _BusinessDay_k__BackingField; // 0x30
		::System::UInt32 _UserID_k__BackingField; // 0x34
		::System::UInt32 _ActivitedCardNum_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesRankDataItem* Create(::Class_1_DCE302F7FD05DE84_3* a1)
		{
			return ((::RPG::Client::PlanetFesRankDataItem*(*)(::Class_1_DCE302F7FD05DE84_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATAITEM_CREATE_OFFSET))(a1);
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
