#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantProductConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFFARMPRODUCTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA22E400)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA233AF0)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA233780)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISCROPS_OFFSET UNITYSDK_OFFSET(0xA233820)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISCURRENTTARGETRELATED_OFFSET UNITYSDK_OFFSET(0xA233CF0)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA233C50)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMFIGURE_OFFSET UNITYSDK_OFFSET(0xA2339C0)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMICON_OFFSET UNITYSDK_OFFSET(0xA233890)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA22F020)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA2337A0)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA233720)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_ISUNLOCKINSPECIFICPROGRESS_OFFSET UNITYSDK_OFFSET(0xA230A40)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA233790)
#define RPG_CLIENT_ELFFARMPRODUCTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA233710)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmProductData_TypeDefinitionIndex = 58678;

	class ElfFarmProductData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmProductData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_CREATE_OFFSET))(ID);
		}

		::System::Boolean IsUnlockInSpecificProgress(::System::UInt32 progressID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_ISUNLOCKINSPECIFICPROGRESS_OFFSET))(this, progressID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::RestaurantProductConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantProductConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsCrops()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISCROPS_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::String* get_ItemIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMICON_OFFSET))(this);
		}

		::System::String* get_ItemFigure()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMFIGURE_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentTargetRelated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISCURRENTTARGETRELATED_OFFSET))(this);
		}
	};
}
