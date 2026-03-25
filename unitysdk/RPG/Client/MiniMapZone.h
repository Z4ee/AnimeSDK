#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_143B7A497B890286.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_17710F15CC913BFB;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class LevelNavmapArea; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_MINIMAPZONE_ADDICONTOSECTION_OFFSET UNITYSDK_OFFSET(0x9BACA40)
#define RPG_CLIENT_MINIMAPZONE_CONVERTTOIMAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x9BAE630)
#define RPG_CLIENT_MINIMAPZONE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BA1590)
#define RPG_CLIENT_MINIMAPZONE_ENABLESECTIONCLIP_OFFSET UNITYSDK_OFFSET(0x9BADB60)
#define RPG_CLIENT_MINIMAPZONE_ENLIGHTENSECTION_OFFSET UNITYSDK_OFFSET(0x9BA8100)
#define RPG_CLIENT_MINIMAPZONE_GETBACKGROUNDPATH_OFFSET UNITYSDK_OFFSET(0x9BADC90)
#define RPG_CLIENT_MINIMAPZONE_GETCURPLAYERLEVELNAVMAPAREA_OFFSET UNITYSDK_OFFSET(0x9BADD20)
#define RPG_CLIENT_MINIMAPZONE_GETDYNAMICSECTIONLINK_OFFSET UNITYSDK_OFFSET(0x9BAE320)
#define RPG_CLIENT_MINIMAPZONE_GETLEVELNAVMAPAREABYSECTIONID_OFFSET UNITYSDK_OFFSET(0x9BAE050)
#define RPG_CLIENT_MINIMAPZONE_GETLOCATESECTIONIDXS_OFFSET UNITYSDK_OFFSET(0x9BA7830)
#define RPG_CLIENT_MINIMAPZONE_GETPOSITIONINCANVAS_OFFSET UNITYSDK_OFFSET(0x9BAD940)
#define RPG_CLIENT_MINIMAPZONE_GETSCALEINCANVAS_OFFSET UNITYSDK_OFFSET(0x9BAD9F0)
#define RPG_CLIENT_MINIMAPZONE_GETSECTIONBOUNDS_OFFSET UNITYSDK_OFFSET(0x9BAD880)
#define RPG_CLIENT_MINIMAPZONE_GETSECTIONIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x9BADB00)
#define RPG_CLIENT_MINIMAPZONE_GETSECTIONNUM_OFFSET UNITYSDK_OFFSET(0x9BACAD0)
#define RPG_CLIENT_MINIMAPZONE_GETSECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0x9BADA80)
#define RPG_CLIENT_MINIMAPZONE_GETSECTION_OFFSET UNITYSDK_OFFSET(0x9BAC980)
#define RPG_CLIENT_MINIMAPZONE_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x9BAE3B0)
#define RPG_CLIENT_MINIMAPZONE_GET_HASSECTION_OFFSET UNITYSDK_OFFSET(0x9BAF120)
#define RPG_CLIENT_MINIMAPZONE_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x9BAF0B0)
#define RPG_CLIENT_MINIMAPZONE_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x9BADC80)
#define RPG_CLIENT_MINIMAPZONE_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x9BAF060)
#define RPG_CLIENT_MINIMAPZONE_GET_SECTIONNUM_OFFSET UNITYSDK_OFFSET(0x9BAF0D0)
#define RPG_CLIENT_MINIMAPZONE_IFSECTIONHASICON_OFFSET UNITYSDK_OFFSET(0x9BAE730)
#define RPG_CLIENT_MINIMAPZONE_ISINSECTION_OFFSET UNITYSDK_OFFSET(0x9BA76A0)
#define RPG_CLIENT_MINIMAPZONE_ISSECTIONDYNAMIC_OFFSET UNITYSDK_OFFSET(0x9BAE2C0)
#define RPG_CLIENT_MINIMAPZONE_REMOVEICONINSECTION_OFFSET UNITYSDK_OFFSET(0x9BACB50)
#define RPG_CLIENT_MINIMAPZONE_SETUPSECTIONINFO_OFFSET UNITYSDK_OFFSET(0x9BA64A0)
#define RPG_CLIENT_MINIMAPZONE_TICKDYNAMICSECTIONS_OFFSET UNITYSDK_OFFSET(0x9BA6E00)
#define RPG_CLIENT_MINIMAPZONE__CALCBOUNDS_OFFSET UNITYSDK_OFFSET(0x9BAEBF0)
#define RPG_CLIENT_MINIMAPZONE__COMPARESECTIONIDXS_OFFSET UNITYSDK_OFFSET(0x9BAEF60)
#define RPG_CLIENT_MINIMAPZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x9BAF180)
#define RPG_CLIENT_MINIMAPZONE__GETLEVELNAVMAPAREA_OFFSET UNITYSDK_OFFSET(0x9BAEE20)
#define RPG_CLIENT_MINIMAPZONE__ISINPOLYGONSECTION_OFFSET UNITYSDK_OFFSET(0x9BAE130)
#define RPG_CLIENT_MINIMAPZONE__ISINPOLYGON_OFFSET UNITYSDK_OFFSET(0x9BAE7F0)
#define RPG_CLIENT_MINIMAPZONE__ISLEFT_OFFSET UNITYSDK_OFFSET(0x9BAEB50)
#define RPG_CLIENT_MINIMAPZONE__ISSECTIONRECT_OFFSET UNITYSDK_OFFSET(0x9BAEDC0)
#define RPG_CLIENT_MINIMAPZONE__SORTVISIBLESECTIONIDXS_OFFSET UNITYSDK_OFFSET(0x9BAEEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapZone_TypeDefinitionIndex = 49132;

	class MiniMapZone : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_17710F15CC913BFB*>* _DynamicSectionLinks; // 0x10
		::System::String* ImagePath; // 0x18
		::RPG::Client::Map* _Map; // 0x20
		::UnityEngine::Sprite* Image; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _VisibleSectionIDs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>* _IconsInSectionsDic; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int16>* _DynamicLinkIdxDic; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::MVector2>*>* _WorldSectionVerticesDic; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* VisibleSectionIdxs; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* _SectionIDDic; // 0x58
		::RPG::GameCore::LevelNavmapConfig* _NavMapConfig; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_143B7A497B890286>* SectionBoundsDic; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* _SectionSortingIDDic; // 0x70
		::System::Int32 Depth; // 0x78
		::System::Single AdditiveScale; // 0x7C
		::UnityEngine::Bounds ZoneBounds; // 0x80
		::System::Single BasicScale; // 0x98
		::System::Int32 ID; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupSectionInfo(::RPG::GameCore::LevelNavmapConfig* navMapConfig, ::System::Collections::Generic::HashSet_1<::System::UInt32>* initVisibleSectionIDs, ::RPG::Client::Map* map)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_SETUPSECTIONINFO_OFFSET))(this, navMapConfig, initVisibleSectionIDs, map);
		}

		::Struct_2_143B7A497B890286 GetSectionBounds(::System::Int32 index)
		{
			return ((::Struct_2_143B7A497B890286(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTIONBOUNDS_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetPositionInCanvas(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETPOSITIONINCANVAS_OFFSET))(this, index);
		}

		::System::Single GetScaleInCanvas(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSCALEINCANVAS_OFFSET))(this, index);
		}

		::RPG::GameCore::LevelMinimapSection* GetSection(::System::Int32 index)
		{
			return ((::RPG::GameCore::LevelMinimapSection*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTION_OFFSET))(this, index);
		}

		::Il2CppArray<::RPG::MVector2>* GetSectionVertices(::System::Int32 index)
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTIONVERTICES_OFFSET))(this, index);
		}

		::System::UInt32 GetSectionIDByIndex(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTIONIDBYINDEX_OFFSET))(this, index);
		}

		::System::Boolean EnableSectionClip(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ENABLESECTIONCLIP_OFFSET))(this, index);
		}

		::RPG::GameCore::LevelNavmapConfig* get_NavMapConfig()
		{
			return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_NAVMAPCONFIG_OFFSET))(this);
		}

		::System::String* GetBackgroundPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETBACKGROUNDPATH_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavmapArea* GetCurPlayerLevelNavmapArea()
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETCURPLAYERLEVELNAVMAPAREA_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavmapArea* GetLevelNavmapAreaBySectionID(::System::UInt32 sectionID)
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETLEVELNAVMAPAREABYSECTIONID_OFFSET))(this, sectionID);
		}

		::System::Int32 GetSectionNum(::System::UInt32 areaID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTIONNUM_OFFSET))(this, areaID);
		}

		::System::Boolean IsInSection(::UnityEngine::Vector3 worldPos, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ISINSECTION_OFFSET))(this, worldPos, index);
		}

		::System::Void GetLocateSectionIdxs(::UnityEngine::Vector3 worldPos, ::System::Collections::Generic::List_1<::System::Int32>* result, ::Struct_2_143B7A497B890286& nearSectionsBounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::Int32>*, ::Struct_2_143B7A497B890286&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETLOCATESECTIONIDXS_OFFSET))(this, worldPos, result, nearSectionsBounds);
		}

		::System::Void EnlightenSection(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ENLIGHTENSECTION_OFFSET))(this, index);
		}

		::System::Boolean IsSectionDynamic(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ISSECTIONDYNAMIC_OFFSET))(this, index);
		}

		::Class_1_17710F15CC913BFB* GetDynamicSectionLink(::System::Int32 index)
		{
			return ((::Class_1_17710F15CC913BFB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETDYNAMICSECTIONLINK_OFFSET))(this, index);
		}

		::System::Void TickDynamicSections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_TICKDYNAMICSECTIONS_OFFSET))(this);
		}

		::System::Void GetVertices(::System::Int32 iSectionIdx, ::System::Collections::Generic::List_1<::RPG::MVector2>* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETVERTICES_OFFSET))(this, iSectionIdx, result);
		}

		::UnityEngine::Vector2 ConvertToImagePosition(::UnityEngine::Vector3 pos3D)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_CONVERTTOIMAGEPOSITION_OFFSET))(this, pos3D);
		}

		::System::Void AddIconToSection(::System::Int32 iconHash, ::System::Int32 sectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ADDICONTOSECTION_OFFSET))(this, iconHash, sectionIndex);
		}

		::System::Boolean IfSectionHasIcon(::System::Int32 iconHash, ::System::Int32 sectionIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_IFSECTIONHASICON_OFFSET))(this, iconHash, sectionIndex);
		}

		::System::Void RemoveIconInSection(::System::Int32 iconHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_REMOVEICONINSECTION_OFFSET))(this, iconHash);
		}

		::System::Boolean _IsInPolygonSection(::System::Int32 idx, ::RPG::MVector2 worldPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__ISINPOLYGONSECTION_OFFSET))(this, idx, worldPos);
		}

		static ::System::Boolean _IsInPolygon(::RPG::MVector2 pos, ::Il2CppArray<::RPG::MVector2>* vertices, ::Il2CppArray<::System::UInt32>* indices)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__ISINPOLYGON_OFFSET))(pos, vertices, indices);
		}

		static ::System::Single _IsLeft(::RPG::MVector2 v0, ::RPG::MVector2 v1, ::RPG::MVector2 p)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__ISLEFT_OFFSET))(v0, v1, p);
		}

		static ::Struct_2_143B7A497B890286 _CalcBounds(::Il2CppArray<::RPG::MVector2>* vertices, ::Il2CppArray<::System::UInt32>* indices)
		{
			return ((::Struct_2_143B7A497B890286(*)(::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__CALCBOUNDS_OFFSET))(vertices, indices);
		}

		static ::System::Boolean _IsSectionRect(::RPG::GameCore::LevelMinimapSection* section)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__ISSECTIONRECT_OFFSET))(section);
		}

		::RPG::GameCore::LevelNavmapArea* _GetLevelNavMapArea(::System::UInt32 areaID)
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__GETLEVELNAVMAPAREA_OFFSET))(this, areaID);
		}

		::System::Void _SortVisibleSectionIdxs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__SORTVISIBLESECTIONIDXS_OFFSET))(this);
		}

		::System::Int32 _CompareSectionIdxs(::System::Int32 left, ::System::Int32 right)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__COMPARESECTIONIDXS_OFFSET))(this, left, right);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_SCALE_OFFSET))(this);
		}

		::System::Single get_MapRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_MAPROTATION_OFFSET))(this);
		}

		::System::Int32 get_SectionNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_SECTIONNUM_OFFSET))(this);
		}

		::System::Boolean get_HasSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_HASSECTION_OFFSET))(this);
		}
	};
}
