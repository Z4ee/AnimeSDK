#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS324_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8D4EB0)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS324_0__GETSHOWMAINMISSIONCOUNTBYCHAPTERID_B__0_OFFSET UNITYSDK_OFFSET(0xA8E5BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass324_0_TypeDefinitionIndex = 60919;

	class MissionModule___c__DisplayClass324_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS324_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShowMainMissionCountByChapterID_b__0(::RPG::Client::MainMissionData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS324_0__GETSHOWMAINMISSIONCOUNTBYCHAPTERID_B__0_OFFSET))(this, item);
		}
	};
}
