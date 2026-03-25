#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_STORY_BASESTORYMOVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABA1F20)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int BaseStoryMoveData_TypeDefinitionIndex = 39480;

	class BaseStoryMoveData : public ::System::Object
	{
	public:
		::System::Single UnitTime; // 0x10
		::System::Single UnitDist; // 0x14
		::System::Single AvgDeltaTime; // 0x18
		::System::Single MaxStopDist; // 0x1C
		::System::Single MinStopDist; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_BASESTORYMOVEDATA__CTOR_OFFSET))(this);
		}
	};
}
