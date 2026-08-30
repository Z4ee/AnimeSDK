#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1228;
class Class_1_A3C62CC0DC4BD2F1;
class Class_1_B224D8D429173940;
class Class_1_E7E7FCFD10613C60;
class Class_1_EBB880A8D2C9B0D4;
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class EntityIcon; }
namespace RPG::Client::NavMap::FiveDim { class MissionIcon; }
namespace RPG::Client::NavMap::FiveDim { class SectionConfig; }
namespace RPG::Client::NavMap::FiveDim { class SurfaceConnectIcon; }
namespace RPG::Client::NavMap::FiveDim { class SurfaceConnectIcon_SurfaceConnectTarget; }
namespace RPG::GameCore { class FiveDimMapFaceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CONTAINSCONNECTTARGET_OFFSET UNITYSDK_OFFSET(0x1A335640)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CONTAINSSURFACE_OFFSET UNITYSDK_OFFSET(0x1A3355E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A335BC0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETMAPLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1A3341A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETPLAYERMAPLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1A334330)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETPLAYERMAPLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1A334770)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETSURFACE_OFFSET UNITYSDK_OFFSET(0x1A32F7B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETTRACKINGENTITYICON_OFFSET UNITYSDK_OFFSET(0x1A335790)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0x1A3358F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_BACKGROUNDPATH_OFFSET UNITYSDK_OFFSET(0x1A3337C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_BACKGROUNDSIZE_OFFSET UNITYSDK_OFFSET(0x1A333770)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1A3338C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0x1A333B80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0x1A32FA20)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1A32FA70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FACEID_OFFSET UNITYSDK_OFFSET(0x1A32FAC0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FACEINDEX_OFFSET UNITYSDK_OFFSET(0x1A3336F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FOGS_OFFSET UNITYSDK_OFFSET(0x1A333B20)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ICONS_OFFSET UNITYSDK_OFFSET(0x1A333A70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ISPLAYERIN_OFFSET UNITYSDK_OFFSET(0x1A333910)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ISSHOWEMPTYMAP_OFFSET UNITYSDK_OFFSET(0x1A333A10)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_LEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A3338B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x1A333C70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_MISSIONICONS_OFFSET UNITYSDK_OFFSET(0x1A333A80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A333710)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x1A333A90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SHOWLEVELVARNAME_OFFSET UNITYSDK_OFFSET(0x1A333810)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SHOWLEVELVARVALUES_OFFSET UNITYSDK_OFFSET(0x1A333860)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SURFACECONNECTICONS_OFFSET UNITYSDK_OFFSET(0x1A333A60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0x1A333BD0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0x1A333C20)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_HASCHESTICON_OFFSET UNITYSDK_OFFSET(0x1A335A50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_HASSECTIONSHOW_OFFSET UNITYSDK_OFFSET(0x1A333CF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_INIT_OFFSET UNITYSDK_OFFSET(0x1A334BB0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_ISINLOCKFOG_OFFSET UNITYSDK_OFFSET(0x1A334100)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_ISSECTIONSHOW_OFFSET UNITYSDK_OFFSET(0x1A333EE0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_SET_FACEINDEX_OFFSET UNITYSDK_OFFSET(0x1A333700)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_SORTENTITYICONS_OFFSET UNITYSDK_OFFSET(0x1A32F8A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_TRYADDENTITYICON_OFFSET UNITYSDK_OFFSET(0x1A3348D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE__COLLECTCHESTICONS_OFFSET UNITYSDK_OFFSET(0x1A334CF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE__CREATESURFACES_OFFSET UNITYSDK_OFFSET(0x1A334980)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A335D70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE__GETPLAYERTRANSFORMONSURFACE_OFFSET UNITYSDK_OFFSET(0x1A334560)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE__ISFOGUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A334020)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int Face_TypeDefinitionIndex = 74532;

	class Face : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>* _Icons_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>* _MissionIcons_k__BackingField; // 0x18
		::Class_1_A3C62CC0DC4BD2F1* _LevelInstance_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon*>* _SurfaceConnectIcons_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::Class_1_E7E7FCFD10613C60*>* _Surfaces; // 0x30
		::Class_1_B224D8D429173940* _FaceConfig; // 0x38
		::System::UInt32 _FaceIndex_k__BackingField; // 0x40

		::System::Void _ctor(::Class_1_B224D8D429173940* a1, ::Class_1_A3C62CC0DC4BD2F1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B224D8D429173940*, ::Class_1_A3C62CC0DC4BD2F1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_FaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FACEID_OFFSET))(this);
		}

		::System::UInt32 get_FaceIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FACEINDEX_OFFSET))(this);
		}

		::System::Void set_FaceIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_SET_FACEINDEX_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_BackgroundSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_BACKGROUNDSIZE_OFFSET))(this);
		}

		::System::String* get_BackgroundPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_BACKGROUNDPATH_OFFSET))(this);
		}

		::System::String* get_ShowLevelVarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SHOWLEVELVARNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Int16>* get_ShowLevelVarValues()
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SHOWLEVELVARVALUES_OFFSET))(this);
		}

		::Class_1_A3C62CC0DC4BD2F1* get_LevelInstance()
		{
			return ((::Class_1_A3C62CC0DC4BD2F1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_LEVELINSTANCE_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* get_Cartography()
		{
			return ((::RPG::Client::NavMap::FiveDim::CartographyFiveDim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CARTOGRAPHY_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ISPLAYERIN_OFFSET))(this);
		}

		::System::Boolean get_IsShowEmptyMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ISSHOWEMPTYMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon*>* get_SurfaceConnectIcons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SURFACECONNECTICONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>* get_Icons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ICONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>* get_MissionIcons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_MISSIONICONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* get_Sections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_Fogs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FOGS_OFFSET))(this);
		}

		::System::UInt32 get_ContainerGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CONTAINERGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CONTAINERINSTANCEID_OFFSET))(this);
		}

		::Class_1_EBB880A8D2C9B0D4* get_CheatSheet()
		{
			return ((::Class_1_EBB880A8D2C9B0D4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CHEATSHEET_OFFSET))(this);
		}

		::System::Single get_UnitLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_UNITLENGTH_OFFSET))(this);
		}

		::System::Int16 get_UnitPixelCount()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_UNITPIXELCOUNT_OFFSET))(this);
		}

		::RPG::Client::NavMap::MapData* get_MapData()
		{
			return ((::RPG::Client::NavMap::MapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_MAPDATA_OFFSET))(this);
		}

		::System::Boolean HasSectionShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_HASSECTIONSHOW_OFFSET))(this);
		}

		::System::Boolean IsSectionShow(::RPG::Client::NavMap::FiveDim::SectionConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::SectionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_ISSECTIONSHOW_OFFSET))(this, a1);
		}

		::System::Boolean _IsFogUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE__ISFOGUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsInLockFog(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_ISINLOCKFOG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetMapLocalPosition(::Class_0_16E4307DCC419505_1228* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_0_16E4307DCC419505_1228*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETMAPLOCALPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetPlayerMapLocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETPLAYERMAPLOCALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetPlayerMapLocalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETPLAYERMAPLOCALROTATION_OFFSET))(this);
		}

		::System::Boolean _GetPlayerTransformOnSurface(::Struct_2_EAC1BB0F093534A5& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE__GETPLAYERTRANSFORMONSURFACE_OFFSET))(this, a1);
		}

		::System::Void TryAddEntityIcon(::RPG::Client::NavMap::FiveDim::EntityIcon* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_TRYADDENTITYICON_OFFSET))(this, a1);
		}

		::System::Void SortEntityIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_SORTENTITYICONS_OFFSET))(this);
		}

		::System::Void _CreateSurfaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE__CREATESURFACES_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_INIT_OFFSET))(this);
		}

		::System::Void _CollectChestIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE__COLLECTCHESTICONS_OFFSET))(this);
		}

		::System::Boolean ContainsSurface(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CONTAINSSURFACE_OFFSET))(this, a1);
		}

		::System::Boolean ContainsConnectTarget(::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon_SurfaceConnectTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon_SurfaceConnectTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CONTAINSCONNECTTARGET_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::FiveDim::EntityIcon* GetTrackingEntityIcon()
		{
			return ((::RPG::Client::NavMap::FiveDim::EntityIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETTRACKINGENTITYICON_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::MissionIcon* GetTrackingMissionIcon()
		{
			return ((::RPG::Client::NavMap::FiveDim::MissionIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETTRACKINGMISSIONICON_OFFSET))(this);
		}

		::System::Boolean HasChestIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_HASCHESTICON_OFFSET))(this);
		}

		::Class_1_E7E7FCFD10613C60* GetSurface(::System::UInt32 a1)
		{
			return ((::Class_1_E7E7FCFD10613C60*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETSURFACE_OFFSET))(this, a1);
		}

		static ::RPG::Client::NavMap::FiveDim::Face* Create(::RPG::GameCore::FiveDimMapFaceConfig* a1, ::Class_1_A3C62CC0DC4BD2F1* a2)
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::RPG::GameCore::FiveDimMapFaceConfig*, ::Class_1_A3C62CC0DC4BD2F1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CREATE_OFFSET))(a1, a2);
		}
	};
}
