#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGamePreviewCar; }
namespace RPG::Client::RoadRash { class MonoRoadRashGamePreview_PreviewCar; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_CLASS_1_840480C78D39CB70__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC63140)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGamePreview_Class_1_840480C78D39CB70_TypeDefinitionIndex = 75442;

	class MonoRoadRashGamePreview_Class_1_840480C78D39CB70 : public ::System::Object
	{
	public:
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* NDJINIMPHFH; // 0x10
		::RPG::Client::RoadRash::MonoRoadRashGamePreview_PreviewCar* EABKOHGCHFP; // 0x18
		::RPG::Client::RoadRash::MonoRoadRashGamePreviewCar* FMJPMFEDIJL; // 0x20
		::System::Single BJOCBPFKJDP; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_CLASS_1_840480C78D39CB70__CTOR_OFFSET))(this);
		}
	};
}
