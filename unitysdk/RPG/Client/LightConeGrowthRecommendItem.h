#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseLightConeRecommendGuideItem.h"
#include "unitysdk/RPG/Client/LightConeRecommendType.h"

namespace RPG::Client { class EquipmentItemData; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM_GET_CANACQUIRE_OFFSET UNITYSDK_OFFSET(0xD395940)
#define RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM_GET_CANEQUIP_OFFSET UNITYSDK_OFFSET(0xD3959B0)
#define RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD395A20)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthRecommendItem_TypeDefinitionIndex = 65554;

	class LightConeGrowthRecommendItem : public ::RPG::Client::BaseLightConeRecommendGuideItem
	{
	public:
		::System::String* MarkIconPath; // 0x28
		::RPG::Client::EquipmentItemData* LightConeData; // 0x30
		::System::Func_1<::System::String*>* GetGuideDesc; // 0x38
		::RPG::Client::LightConeRecommendType Type; // 0x40
		::System::UInt32 EquippedAvatarID; // 0x44
		::System::Single UsageRate; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanAcquire()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM_GET_CANACQUIRE_OFFSET))(this);
		}

		::System::Boolean get_CanEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM_GET_CANEQUIP_OFFSET))(this);
		}
	};
}
