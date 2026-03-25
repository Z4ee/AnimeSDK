#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class SectionData; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace RPG::GameCore { class LevelMinimapVolume; }
namespace RPG::GameCore { class LevelNavmapArea; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_AREADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9DF19D0)
#define RPG_CLIENT_NAVMAP_AREADATA_GETLIGHTENMAPFOGSECTIONLIST_OFFSET UNITYSDK_OFFSET(0x9DF1C30)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x9DF1EF0)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0x9DF1F50)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DF1ED0)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_ISSHOWSUBMAPLINKICON_OFFSET UNITYSDK_OFFSET(0x9DF1EC0)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_MAPLAYERLIST_OFFSET UNITYSDK_OFFSET(0x9DF1F60)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_MINIMAPVOLUME_OFFSET UNITYSDK_OFFSET(0x9DF1C10)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_POSITIONINCANVAS_OFFSET UNITYSDK_OFFSET(0x9DF1F80)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_REGIONIDLIST_OFFSET UNITYSDK_OFFSET(0x9DF1F30)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_SCALEINCANVAS_OFFSET UNITYSDK_OFFSET(0x9DF1FA0)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_SORTINGID_OFFSET UNITYSDK_OFFSET(0x9DF1F10)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_SUBMAPUIDEFAULTCENTER_OFFSET UNITYSDK_OFFSET(0x9DF1FC0)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_SUBMAPUISCALELOWERRATIO_OFFSET UNITYSDK_OFFSET(0x9DF1FE0)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_SUBMAPUISCALEUPPERRATIO_OFFSET UNITYSDK_OFFSET(0x9DF2000)
#define RPG_CLIENT_NAVMAP_AREADATA_GET_SUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0x9DF2020)
#define RPG_CLIENT_NAVMAP_AREADATA_SET_POSITIONINCANVAS_OFFSET UNITYSDK_OFFSET(0x9DF1F90)
#define RPG_CLIENT_NAVMAP_AREADATA_SET_SUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0x9DF2030)
#define RPG_CLIENT_NAVMAP_AREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF1A80)
#define RPG_CLIENT_NAVMAP_AREADATA__INITSECTIONS_OFFSET UNITYSDK_OFFSET(0x9DF1AC0)
#define RPG_CLIENT_NAVMAP_AREADATA__ISMAPSECTIONLIGHTEN_OFFSET UNITYSDK_OFFSET(0x9DF1DB0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int AreaData_TypeDefinitionIndex = 61232;

	class AreaData : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelNavmapArea* _AreaConfig; // 0x10
		::RPG::Client::NavMap::ICartography* _Cartography; // 0x18
		::RPG::Client::NavMap::SubNavMapData* _SubNavMapData_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::SectionData*>* _SectionDatas; // 0x28
		::RPG::MVector2 _PositionInCanvas_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::AreaData* Create(::RPG::Client::NavMap::ICartography* cartography, ::RPG::GameCore::LevelNavmapArea* areaConfig, ::RPG::MVector2 positionInCanvas)
		{
			return ((::RPG::Client::NavMap::AreaData*(*)(::RPG::Client::NavMap::ICartography*, ::RPG::GameCore::LevelNavmapArea*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_CREATE_OFFSET))(cartography, areaConfig, positionInCanvas);
		}

		::System::Void _InitSections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA__INITSECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::SectionData*>* GetLightenMapFogSectionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::SectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GETLIGHTENMAPFOGSECTIONLIST_OFFSET))(this);
		}

		::System::Boolean _IsMapSectionLighten(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA__ISMAPSECTIONLIGHTEN_OFFSET))(this, sectionID);
		}

		::System::Boolean get_IsShowSubMapLinkIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_ISSHOWSUBMAPLINKICON_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_AreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_AREATYPE_OFFSET))(this);
		}

		::RPG::GameCore::LevelMinimapVolume* get_MinimapVolume()
		{
			return ((::RPG::GameCore::LevelMinimapVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_MINIMAPVOLUME_OFFSET))(this);
		}

		::System::UInt32 get_SortingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_SORTINGID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RegionIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_REGIONIDLIST_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartography* get_Cartography()
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_CARTOGRAPHY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MapLayerList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_MAPLAYERLIST_OFFSET))(this);
		}

		::RPG::MVector2 get_PositionInCanvas()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_POSITIONINCANVAS_OFFSET))(this);
		}

		::System::Void set_PositionInCanvas(::RPG::MVector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_SET_POSITIONINCANVAS_OFFSET))(this, value);
		}

		::System::Single get_ScaleInCanvas()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_SCALEINCANVAS_OFFSET))(this);
		}

		::RPG::MVector2 get_SubmapUIDefaultCenter()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_SUBMAPUIDEFAULTCENTER_OFFSET))(this);
		}

		::System::Single get_SubmapUIScaleLowerRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_SUBMAPUISCALELOWERRATIO_OFFSET))(this);
		}

		::System::Single get_SubmapUIScaleUpperRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_SUBMAPUISCALEUPPERRATIO_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubNavMapData* get_SubNavMapData()
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_GET_SUBNAVMAPDATA_OFFSET))(this);
		}

		::System::Void set_SubNavMapData(::RPG::Client::NavMap::SubNavMapData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_AREADATA_SET_SUBNAVMAPDATA_OFFSET))(this, value);
		}
	};
}
