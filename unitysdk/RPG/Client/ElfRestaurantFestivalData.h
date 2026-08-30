#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantFestivalRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A145620)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_CUSTOMERUPNUMBER_OFFSET UNITYSDK_OFFSET(0x1A145920)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x1A1459C0)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_EFFECTDISPLAY_OFFSET UNITYSDK_OFFSET(0x1A145FD0)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_FOFIGURE_OFFSET UNITYSDK_OFFSET(0x1A145D60)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_FONAME_OFFSET UNITYSDK_OFFSET(0x1A145E50)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A1456C0)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_ISSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1A145CC0)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0x1A1457E0)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A145A80)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_PRICEINCREASE_OFFSET UNITYSDK_OFFSET(0x1A145880)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x1A145740)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1A145C00)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_TOAST_OFFSET UNITYSDK_OFFSET(0x1A145B40)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1A1456E0)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A1456D0)
#define RPG_CLIENT_ELFRESTAURANTFESTIVALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1456B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantFestivalData_TypeDefinitionIndex = 63784;

	class ElfRestaurantFestivalData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantFestivalData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantFestivalData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantFestivalRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantFestivalRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET__ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TagList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_TAGLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MaterialList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_MATERIALLIST_OFFSET))(this);
		}

		::System::Single get_PriceIncrease()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_PRICEINCREASE_OFFSET))(this);
		}

		::System::UInt32 get_CustomerUpNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_CUSTOMERUPNUMBER_OFFSET))(this);
		}

		::RPG::Client::TextID get_Detail()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_DETAIL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Toast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_TOAST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Boolean get_IsShowToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_ISSHOWTOAST_OFFSET))(this);
		}

		::System::String* get_FOFigure()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_FOFIGURE_OFFSET))(this);
		}

		::RPG::Client::TextID get_FOName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_FONAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_EffectDisplay()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTFESTIVALDATA_GET_EFFECTDISPLAY_OFFSET))(this);
		}
	};
}
