#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PLANETFESCARDPIECEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F914F0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x9F91EC0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_CARDIMGPATH_OFFSET UNITYSDK_OFFSET(0x9F91EB0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9F91EA0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_EXTRALCOUNT_OFFSET UNITYSDK_OFFSET(0x9F91E80)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x9F91E40)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x9F91E60)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_PIECEID_OFFSET UNITYSDK_OFFSET(0x9F91E20)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x9F91E10)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9F91E90)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x9F91E50)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x9F91E70)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_PIECEID_OFFSET UNITYSDK_OFFSET(0x9F91E30)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F91750)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETBGPATH_OFFSET UNITYSDK_OFFSET(0x9F91CA0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETCARDIMGPATH_OFFSET UNITYSDK_OFFSET(0x9F91980)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETEXTRALCOUNT_OFFSET UNITYSDK_OFFSET(0x9F91760)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETRARITY_OFFSET UNITYSDK_OFFSET(0x9F91AC0)
#define RPG_CLIENT_PLANETFESCARDPIECEDATA__GETTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9F91870)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesCardPieceData_TypeDefinitionIndex = 54161;

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

		static ::RPG::Client::PlanetFesCardPieceData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::PlanetFesCardPieceData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_CREATE_OFFSET))(ID);
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

		::System::Void set_PieceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_PIECEID_OFFSET))(this, value);
		}

		::System::String* get_ImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_IMGPATH_OFFSET))(this);
		}

		::System::Void set_ImgPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_IMGPATH_OFFSET))(this, value);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDPIECEDATA_SET_ORDER_OFFSET))(this, value);
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
