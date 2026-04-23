#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseLightConeRecommendGuideItem.h"
#include "unitysdk/RPG/Client/LightConeRecommendType.h"

namespace RPG::Client { class EquipmentItemData; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM_GET_CANACQUIRE_OFFSET UNITYSDK_OFFSET(0xA66B410)
#define RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM_GET_CANEQUIP_OFFSET UNITYSDK_OFFSET(0xA66B480)
#define RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA66B4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthRecommendItem_TypeDefinitionIndex = 60352;

	class LightConeGrowthRecommendItem : public ::RPG::Client::BaseLightConeRecommendGuideItem
	{
	public:
		::RPG::Client::EquipmentItemData* LightConeData; // 0x28
		::System::Func_1<::System::String*>* GetGuideDesc; // 0x30
		::System::String* MarkIconPath; // 0x38
		::System::UInt32 EquippedAvatarID; // 0x40
		::RPG::Client::LightConeRecommendType Type; // 0x44
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
