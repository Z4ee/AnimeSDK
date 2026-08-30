#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/UniverseData_SubNavMapBuildMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class UniverseData_SameFloorSubNavMapBuildNode; }
namespace RPG::GameCore { class LevelFloorBakedSubmapInfo; }
namespace RPG::GameCore { class SubNavMapRow; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GETFIVEDIMENTRYID_OFFSET UNITYSDK_OFFSET(0x1826EC20)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GETSTANDARDENTRYID_OFFSET UNITYSDK_OFFSET(0x1826ED70)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_BUILDMODE_OFFSET UNITYSDK_OFFSET(0x1826F990)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_ORDEREDSAMEFLOORNODES_OFFSET UNITYSDK_OFFSET(0x1826F9B0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_OTHERFLOORCONFIGS_OFFSET UNITYSDK_OFFSET(0x1826F9A0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_ROOTSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0x1826F9C0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_ROOTSUBTAB_OFFSET UNITYSDK_OFFSET(0x1826F980)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_SHOULDREGISTERTOUNIVERSE_OFFSET UNITYSDK_OFFSET(0x1826EEE0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1826D830)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int UniverseData_SubNavMapBuildContext_TypeDefinitionIndex = 74509;

	class UniverseData_SubNavMapBuildContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SubNavMapRow*>* _OtherFloorConfigs_k__BackingField; // 0x10
		::RPG::Client::NavMap::SubTabData* _RootSubTab_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode*>* _OrderedSameFloorNodes_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>* _RootSubNavMaps_k__BackingField; // 0x28
		::RPG::Client::NavMap::UniverseData_SubNavMapBuildMode _BuildMode_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::NavMap::SubTabData* a1, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildMode a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::LevelFloorBakedSubmapInfo*>* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SubNavMapRow*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildMode, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::LevelFloorBakedSubmapInfo*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SubNavMapRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetStandardEntryID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GETSTANDARDENTRYID_OFFSET))(this, a1);
		}

		::System::UInt32 GetFiveDimEntryID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GETFIVEDIMENTRYID_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldRegisterToUniverse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_SHOULDREGISTERTOUNIVERSE_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* get_RootSubTab()
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_ROOTSUBTAB_OFFSET))(this);
		}

		::RPG::Client::NavMap::UniverseData_SubNavMapBuildMode get_BuildMode()
		{
			return ((::RPG::Client::NavMap::UniverseData_SubNavMapBuildMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_BUILDMODE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SubNavMapRow*>* get_OtherFloorConfigs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SubNavMapRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_OTHERFLOORCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode*>* get_OrderedSameFloorNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_ORDEREDSAMEFLOORNODES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>* get_RootSubNavMaps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SUBNAVMAPBUILDCONTEXT_GET_ROOTSUBNAVMAPS_OFFSET))(this);
		}
	};
}
