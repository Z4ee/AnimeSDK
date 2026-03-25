#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseLightConeRecommendGuideItem.h"
#include "unitysdk/RPG/Client/LightConeRecommendType.h"

namespace RPG::Client { class EquipmentItemData; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x997AEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthRecommendItem_TypeDefinitionIndex = 53225;

	class LightConeGrowthRecommendItem : public ::RPG::Client::BaseLightConeRecommendGuideItem
	{
	public:
		::RPG::Client::EquipmentItemData* LightConeData; // 0x28
		::System::String* MarkIconPath; // 0x30
		::System::Func_1<::System::String*>* GetGuideDesc; // 0x38
		::System::Boolean CanEquip; // 0x40
		::System::Boolean CanAcquire; // 0x41
		::System::UInt32 EquippedAvatarID; // 0x44
		::System::Single UsageRate; // 0x48
		::RPG::Client::LightConeRecommendType Type; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHRECOMMENDITEM__CTOR_OFFSET))(this);
		}
	};
}
