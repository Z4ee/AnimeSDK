#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS323_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDC830)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS323_0__GETSHOWMAINMISSIONCOUNTBYCHAPTERID_B__0_OFFSET UNITYSDK_OFFSET(0x9BEB830)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass323_0_TypeDefinitionIndex = 53775;

	class MissionModule___c__DisplayClass323_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS323_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShowMainMissionCountByChapterID_b__0(::RPG::Client::MainMissionData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS323_0__GETSHOWMAINMISSIONCOUNTBYCHAPTERID_B__0_OFFSET))(this, item);
		}
	};
}
