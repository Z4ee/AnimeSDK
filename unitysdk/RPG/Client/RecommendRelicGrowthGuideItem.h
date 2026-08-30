#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGrowthGuideItem.h"

namespace RPG::Client { class RelicRecommendData; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_RECOMMENDRELICGROWTHGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDE143E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RecommendRelicGrowthGuideItem_TypeDefinitionIndex = 65619;

	class RecommendRelicGrowthGuideItem : public ::RPG::Client::BaseGrowthGuideItem
	{
	public:
		::System::Func_1<::System::String*>* GetRecommendDesc; // 0x20
		::RPG::Client::RelicRecommendData* RecommendData; // 0x28
		::System::UInt32 OuterSetID1; // 0x30
		::System::UInt32 InnerSetID; // 0x34
		::System::UInt32 OuterSetID2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDRELICGROWTHGUIDEITEM__CTOR_OFFSET))(this);
		}
	};
}
