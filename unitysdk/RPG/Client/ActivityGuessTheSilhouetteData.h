#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityGuessTheSilhouetteDataStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityGuessSilhouetteRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD47110)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AD47760)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1AD47C30)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AD47850)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AD47B10)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AD47A90)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ISDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1AD47D40)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1AD47CB0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ISSHOWEVENTUI_OFFSET UNITYSDK_OFFSET(0x1AD47E20)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_KEYICONPATH_OFFSET UNITYSDK_OFFSET(0x1AD47F50)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1AD47490)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AD47720)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_SILHOUETTEICONPATH_OFFSET UNITYSDK_OFFSET(0x1AD47ED0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1AD47D80)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1AD47B50)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AD47580)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_SETISDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1AD47530)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1AD47CF0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_SET_ISSHOWEVENTUI_OFFSET UNITYSDK_OFFSET(0x1AD47E80)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_UPDATECOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1AD47350)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AD474D0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD47340)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA__ISSTART_OFFSET UNITYSDK_OFFSET(0x1AD47940)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityGuessTheSilhouetteData_TypeDefinitionIndex = 61611;

	class ActivityGuessTheSilhouetteData : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleData* _ScheduleData; // 0x10
		::RPG::GameCore::ActivityGuessSilhouetteRow* _Row; // 0x18
		::System::Boolean _IsDisplayData; // 0x20
		::System::Boolean _IsShowEventUI; // 0x21
		::System::Boolean _IsNew; // 0x22
		::System::Boolean _IsComplete; // 0x23
		::System::UInt32 _EndTimeStamp; // 0x24
		::System::UInt32 _ID; // 0x28
		::System::UInt32 _BeginTimeStamp; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityGuessTheSilhouetteData* Create(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteData*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void UpdateCompleteStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_UPDATECOMPLETESTATUS_OFFSET))(this, a1);
		}

		::System::Void UpdateTimeStamp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_UPDATETIMESTAMP_OFFSET))(this, a1, a2);
		}

		::System::Void SetIsDisplayData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_SETISDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean _IsStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA__ISSTART_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ActivityGuessSilhouetteRow* get_Row()
		{
			return ((::RPG::GameCore::ActivityGuessSilhouetteRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_TITLE_OFFSET))(this);
		}

		::System::UInt32 get_Day()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_DAY_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplayData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ISDISPLAYDATA_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::ActivityGuessTheSilhouetteDataStatus get_Status()
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteDataStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean get_IsShowEventUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_ISSHOWEVENTUI_OFFSET))(this);
		}

		::System::Void set_IsShowEventUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_SET_ISSHOWEVENTUI_OFFSET))(this, a1);
		}

		::System::String* get_SilhouetteIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_SILHOUETTEICONPATH_OFFSET))(this);
		}

		::System::String* get_KeyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEDATA_GET_KEYICONPATH_OFFSET))(this);
		}
	};
}
