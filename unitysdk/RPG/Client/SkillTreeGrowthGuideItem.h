#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGrowthGuideItem.h"

namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_SKILLTREEGROWTHGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A8B70)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeGrowthGuideItem_TypeDefinitionIndex = 65622;

	class SkillTreeGrowthGuideItem : public ::RPG::Client::BaseGrowthGuideItem
	{
	public:
		::RPG::GameCore::AvatarSkillTreeRow* PointData; // 0x20
		::System::Func_1<::System::String*>* GetGuideDesc; // 0x28
		::System::String* Name; // 0x30
		::System::Func_1<::System::String*>* GetPriorityDesc; // 0x38
		::System::String* Icon; // 0x40
		::System::Boolean IsRecommend; // 0x48
		::System::UInt32 CurrLevel; // 0x4C
		::System::UInt32 RecommendLevel; // 0x50
		::System::UInt32 Priority; // 0x54
		::System::UInt32 MaxLevel; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDEITEM__CTOR_OFFSET))(this);
		}
	};
}
