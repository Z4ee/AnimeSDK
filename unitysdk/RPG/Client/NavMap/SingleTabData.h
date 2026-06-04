#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::GameCore { class NavMapTabRow; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINSPACETYPE_OFFSET UNITYSDK_OFFSET(0xC27D710)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0xC27D5A0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC27D460)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET UNITYSDK_OFFSET(0xC27D4E0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETREGIONALMAPNODEID_OFFSET UNITYSDK_OFFSET(0xC27D770)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYFLOORID_OFFSET UNITYSDK_OFFSET(0xC27D530)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYINDEX_OFFSET UNITYSDK_OFFSET(0xC27D6A0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0xC27D7C0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC27DC20)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC27D6F0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISCOMPOSEDTAB_OFFSET UNITYSDK_OFFSET(0xC27DAC0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xC27E040)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xC27DD40)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC27DD20)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MAPSPACETYPE_OFFSET UNITYSDK_OFFSET(0xC27DAF0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MENUICONPATH_OFFSET UNITYSDK_OFFSET(0xC27DC70)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC27DB10)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SHOWSUBTABCOUNT_OFFSET UNITYSDK_OFFSET(0xC27D5F0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xC27DC50)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC27DD00)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_WORLD_OFFSET UNITYSDK_OFFSET(0xC27DAD0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_INDEXOF_OFFSET UNITYSDK_OFFSET(0xC27D620)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_SET_WORLD_OFFSET UNITYSDK_OFFSET(0xC27DAE0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC27D4D0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SingleTabData_TypeDefinitionIndex = 69677;

	class SingleTabData : public ::System::Object
	{
	public:
		::RPG::GameCore::NavMapTabRow* _Row; // 0x10
		::RPG::Client::NavMap::SubTabData* SubTabData; // 0x18
		::RPG::Client::NavMap::WorldData* _World_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::SingleTabData* Create(::RPG::Client::NavMap::WorldData* a1, ::RPG::GameCore::NavMapTabRow* a2)
		{
			return ((::RPG::Client::NavMap::SingleTabData*(*)(::RPG::Client::NavMap::WorldData*, ::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::NavMap::SubTabData* GetDefaultSubTabAndLayer(::System::Int32& a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByFloorID(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYFLOORID_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINS_OFFSET))(this, a1);
		}

		::System::Int32 get_ShowSubTabCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SHOWSUBTABCOUNT_OFFSET))(this);
		}

		::System::Int32 IndexOf(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_INDEXOF_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ID_OFFSET))(this);
		}

		::System::Boolean ContainSpaceType(::RPG::GameCore::MapSpaceType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MapSpaceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINSPACETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 GetRegionalMapNodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETREGIONALMAPNODEID_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* GetTrackingSubMissionForShow()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsComposedTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISCOMPOSEDTAB_OFFSET))(this);
		}

		::RPG::Client::NavMap::WorldData* get_World()
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_WORLD_OFFSET))(this);
		}

		::System::Void set_World(::RPG::Client::NavMap::WorldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_SET_WORLD_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapSpaceType get_MapSpaceType()
		{
			return ((::RPG::GameCore::MapSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MAPSPACETYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SORTID_OFFSET))(this);
		}

		::System::String* get_MenuIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MENUICONPATH_OFFSET))(this);
		}

		::System::Boolean get_Unlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_UNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}
	};
}
