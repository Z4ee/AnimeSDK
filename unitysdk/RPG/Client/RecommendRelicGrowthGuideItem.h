#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGrowthGuideItem.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_RECOMMENDRELICGROWTHGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC6C9050)

namespace RPG::Client
{
	inline static constexpr unsigned int RecommendRelicGrowthGuideItem_TypeDefinitionIndex = 61292;

	class RecommendRelicGrowthGuideItem : public ::RPG::Client::BaseGrowthGuideItem
	{
	public:
		::System::Func_1<::System::String*>* GetRecommendDesc; // 0x20
		::System::UInt32 OuterSetID1; // 0x28
		::System::UInt32 InnerSetID; // 0x2C
		::System::UInt32 OuterSetID2; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDRELICGROWTHGUIDEITEM__CTOR_OFFSET))(this);
		}
	};
}
