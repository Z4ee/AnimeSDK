#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_636;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9FC1690)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x9FB59F0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x9FC19C0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9FC1A40)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC1A00)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x9FC19E0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ORIGINITEMCOUNTDICT_OFFSET UNITYSDK_OFFSET(0x9FC19A0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_THEMECURRENTFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC1A20)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_CARDID_OFFSET UNITYSDK_OFFSET(0x9FC19D0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC1A10)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x9FC19F0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ORIGINITEMCOUNTDICT_OFFSET UNITYSDK_OFFSET(0x9FC19B0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_THEMECURRENTFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC1A30)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__CHECKISFINISH_OFFSET UNITYSDK_OFFSET(0x9FC1830)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC1560)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__GETTHEMECURRENTFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC1570)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPieceGettingResult_TypeDefinitionIndex = 54162;

	class PlanetFesPieceGettingResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _originItemCountDict_k__BackingField; // 0x10
		::System::UInt32 _ItemID_k__BackingField; // 0x18
		::System::Int32 _ThemeCurrentFinishCount_k__BackingField; // 0x1C
		::System::UInt32 _ItemCount_k__BackingField; // 0x20
		::System::UInt32 _CardID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesPieceGettingResult* Create(::Class_1_FA4F4A67B1C04320_636* gachaItem, ::System::UInt32 cardID)
		{
			return ((::RPG::Client::PlanetFesPieceGettingResult*(*)(::Class_1_FA4F4A67B1C04320_636*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_CREATE_OFFSET))(gachaItem, cardID);
		}

		static ::RPG::Client::PlanetFesPieceGettingResult* Create_1(::System::UInt32 pieceID, ::System::UInt32 cardID, ::System::UInt32 count)
		{
			return ((::RPG::Client::PlanetFesPieceGettingResult*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_CREATE_1_OFFSET))(pieceID, cardID, count);
		}

		static ::System::Int32 _GetThemeCurrentFinishCount(::System::UInt32 cardID)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__GETTHEMECURRENTFINISHCOUNT_OFFSET))(cardID);
		}

		::System::Boolean _CheckIsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__CHECKISFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_originItemCountDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ORIGINITEMCOUNTDICT_OFFSET))(this);
		}

		::System::Void set_originItemCountDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ORIGINITEMCOUNTDICT_OFFSET))(this, value);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_CARDID_OFFSET))(this);
		}

		::System::Void set_CardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_CARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ITEMCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_ThemeCurrentFinishCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_THEMECURRENTFINISHCOUNT_OFFSET))(this);
		}

		::System::Void set_ThemeCurrentFinishCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_THEMECURRENTFINISHCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ISFINISH_OFFSET))(this);
		}
	};
}
