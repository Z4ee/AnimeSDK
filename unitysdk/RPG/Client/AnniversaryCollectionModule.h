#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class Anniversary3RDCollectionRedDotFilter; }
namespace RPG::Client { class AnniversaryCollectionGroupData; }
namespace RPG::Client { class AnniversaryCollectionLiveStreamStageData; }
namespace RPG::Client { class AnniversaryCollectionRedDotFilter; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC76E820)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GETALLLIVESTREAMSTAGELIST_OFFSET UNITYSDK_OFFSET(0xC76CB70)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GETANNIVERSARY3RDCOLLECTIONGROUPDATA_OFFSET UNITYSDK_OFFSET(0xC76DA20)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GETANNIVERSARYCOLLECTIONGROUPDATA_OFFSET UNITYSDK_OFFSET(0xC768C70)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GETLIVESTREAMGOTOID_OFFSET UNITYSDK_OFFSET(0xC76CCC0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_ANNIVERSARY3RDREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xC76F210)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_GROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xC76F230)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_REDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xC76F1F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC76E550)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_ISANNIVERSARYACTIVITYOPEN_OFFSET UNITYSDK_OFFSET(0xC76B910)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_ISSHOWLIVESTREAMENTEREDNEW_OFFSET UNITYSDK_OFFSET(0xC767690)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SETLIVESTREAMENTEREDNEWSEEN_OFFSET UNITYSDK_OFFSET(0xC76CE70)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_ANNIVERSARY3RDREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xC76F220)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_GROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xC76F240)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_REDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xC76F200)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC76E9F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC76E910)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC76F250)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITANNIVERSARYLIVESTREAMSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC76CED0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITANNIVERSARYPHASESCHEDULE_OFFSET UNITYSDK_OFFSET(0xC76DBD0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0xC76E5F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONACTIVITYENDED_OFFSET UNITYSDK_OFFSET(0xC76E4F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONACTIVITYOPENED_OFFSET UNITYSDK_OFFSET(0xC76E490)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0xC76F0D0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC76EAD0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__REMOVEALLSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC76DD70)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__TRYADDSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC76E050)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__UPDATEANNIVERSARYLIVESTREAMSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC76D190)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionModule_TypeDefinitionIndex = 62479;

	class AnniversaryCollectionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleTask*>* _WaitOpenTasks; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleTask*>* _WaitEndTask; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* LiveStreamGotoIDCache; // 0x20
		::RPG::Client::AnniversaryCollectionRedDotFilter* _RedDotFilter_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionLiveStreamStageData*>* _LiveStreamStageDataList; // 0x30
		::RPG::Client::Anniversary3RDCollectionRedDotFilter* _Anniversary3RDRedDotFilter_k__BackingField; // 0x38
		::RPG::Client::AnniversaryCollectionLiveStreamStageData* _LiveStreamFinalData; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionGroupData*>* _GroupDataList_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionLiveStreamStageData*>* GetAllLiveStreamStageList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionLiveStreamStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GETALLLIVESTREAMSTAGELIST_OFFSET))(this);
		}

		::System::UInt32 GetLiveStreamGotoID(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GETLIVESTREAMGOTOID_OFFSET))(this, a1);
		}

		::System::Boolean IsShowLiveStreamEnteredNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_ISSHOWLIVESTREAMENTEREDNEW_OFFSET))(this);
		}

		::System::Void SetLiveStreamEnteredNewSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SETLIVESTREAMENTEREDNEWSEEN_OFFSET))(this);
		}

		::System::Void _InitAnniversaryLiveStreamSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITANNIVERSARYLIVESTREAMSCHEDULE_OFFSET))(this);
		}

		::System::Void _UpdateAnniversaryLiveStreamSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__UPDATEANNIVERSARYLIVESTREAMSCHEDULE_OFFSET))(this);
		}

		::System::Void _InitAnniversaryPhaseSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITANNIVERSARYPHASESCHEDULE_OFFSET))(this);
		}

		::System::Void _TryAddSchedule(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__TRYADDSCHEDULE_OFFSET))(this, a1);
		}

		::System::Void _RemoveAllSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__REMOVEALLSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnActivityOpened(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONACTIVITYOPENED_OFFSET))(this, a1);
		}

		::System::Void _OnActivityEnded(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONACTIVITYENDED_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Boolean IsAnniversaryActivityOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_ISANNIVERSARYACTIVITYOPEN_OFFSET))(this);
		}

		::RPG::Client::AnniversaryCollectionGroupData* GetAnniversaryCollectionGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::AnniversaryCollectionGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GETANNIVERSARYCOLLECTIONGROUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::AnniversaryCollectionGroupData* GetAnniversary3RDCollectionGroupData()
		{
			return ((::RPG::Client::AnniversaryCollectionGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GETANNIVERSARY3RDCOLLECTIONGROUPDATA_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITDATA_OFFSET))(this);
		}

		::System::Void _OnSetRedPointStatusScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, a1);
		}

		::RPG::Client::AnniversaryCollectionRedDotFilter* get_RedDotFilter()
		{
			return ((::RPG::Client::AnniversaryCollectionRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_REDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_RedDotFilter(::RPG::Client::AnniversaryCollectionRedDotFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_REDDOTFILTER_OFFSET))(this, a1);
		}

		::RPG::Client::Anniversary3RDCollectionRedDotFilter* get_Anniversary3RDRedDotFilter()
		{
			return ((::RPG::Client::Anniversary3RDCollectionRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_ANNIVERSARY3RDREDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_Anniversary3RDRedDotFilter(::RPG::Client::Anniversary3RDCollectionRedDotFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Anniversary3RDCollectionRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_ANNIVERSARY3RDREDDOTFILTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionGroupData*>* get_GroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_GROUPDATALIST_OFFSET))(this);
		}

		::System::Void set_GroupDataList(::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionGroupData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_GROUPDATALIST_OFFSET))(this, a1);
		}
	};
}
