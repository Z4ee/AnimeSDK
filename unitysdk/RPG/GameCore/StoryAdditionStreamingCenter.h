#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STORYADDITIONSTREAMINGCENTER_METHOD_2_6E6C4476C8B986B6_OFFSET UNITYSDK_OFFSET(0x1D570A90)
#define RPG_GAMECORE_STORYADDITIONSTREAMINGCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D570BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryAdditionStreamingCenter_TypeDefinitionIndex = 20994;

	class StoryAdditionStreamingCenter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CenterName; // 0x10
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYADDITIONSTREAMINGCENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6E6C4476C8B986B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryAdditionStreamingCenter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryAdditionStreamingCenter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYADDITIONSTREAMINGCENTER_METHOD_2_6E6C4476C8B986B6_OFFSET))(a1, a2);
		}
	};
}
