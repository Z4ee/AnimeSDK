#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGrowthGuideItem.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_AVATARGROWTHGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1813EC20)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowthGuideItem_TypeDefinitionIndex = 62621;

	class AvatarGrowthGuideItem : public ::RPG::Client::BaseGrowthGuideItem
	{
	public:
		::System::Func_1<::System::String*>* GetGuideDesc; // 0x20
		::System::String* ReportMarkString; // 0x28
		::System::Boolean IsAllDone; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDEITEM__CTOR_OFFSET))(this);
		}
	};
}
