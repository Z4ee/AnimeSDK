#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class FantasticStoryChapterRow; }
namespace System { class String; }

#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x965CAD0)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9667820)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0x9667850)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9667500)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_ISSTART_OFFSET UNITYSDK_OFFSET(0x96676A0)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x965C9F0)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_MAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x96675B0)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x9663680)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x96677F0)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_PRECHAPTERDATA_OFFSET UNITYSDK_OFFSET(0x9667730)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_PRECHAPTERID_OFFSET UNITYSDK_OFFSET(0x9667870)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x965D0E0)
#define RPG_CLIENT_FANTASTICSTORYCHAPTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9663E00)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryChapterData_TypeDefinitionIndex = 51895;

	class FantasticStoryChapterData : public ::System::Object
	{
	public:
		::RPG::GameCore::FantasticStoryChapterRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA__CTOR_OFFSET))(this, ID);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_ISSTART_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_MainMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_MAINMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_MAINMISSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_FIGUREPATH_OFFSET))(this);
		}

		::System::UInt32 get_PreChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_PRECHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_CHAPTERID_OFFSET))(this);
		}

		::RPG::Client::FantasticStoryChapterData* get_PreChapterData()
		{
			return ((::RPG::Client::FantasticStoryChapterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYCHAPTERDATA_GET_PRECHAPTERDATA_OFFSET))(this);
		}
	};
}
