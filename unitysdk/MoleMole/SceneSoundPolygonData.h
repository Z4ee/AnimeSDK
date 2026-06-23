#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/AAB2.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/MoleMole/SceneSoundPolygonData_SoundAreaStatus.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Polygon2; }
namespace MoleMole { class FacePlaneGeometry; }
namespace MoleMole { class SceneSoundPolygonData_AreaInStateChanged; }
namespace MoleMole::Audio { class SoundSubScriptBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ADDWORLDPOS_OFFSET UNITYSDK_OFFSET(0x18CFD930)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_AUTOADJUST_OFFSET UNITYSDK_OFFSET(0x18CFCD90)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_CLOSESTPOINTONSEGMENT2D_OFFSET UNITYSDK_OFFSET(0x18CFC170)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_COMPUTEYONPLANE_OFFSET UNITYSDK_OFFSET(0x18CFB570)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_CROSS2D_OFFSET UNITYSDK_OFFSET(0x18CFC410)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTPOINTTOMULTIFACE_OFFSET UNITYSDK_OFFSET(0x18CFBB00)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTPOINTTO_OFFSET UNITYSDK_OFFSET(0x18CFB620)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETPOINTSINWORLD_OFFSET UNITYSDK_OFFSET(0x18CFD770)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETSQRDISTANCELOWERBOUND_OFFSET UNITYSDK_OFFSET(0x18CFC270)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x18CF8AD0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x18CF8AF0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ISPOINTINPOLYGONMULTIFACE_OFFSET UNITYSDK_OFFSET(0x18CFACC0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ISPOINTINPOLYGON_OFFSET UNITYSDK_OFFSET(0x18CFAB50)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_MODIFYWORLDPOSOFINDEX_OFFSET UNITYSDK_OFFSET(0x18CFD810)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18CFCC60)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_PACKCELLKEY_OFFSET UNITYSDK_OFFSET(0x18CFB1D0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POINTINTRIANGLE2D_OFFSET UNITYSDK_OFFSET(0x18CFB220)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONDESTROY_OFFSET UNITYSDK_OFFSET(0x18CFCC10)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18CFC480)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONREIGSTER_OFFSET UNITYSDK_OFFSET(0x18CFC4D0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONUNREGISTER_OFFSET UNITYSDK_OFFSET(0x18CFC980)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_PREPARERUNTIMEDATAMULTIFACE_OFFSET UNITYSDK_OFFSET(0x18CF99B0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_PREPARERUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x18CF8B00)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_REMOVEATINDEX_OFFSET UNITYSDK_OFFSET(0x18CFDA00)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_SQRDISTTOAABB2D_OFFSET UNITYSDK_OFFSET(0x18CFC0F0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_TRYGETPOINTINREGIONYPLANE_OFFSET UNITYSDK_OFFSET(0x18CFAD40)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_UPDATESPATIALAUDIOPARAMS_OFFSET UNITYSDK_OFFSET(0x18CFD180)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFDAC0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA__GETPOINTSINWORLD_B__73_0_OFFSET UNITYSDK_OFFSET(0x18CFDC40)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundPolygonData_TypeDefinitionIndex = 84598;

	class SceneSoundPolygonData : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		// static const ::System::Single MultiFaceYPlaneTolerance; // 0x0
		// static const ::System::Int32 FaceBits = 0xA; // 0x0
		// static const ::System::Int32 TriBits = 0x16; // 0x0
		// static const ::System::Int32 FaceMask = 0x3FF; // 0x0
		// static const ::System::Int32 TriMask = 0x3FFFFF; // 0x0
		::UnityEngine::GameObject* spatial_Room; // 0x58
		::System::Boolean runtimeDataReady; // 0x60
		::Dest::Math::AAB2 aab2; // 0x64
		::Dest::Math::Polygon2* polygon2; // 0x78
		::Dest::Math::Sphere3 sphere; // 0x80
		::UnityEngine::GameObject* emitter; // 0x90
		::System::Boolean nowInArea; // 0x98
		::System::Boolean isEnabled; // 0x99
		::MoleMole::SceneSoundPolygonData_SoundAreaStatus status; // 0x9C
		::MoleMole::SceneSoundPolygonData_AreaInStateChanged* nowInAreaChanged; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points; // 0xA8
		::System::Single y; // 0xB0
		::System::Single height; // 0xB4
		::System::Boolean useMultiFaceGeometry; // 0xB8
		::System::Single topY; // 0xBC
		::System::Collections::Generic::List_1<::MoleMole::FacePlaneGeometry*>* facePlanes; // 0xC0
		::System::Single spatialHashCellSize; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Int32>*>* spatialHashMap; // 0xD0
		::System::String* eventName; // 0xD8
		::System::String* enterSoundAction; // 0xE0
		::System::String* exitSoundAction; // 0xE8
		::System::Boolean simulateNearest3DPosition; // 0xF0
		::System::Boolean useListenerPosition; // 0xF1
		::System::String* soundAreaKey; // 0xF8
		::System::Collections::Generic::List_1<::System::String*>* activeWhenSoundSceneTags; // 0x100
		::System::Collections::Generic::List_1<::System::String*>* inactiveWhenSoundSceneTags; // 0x108
		::System::Boolean active_UseDistance; // 0x110
		::System::Single active_Distance; // 0x114
		::System::Boolean active_LeaveHeight; // 0x118
		::System::Single active_LeaveHeightDistance; // 0x11C
		::System::Boolean spacial_Enable; // 0x120
		::System::Boolean spatial_NeedCheckRoom; // 0x121
		::System::Int32 spatial_Priority; // 0x124
		::System::String* spatial_ReverbAuxBus; // 0x128
		::System::Single spatial_ReverbLevel; // 0x130
		::System::Single spatial_WallOcclusion; // 0x134
		::System::Single spatial_AuxSendLevelToSelf; // 0x138
		::System::Boolean subArea_Enable; // 0x13C
		::System::String* subArea_Name; // 0x140
		::System::Collections::Generic::List_1<::MoleMole::Audio::SoundSubScriptBase*>* subScripts; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GET_CENTER_OFFSET))(this);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GET_RADIUS_OFFSET))(this);
		}

		::System::Void PrepareRuntimeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_PREPARERUNTIMEDATA_OFFSET))(this);
		}

		::System::Boolean IsPointInPolygon(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_ISPOINTINPOLYGON_OFFSET))(this, point);
		}

		::System::Boolean IsPointInPolygonMultiFace(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_ISPOINTINPOLYGONMULTIFACE_OFFSET))(this, point);
		}

		::System::Boolean TryGetPointInRegionYPlane(::UnityEngine::Vector3 point, ::System::Single& yPlane)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_TRYGETPOINTINREGIONYPLANE_OFFSET))(this, point, yPlane);
		}

		::UnityEngine::Vector3 GetClosestPointTo(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTPOINTTO_OFFSET))(this, position);
		}

		::UnityEngine::Vector3 GetClosestPointToMultiFace(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTPOINTTOMULTIFACE_OFFSET))(this, position);
		}

		::System::Single GetSqrDistanceLowerBound(::UnityEngine::Vector3 position)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GETSQRDISTANCELOWERBOUND_OFFSET))(this, position);
		}

		static ::System::Boolean PointInTriangle2D(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POINTINTRIANGLE2D_OFFSET))(p, a, b, c);
		}

		static ::System::Single Cross2D(::UnityEngine::Vector2 u, ::UnityEngine::Vector2 v)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_CROSS2D_OFFSET))(u, v);
		}

		static ::UnityEngine::Vector2 ClosestPointOnSegment2D(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_CLOSESTPOINTONSEGMENT2D_OFFSET))(p, a, b);
		}

		static ::System::Single ComputeYOnPlane(::MoleMole::FacePlaneGeometry* face, ::System::Single x, ::System::Single z)
		{
			return ((::System::Single(*)(::MoleMole::FacePlaneGeometry*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_COMPUTEYONPLANE_OFFSET))(face, x, z);
		}

		static ::System::Single SqrDistToAABB2D(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 aabbMin, ::UnityEngine::Vector2 aabbMax)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_SQRDISTTOAABB2D_OFFSET))(p, aabbMin, aabbMax);
		}

		static ::System::Int64 PackCellKey(::System::Int32 cellX, ::System::Int32 cellZ)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_PACKCELLKEY_OFFSET))(cellX, cellZ);
		}

		::System::Void PrepareRuntimeDataMultiFace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_PREPARERUNTIMEDATAMULTIFACE_OFFSET))(this);
		}

		::System::Void PolygonInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONINITIALIZE_OFFSET))(this);
		}

		::System::Void PolygonReigster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONREIGSTER_OFFSET))(this);
		}

		::System::Void PolygonUnregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONUNREGISTER_OFFSET))(this);
		}

		::System::Void PolygonDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONDESTROY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_ONDESTROY_OFFSET))(this);
		}

		::System::Void AutoAdjust()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_AUTOADJUST_OFFSET))(this);
		}

		::System::Void UpdateSpatialAudioParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_UPDATESPATIALAUDIOPARAMS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* GetPointsInWorld()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GETPOINTSINWORLD_OFFSET))(this);
		}

		::System::Void ModifyWorldPosOfIndex(::UnityEngine::Vector2 worldPos, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_MODIFYWORLDPOSOFINDEX_OFFSET))(this, worldPos, index);
		}

		::System::Void AddWorldPos(::UnityEngine::Vector2 worldPos, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_ADDWORLDPOS_OFFSET))(this, worldPos, index);
		}

		::System::Void RemoveAtIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_REMOVEATINDEX_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 _GetPointsInWorld_b__73_0(::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA__GETPOINTSINWORLD_B__73_0_OFFSET))(this, p);
		}
	};
}
