#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelMinimapSectionType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client::NavMap { class AreaData; }
namespace RPG::GameCore { class LevelMinimapPassage; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_SECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18263940)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0x18264650)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x18264430)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18264480)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x182639C0)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x182642F0)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_INITIALHIDDEN_OFFSET UNITYSDK_OFFSET(0x18264390)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_ISRECT_OFFSET UNITYSDK_OFFSET(0x182642A0)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_MAPLAYERID_OFFSET UNITYSDK_OFFSET(0x18263A10)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_PASSAGES_OFFSET UNITYSDK_OFFSET(0x182645C0)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x18264570)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_PROPID_OFFSET UNITYSDK_OFFSET(0x182644D0)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_REFERENCEPROPKEY_OFFSET UNITYSDK_OFFSET(0x18264250)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x18263D00)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_SECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18264610)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_SPRITEPATH_OFFSET UNITYSDK_OFFSET(0x18263A60)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x18264520)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x182643E0)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_GET_UIPOSITION_OFFSET UNITYSDK_OFFSET(0x18264340)
#define RPG_CLIENT_NAVMAP_SECTIONDATA_SET_AREADATA_OFFSET UNITYSDK_OFFSET(0x18264660)
#define RPG_CLIENT_NAVMAP_SECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x182639B0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SectionData_TypeDefinitionIndex = 74404;

	class SectionData : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelMinimapSection* _SectionConfig; // 0x10
		::RPG::Client::NavMap::AreaData* _AreaData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::SectionData* Create(::RPG::Client::NavMap::AreaData* a1, ::RPG::GameCore::LevelMinimapSection* a2)
		{
			return ((::RPG::Client::NavMap::SectionData*(*)(::RPG::Client::NavMap::AreaData*, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_MapLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_MAPLAYERID_OFFSET))(this);
		}

		::System::String* get_SpritePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_SPRITEPATH_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Boolean get_IsRect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_ISRECT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_Indices()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_INDICES_OFFSET))(this);
		}

		::RPG::MVector2 get_UIPosition()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_UIPOSITION_OFFSET))(this);
		}

		::System::Boolean get_InitialHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_INITIALHIDDEN_OFFSET))(this);
		}

		::RPG::GameCore::LevelMinimapSectionType get_Type()
		{
			return ((::RPG::GameCore::LevelMinimapSectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::MVector2 get_Center()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_CENTER_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_PROPID_OFFSET))(this);
		}

		::System::String* get_ReferencePropKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_REFERENCEPROPKEY_OFFSET))(this);
		}

		::Il2CppArray<::RPG::MVector2>* get_Triangles()
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_TRIANGLES_OFFSET))(this);
		}

		::RPG::MVector2 get_Pivot()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_PIVOT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelMinimapPassage*>* get_Passages()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelMinimapPassage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_PASSAGES_OFFSET))(this);
		}

		::RPG::GameCore::LevelMinimapSection* get_SectionConfig()
		{
			return ((::RPG::GameCore::LevelMinimapSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_SECTIONCONFIG_OFFSET))(this);
		}

		::RPG::Client::NavMap::AreaData* get_AreaData()
		{
			return ((::RPG::Client::NavMap::AreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_GET_AREADATA_OFFSET))(this);
		}

		::System::Void set_AreaData(::RPG::Client::NavMap::AreaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::AreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONDATA_SET_AREADATA_OFFSET))(this, a1);
		}
	};
}
