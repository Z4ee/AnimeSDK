#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemMultiMaterialConfigRow; }

#define RPG_CLIENT_CONVERTIBLEITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9425220)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GETCOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x9425390)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GETCOSTRARE_OFFSET UNITYSDK_OFFSET(0x9425300)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GETMAXCONVERTCOUNT_OFFSET UNITYSDK_OFFSET(0x9425290)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9425130)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x94250F0)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GET_ITEMSUBTYPE_OFFSET UNITYSDK_OFFSET(0x9425110)
#define RPG_CLIENT_CONVERTIBLEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9425280)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvertibleItemData_TypeDefinitionIndex = 53344;

	class ConvertibleItemData : public ::System::Object
	{
	public:
		::RPG::GameCore::ItemMultiMaterialConfigRow* _Meta; // 0x10

		::System::Void _ctor(::RPG::GameCore::ItemMultiMaterialConfigRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemMultiMaterialConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVERTIBLEITEMDATA__CTOR_OFFSET))(this, meta);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVERTIBLEITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::RPG::GameCore::ItemSubType get_ItemSubType()
		{
			return ((::RPG::GameCore::ItemSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVERTIBLEITEMDATA_GET_ITEMSUBTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVERTIBLEITEMDATA_GET_COUNT_OFFSET))(this);
		}

		static ::RPG::Client::ConvertibleItemData* Create(::RPG::GameCore::ItemMultiMaterialConfigRow* meta)
		{
			return ((::RPG::Client::ConvertibleItemData*(*)(::RPG::GameCore::ItemMultiMaterialConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVERTIBLEITEMDATA_CREATE_OFFSET))(meta);
		}

		::System::UInt32 GetMaxConvertCount(::System::UInt32 rarity)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVERTIBLEITEMDATA_GETMAXCONVERTCOUNT_OFFSET))(this, rarity);
		}

		::System::UInt32 GetCostCount(::System::UInt32 rarity, ::System::UInt32 targetCount)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVERTIBLEITEMDATA_GETCOSTCOUNT_OFFSET))(this, rarity, targetCount);
		}

		::System::UInt32 GetCostRare(::System::UInt32 rarity)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVERTIBLEITEMDATA_GETCOSTRARE_OFFSET))(this, rarity);
		}
	};
}
