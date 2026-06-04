#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC006490)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC006420)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_CANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xC007060)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_ISENTRYNEW_OFFSET UNITYSDK_OFFSET(0xC007040)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_MISSIONCHRONICLENEWPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xC007020)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xC001FF0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_CANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xC007070)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_ISENTRYNEW_OFFSET UNITYSDK_OFFSET(0xC007050)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_MISSIONCHRONICLENEWPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xC007030)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC001F50)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__FIRSTREFRESH_OFFSET UNITYSDK_OFFSET(0xC0063E0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONMISSIONCHRONICLEENTRYSHOW_OFFSET UNITYSDK_OFFSET(0xC006F50)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONREFRESHNEWFILTER_OFFSET UNITYSDK_OFFSET(0xC006870)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONSERVERPREFREFRESH_OFFSET UNITYSDK_OFFSET(0xC0066F0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__REFRESHENTRYNEW_OFFSET UNITYSDK_OFFSET(0xC0067D0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__REFRESHMISSIONCHRONICLENEWPATHIDLISTREDDOT_OFFSET UNITYSDK_OFFSET(0xC006950)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__SEARCHMAINPATH_OFFSET UNITYSDK_OFFSET(0xC006A70)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__SEARCHSUBPATH_OFFSET UNITYSDK_OFFSET(0xC006CA0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC007160)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0070F0)
#define RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC007080)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleRedDotFilter_TypeDefinitionIndex = 62487;

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

		::System::Void _OnServerPrefRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONSERVERPREFREFRESH_OFFSET))(this, a1);
		}

		::System::Void _RefreshEntryNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__REFRESHENTRYNEW_OFFSET))(this);
		}

		::System::Void _OnRefreshNewFilter(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONREFRESHNEWFILTER_OFFSET))(this, a1);
		}

		::System::Void _RefreshMissionChronicleNewPathIDListRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__REFRESHMISSIONCHRONICLENEWPATHIDLISTREDDOT_OFFSET))(this);
		}

		::System::Void _SearchMainPath(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__SEARCHMAINPATH_OFFSET))(this, a1);
		}

		::System::Void _SearchSubPath(::RPG::Client::MissionChronicleSubPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__SEARCHSUBPATH_OFFSET))(this, a1);
		}

		::System::Void _OnMissionChronicleEntryShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER__ONMISSIONCHRONICLEENTRYSHOW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MissionChronicleNewPathIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_MISSIONCHRONICLENEWPATHIDLIST_OFFSET))(this);
		}

		::System::Void set_MissionChronicleNewPathIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_MISSIONCHRONICLENEWPATHIDLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEntryNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_ISENTRYNEW_OFFSET))(this);
		}

		::System::Void set_IsEntryNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_ISENTRYNEW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CanTakeMissionPathIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_GET_CANTAKEMISSIONPATHIDLIST_OFFSET))(this);
		}

		::System::Void set_CanTakeMissionPathIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEREDDOTFILTER_SET_CANTAKEMISSIONPATHIDLIST_OFFSET))(this, a1);
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
