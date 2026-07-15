#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_806;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1A1CAC80)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x1A1BDCF0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1A1CB000)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1A1CB080)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1CB040)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A1CB020)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ORIGINITEMCOUNTDICT_OFFSET UNITYSDK_OFFSET(0x1A1CAFE0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_THEMECURRENTFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1CB060)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_CARDID_OFFSET UNITYSDK_OFFSET(0x1A1CB010)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1CB050)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A1CB030)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ORIGINITEMCOUNTDICT_OFFSET UNITYSDK_OFFSET(0x1A1CAFF0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_THEMECURRENTFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1CB070)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__CHECKISFINISH_OFFSET UNITYSDK_OFFSET(0x1A1CAEA0)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CAA80)
#define RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__GETTHEMECURRENTFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1CAA90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPieceGettingResult_TypeDefinitionIndex = 63615;

	class PlanetFesPieceGettingResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _originItemCountDict_k__BackingField; // 0x10
		::System::UInt32 _CardID_k__BackingField; // 0x18
		::System::UInt32 _ItemID_k__BackingField; // 0x1C
		::System::Int32 _ThemeCurrentFinishCount_k__BackingField; // 0x20
		::System::UInt32 _ItemCount_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesPieceGettingResult* Create(::Class_1_D17272E82AE804C2_806* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PlanetFesPieceGettingResult*(*)(::Class_1_D17272E82AE804C2_806*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PlanetFesPieceGettingResult* Create_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::PlanetFesPieceGettingResult*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_CREATE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 _GetThemeCurrentFinishCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__GETTHEMECURRENTFINISHCOUNT_OFFSET))(a1);
		}

		::System::Boolean _CheckIsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT__CHECKISFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_originItemCountDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ORIGINITEMCOUNTDICT_OFFSET))(this);
		}

		::System::Void set_originItemCountDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ORIGINITEMCOUNTDICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_CARDID_OFFSET))(this);
		}

		::System::Void set_CardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_CARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_ITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ThemeCurrentFinishCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_THEMECURRENTFINISHCOUNT_OFFSET))(this);
		}

		::System::Void set_ThemeCurrentFinishCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_SET_THEMECURRENTFINISHCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPIECEGETTINGRESULT_GET_ISFINISH_OFFSET))(this);
		}
	};
}
