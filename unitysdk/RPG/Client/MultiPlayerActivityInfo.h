#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::GameCore { class ActivityMultiplayerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_COLLECTREQUIREDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD8DD250)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xD8DD570)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_CARDFRAMEPATH_OFFSET UNITYSDK_OFFSET(0xD8DD610)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_CARDIMGPATH_OFFSET UNITYSDK_OFFSET(0xD8DD5C0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISINCURRENT_OFFSET UNITYSDK_OFFSET(0xD8DD890)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISINDISPLAY_OFFSET UNITYSDK_OFFSET(0xD8DD6B0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISPROMOTING_OFFSET UNITYSDK_OFFSET(0xD8DD730)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISTRANSFERAVAILABLE_OFFSET UNITYSDK_OFFSET(0xD8DD9F0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_PROGRAMGROUPID_OFFSET UNITYSDK_OFFSET(0xD8DD660)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__CURRENTSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD8DD910)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__DISPLAYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD8DD3E0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__PROMOTIONSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD8DD7B0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_REGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0xD8DD2C0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_UNREGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0xD8DD4C0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD8DD220)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPlayerActivityInfo_TypeDefinitionIndex = 61890;

	class MultiPlayerActivityInfo : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleTask* _WaitStartTask; // 0x10
		::RPG::GameCore::ActivityMultiplayerConfigRow* _Config; // 0x18
		::RPG::Client::ConditionChecker* _UnlockChecker; // 0x20

		::System::Void _ctor(::RPG::GameCore::ActivityMultiplayerConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityMultiplayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void CollectRequiredMissionData(::System::Collections::Generic::HashSet_1<::System::UInt32>*& a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_COLLECTREQUIREDMISSIONDATA_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterWaitForOpenSchedule(::System::Action_1<::RPG::Client::ScheduleData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_REGISTERWAITFOROPENSCHEDULE_OFFSET))(this, a1);
		}

		::System::Void UnregisterWaitForOpenSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_UNREGISTERWAITFOROPENSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::String* get_CardImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_CARDIMGPATH_OFFSET))(this);
		}

		::System::String* get_CardFramePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_CARDFRAMEPATH_OFFSET))(this);
		}

		::System::UInt32 get_ProgramGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_PROGRAMGROUPID_OFFSET))(this);
		}

		::System::Boolean get_IsInDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISINDISPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsPromoting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISPROMOTING_OFFSET))(this);
		}

		::System::Boolean get_IsInCurrent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISINCURRENT_OFFSET))(this);
		}

		::System::Boolean get_IsTransferAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISTRANSFERAVAILABLE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get__DisplayScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__DISPLAYSCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get__PromotionScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__PROMOTIONSCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get__CurrentScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__CURRENTSCHEDULEDATA_OFFSET))(this);
		}
	};
}
