#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_83178EB088CAD885_6;
namespace RPG::Client { class RogueSiteData; }
namespace RPG::GameCore { class RogueRoomRow; }
namespace RPG::GameCore { class RogueRoomTypeRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEF1C30)
#define RPG_CLIENT_ROGUEMAPDATA_GETBRANCHTOTALNUM_OFFSET UNITYSDK_OFFSET(0xDEF28C0)
#define RPG_CLIENT_ROGUEMAPDATA_GETCURRENTROGUEROOMROW_OFFSET UNITYSDK_OFFSET(0xDEF2770)
#define RPG_CLIENT_ROGUEMAPDATA_GETCURRENTROGUEROOMTYPEROW_OFFSET UNITYSDK_OFFSET(0xDEF2630)
#define RPG_CLIENT_ROGUEMAPDATA_GETCURROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0xDEF2280)
#define RPG_CLIENT_ROGUEMAPDATA_GETPROGRESSNUM_OFFSET UNITYSDK_OFFSET(0xDEF27E0)
#define RPG_CLIENT_ROGUEMAPDATA_GETROGUESITEDATA_OFFSET UNITYSDK_OFFSET(0xDEF22F0)
#define RPG_CLIENT_ROGUEMAPDATA_GETSTARTROGUESITEDATA_OFFSET UNITYSDK_OFFSET(0xDEF23F0)
#define RPG_CLIENT_ROGUEMAPDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xDEF2B00)
#define RPG_CLIENT_ROGUEMAPDATA_GET_CURROOMID_OFFSET UNITYSDK_OFFSET(0xDEF2B60)
#define RPG_CLIENT_ROGUEMAPDATA_GET_CURSITEID_OFFSET UNITYSDK_OFFSET(0xDEF2B40)
#define RPG_CLIENT_ROGUEMAPDATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xDEF2B20)
#define RPG_CLIENT_ROGUEMAPDATA_GET_SITELIST_OFFSET UNITYSDK_OFFSET(0xDEF2B80)
#define RPG_CLIENT_ROGUEMAPDATA_ISNEXTPLAYSITE_OFFSET UNITYSDK_OFFSET(0xDEF2550)
#define RPG_CLIENT_ROGUEMAPDATA_REFRESHCURSITEID_OFFSET UNITYSDK_OFFSET(0xDEF2230)
#define RPG_CLIENT_ROGUEMAPDATA_REFRESHMAP_OFFSET UNITYSDK_OFFSET(0xDEF1CC0)
#define RPG_CLIENT_ROGUEMAPDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xDEF2B10)
#define RPG_CLIENT_ROGUEMAPDATA_SET_CURROOMID_OFFSET UNITYSDK_OFFSET(0xDEF2B70)
#define RPG_CLIENT_ROGUEMAPDATA_SET_CURSITEID_OFFSET UNITYSDK_OFFSET(0xDEF2B50)
#define RPG_CLIENT_ROGUEMAPDATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xDEF2B30)
#define RPG_CLIENT_ROGUEMAPDATA_SET_SITELIST_OFFSET UNITYSDK_OFFSET(0xDEF2B90)
#define RPG_CLIENT_ROGUEMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDEF2BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMapData_TypeDefinitionIndex = 67457;

	class RogueMapData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* _SiteList_k__BackingField; // 0x10
		::System::UInt32 _MapID_k__BackingField; // 0x18
		::System::UInt32 _AreaID_k__BackingField; // 0x1C
		::System::UInt32 _CurSiteID_k__BackingField; // 0x20
		::System::UInt32 _CurRoomID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshMap(::Class_1_83178EB088CAD885_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_83178EB088CAD885_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_REFRESHMAP_OFFSET))(this, a1);
		}

		::System::Void RefreshCurSiteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_REFRESHCURSITEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueSubMode GetCurRogueSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETCURROGUESUBMODE_OFFSET))(this);
		}

		::RPG::Client::RogueSiteData* GetRogueSiteData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueSiteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETROGUESITEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueSiteData* GetStartRogueSiteData()
		{
			return ((::RPG::Client::RogueSiteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETSTARTROGUESITEDATA_OFFSET))(this);
		}

		::System::Boolean IsNextPlaySite(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_ISNEXTPLAYSITE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueRoomTypeRow* GetCurrentRogueRoomTypeRow()
		{
			return ((::RPG::GameCore::RogueRoomTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETCURRENTROGUEROOMTYPEROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueRoomRow* GetCurrentRogueRoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETCURRENTROGUEROOMROW_OFFSET))(this);
		}

		::System::UInt32 GetProgressNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETPROGRESSNUM_OFFSET))(this);
		}

		::System::UInt32 GetBranchTotalNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETBRANCHTOTALNUM_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_MAPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSiteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_CURSITEID_OFFSET))(this);
		}

		::System::Void set_CurSiteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_CURSITEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_CURROOMID_OFFSET))(this);
		}

		::System::Void set_CurRoomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_CURROOMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* get_SiteList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_SITELIST_OFFSET))(this);
		}

		::System::Void set_SiteList(::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_SITELIST_OFFSET))(this, a1);
		}
	};
}
