#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGrowthGuideItem.h"

namespace RPG::Client { class EquipmentItemData; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x194FC860)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthGuideItem_TypeDefinitionIndex = 65613;

	class LightConeGrowthGuideItem : public ::RPG::Client::BaseGrowthGuideItem
	{
	public:
		::System::Func_1<::System::String*>* GetGuideDesc; // 0x20
		::RPG::Client::EquipmentItemData* LightConeData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDEITEM__CTOR_OFFSET))(this);
		}
	};
}
