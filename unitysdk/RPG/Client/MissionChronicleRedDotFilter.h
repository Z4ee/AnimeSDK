#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA8BB9F0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8BB980)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_CANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xA8BC4A0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_ISENTRYNEW_OFFSET UNITYSDK_OFFSET(0xA8BC480)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_MISSIONCHRONICLENEWPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xA8BC460)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA8B72C0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_CANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xA8BC4B0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_ISENTRYNEW_OFFSET UNITYSDK_OFFSET(0xA8BC490)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_MISSIONCHRONICLENEWPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xA8BC470)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA8B7220)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__FIRSTREFRESH_OFFSET UNITYSDK_OFFSET(0xA8BB940)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONMISSIONCHRONICLEENTRYSHOW_OFFSET UNITYSDK_OFFSET(0xA8BC390)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONREFRESHNEWFILTER_OFFSET UNITYSDK_OFFSET(0xA8BBD80)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONSERVERPREFREFRESH_OFFSET UNITYSDK_OFFSET(0xA8BBC00)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__REFRESHENTRYNEW_OFFSET UNITYSDK_OFFSET(0xA8BBCE0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__REFRESHMISSIONCHRONICLENEWPATHIDLISTREDDOT_OFFSET UNITYSDK_OFFSET(0xA8BBE60)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__SEARCHMAINPATH_OFFSET UNITYSDK_OFFSET(0xA8BBFD0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__SEARCHSUBPATH_OFFSET UNITYSDK_OFFSET(0xA8BC190)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA8BC5C0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8BC540)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA8BC4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleRedDotFilter_TypeDefinitionIndex = 61554;

	class MissionChronicleRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeMissionPathIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _MissionChronicleNewPathIDList_k__BackingField; // 0x18
		::System::Boolean _IsEntryNew_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _FirstRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__FIRSTREFRESH_OFFSET))(this);
		}

		::System::Void _OnServerPrefRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONSERVERPREFREFRESH_OFFSET))(this, arg);
		}

		::System::Void _RefreshEntryNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__REFRESHENTRYNEW_OFFSET))(this);
		}

		::System::Void _OnRefreshNewFilter(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONREFRESHNEWFILTER_OFFSET))(this, arg);
		}

		::System::Void _RefreshMissionChronicleNewPathIDListRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__REFRESHMISSIONCHRONICLENEWPATHIDLISTREDDOT_OFFSET))(this);
		}

		::System::Void _SearchMainPath(::RPG::Client::MissionChronicleMainPathData* mainPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__SEARCHMAINPATH_OFFSET))(this, mainPathData);
		}

		::System::Void _SearchSubPath(::RPG::Client::MissionChronicleSubPathData* subPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__SEARCHSUBPATH_OFFSET))(this, subPathData);
		}

		::System::Void _OnMissionChronicleEntryShow(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONMISSIONCHRONICLEENTRYSHOW_OFFSET))(this, arg);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MissionChronicleNewPathIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_MISSIONCHRONICLENEWPATHIDLIST_OFFSET))(this);
		}

		::System::Void set_MissionChronicleNewPathIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_MISSIONCHRONICLENEWPATHIDLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsEntryNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_ISENTRYNEW_OFFSET))(this);
		}

		::System::Void set_IsEntryNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_ISENTRYNEW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CanTakeMissionPathIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_CANTAKEMISSIONPATHIDLIST_OFFSET))(this);
		}

		::System::Void set_CanTakeMissionPathIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_CANTAKEMISSIONPATHIDLIST_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
