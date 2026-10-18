#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PLANETFESCARDPIECEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDB8D5F0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0xDB8E1D0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_CARDIMGPATH_OFFSET UNITYSDK_OFFSET(0xDB8E180)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xDB8E130)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_EXTRALCOUNT_OFFSET UNITYSDK_OFFSET(0xDB8E090)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0xDB8E050)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xDB8E070)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_PIECEID_OFFSET UNITYSDK_OFFSET(0xDB8E030)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xDB8DFE0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xDB8E0E0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_IMGPATH_OFFSET UNITYSDK_OFFSET(0xDB8E060)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xDB8E080)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_PIECEID_OFFSET UNITYSDK_OFFSET(0xDB8E040)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB8D8B0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETBGPATH_OFFSET UNITYSDK_OFFSET(0xDB8DE40)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETCARDIMGPATH_OFFSET UNITYSDK_OFFSET(0xDB8DAE0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETEXTRALCOUNT_OFFSET UNITYSDK_OFFSET(0xDB8D8C0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETRARITY_OFFSET UNITYSDK_OFFSET(0xDB8DC10)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xDB8D9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesCardPieceData_TypeDefinitionIndex = 66567;

	class PlanetFesCardPieceData : public ::System::Object
	{
	public:
		::System::String* _ImgPath_k__BackingField; // 0x10
		::System::UInt32 _PieceID_k__BackingField; // 0x18
		::System::Int32 _Order_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesCardPieceData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlanetFesCardPieceData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 _GetExtralCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA__GETEXTRALCOUNT_OFFSET))(this);
		}

		::System::UInt32 _GetTotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA__GETTOTALCOUNT_OFFSET))(this);
		}

		::System::String* _GetCardImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA__GETCARDIMGPATH_OFFSET))(this);
		}

		::System::UInt32 _GetRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA__GETRARITY_OFFSET))(this);
		}

		::System::String* _GetBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA__GETBGPATH_OFFSET))(this);
		}

		::System::UInt32 get_PieceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_PIECEID_OFFSET))(this);
		}

		::System::Void set_PieceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_PIECEID_OFFSET))(this, a1);
		}

		::System::String* get_ImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_IMGPATH_OFFSET))(this);
		}

		::System::Void set_ImgPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_IMGPATH_OFFSET))(this, a1);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_ORDER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExtralCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_EXTRALCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_COUNT_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_RARITY_OFFSET))(this);
		}

		::System::String* get_CardImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_CARDIMGPATH_OFFSET))(this);
		}

		::System::String* get_BgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_BGPATH_OFFSET))(this);
		}
	};
}
