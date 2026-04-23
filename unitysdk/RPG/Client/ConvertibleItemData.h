#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemMultiMaterialConfigRow; }

#define RPG_CLIENT_CONVERTIBLEITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA0D2FC0)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GETCOSTCOUNT_OFFSET UNITYSDK_OFFSET(0xA0D3130)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GETCOSTRARE_OFFSET UNITYSDK_OFFSET(0xA0D30A0)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GETMAXCONVERTCOUNT_OFFSET UNITYSDK_OFFSET(0xA0D3030)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA0D2ED0)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA0D2E90)
#define RPG_CLIENT_CONVERTIBLEITEMDATA_GET_ITEMSUBTYPE_OFFSET UNITYSDK_OFFSET(0xA0D2EB0)
#define RPG_CLIENT_CONVERTIBLEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D3020)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvertibleItemData_TypeDefinitionIndex = 60477;

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
