#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGamePreviewCar; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_PREVIEWCAR__CTOR_OFFSET UNITYSDK_OFFSET(0xDE8E9E0)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGamePreview_PreviewCar_TypeDefinitionIndex = 75442;

	class MonoRoadRashGamePreview_PreviewCar : public ::System::Object
	{
	public:
		::RPG::Client::RoadRash::MonoRoadRashGamePreviewCar* Prefab; // 0x10
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* StartRoad; // 0x18
		::System::Single StartDistance; // 0x20
		::System::Single StartOffset; // 0x24
		::System::Single Speed; // 0x28
		::System::Single LookAheadDistance; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_PREVIEWCAR__CTOR_OFFSET))(this);
		}
	};
}
