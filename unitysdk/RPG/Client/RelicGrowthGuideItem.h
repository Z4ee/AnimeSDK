#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGrowthGuideItem.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"

namespace RPG::Client { class RelicItemData; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICGROWTHGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A1BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicGrowthGuideItem_TypeDefinitionIndex = 53229;

	class RelicGrowthGuideItem : public ::RPG::Client::BaseGrowthGuideItem
	{
	public:
		::System::Func_1<::System::String*>* GetGuideDesc; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* RelicItems; // 0x28
		::RPG::Client::RelicSmartSuit::RankType RankType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDEITEM__CTOR_OFFSET))(this);
		}
	};
}
