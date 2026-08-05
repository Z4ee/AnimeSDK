#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/AAB2.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/MoleMole/SceneSoundPolygonData_SoundAreaStatus.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Polygon2; }
namespace MoleMole { class ContourXZ; }
namespace MoleMole { class FacePlaneGeometry; }
namespace MoleMole { class SceneSoundPolygonData_AreaInStateChanged; }
namespace MoleMole::Audio { class SoundSubScriptBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ADDWORLDPOS_OFFSET UNITYSDK_OFFSET(0x145060C0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_AUTOADJUST_OFFSET UNITYSDK_OFFSET(0x14505520)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_CLOSESTPOINTONSEGMENT2D_OFFSET UNITYSDK_OFFSET(0x145049F0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_COMPETERINGEDGES_OFFSET UNITYSDK_OFFSET(0x145045C0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_COMPUTEYONPLANE_OFFSET UNITYSDK_OFFSET(0x145039A0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_CONTAINSXZ_OFFSET UNITYSDK_OFFSET(0x145037A0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTBOUNDARYPOINTTOMULTIFACE_OFFSET UNITYSDK_OFFSET(0x14504160)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTBOUNDARYPOINTTO_OFFSET UNITYSDK_OFFSET(0x14503CE0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTPOINTTOMULTIFACE_OFFSET UNITYSDK_OFFSET(0x14503BC0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTPOINTTO_OFFSET UNITYSDK_OFFSET(0x14503A50)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETPOINTSINWORLD_OFFSET UNITYSDK_OFFSET(0x14505F00)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETSQRDISTANCELOWERBOUND_OFFSET UNITYSDK_OFFSET(0x14504870)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x14501170)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x14501190)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_INANYHOLE_OFFSET UNITYSDK_OFFSET(0x145038F0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ISPOINTINPOLYGONMULTIFACE_OFFSET UNITYSDK_OFFSET(0x145034C0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ISPOINTINPOLYGON_OFFSET UNITYSDK_OFFSET(0x14503350)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_MODIFYWORLDPOSOFINDEX_OFFSET UNITYSDK_OFFSET(0x14505FA0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x145053F0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONDESTROY_OFFSET UNITYSDK_OFFSET(0x145053A0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x14504AF0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONREIGSTER_OFFSET UNITYSDK_OFFSET(0x14504B40)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONUNREGISTER_OFFSET UNITYSDK_OFFSET(0x14504FF0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_PREPARERUNTIMEDATAMULTIFACE_OFFSET UNITYSDK_OFFSET(0x14501F70)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_PREPARERUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x145011A0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_REMOVEATINDEX_OFFSET UNITYSDK_OFFSET(0x14506190)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_SQRDISTTOAABB2D_OFFSET UNITYSDK_OFFSET(0x14504540)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_TRYGETPOINTINREGIONYPLANE_OFFSET UNITYSDK_OFFSET(0x14503540)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_UPDATESPATIALAUDIOPARAMS_OFFSET UNITYSDK_OFFSET(0x14505910)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14506250)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA__GETPOINTSINWORLD_B__76_0_OFFSET UNITYSDK_OFFSET(0x145063D0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundPolygonData_TypeDefinitionIndex = 68583;

	class SceneSoundPolygonData : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		// static const ::System::Single MultiFaceYPlaneTolerance; // 0x0
		::UnityEngine::GameObject* spatial_Room; // 0x58
		::System::Boolean runtimeDataReady; // 0x60
		::Dest::Math::AAB2 aab2; // 0x64
		::Dest::Math::Polygon2* polygon2; // 0x78
		::Dest::Math::Sphere3 sphere; // 0x80
		::UnityEngine::GameObject* emitter; // 0x90
		::System::Boolean nowInArea; // 0x98
		::System::Boolean rawInAreaThisFrame; // 0x99
		::System::Boolean effectiveInArea; // 0x9A
		::System::Boolean isMutexSuppressed; // 0x9B
		::MoleMole::SceneSoundPolygonData* mutexRetreatTarget; // 0xA0
		::System::Boolean isEnabled; // 0xA8
		::MoleMole::SceneSoundPolygonData_SoundAreaStatus status; // 0xAC
		::MoleMole::SceneSoundPolygonData_AreaInStateChanged* nowInAreaChanged; // 0xB0
		::Il2CppArray<::System::Single>* faceYPlaneMinOnAABB; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points; // 0xC0
		::System::Single y; // 0xC8
		::System::Single height; // 0xCC
		::System::Boolean useMultiFaceGeometry; // 0xD0
		::System::Single topY; // 0xD4
		::System::Collections::Generic::List_1<::MoleMole::FacePlaneGeometry*>* facePlanes; // 0xD8
		::System::String* eventName; // 0xE0
		::System::String* enterSoundAction; // 0xE8
		::System::String* exitSoundAction; // 0xF0
		::System::Boolean simulateNearest3DPosition; // 0xF8
		::System::Boolean useListenerPosition; // 0xF9
		::System::String* soundAreaKey; // 0x100
		::System::Collections::Generic::List_1<::System::String*>* activeWhenSoundSceneTags; // 0x108
		::System::Collections::Generic::List_1<::System::String*>* inactiveWhenSoundSceneTags; // 0x110
		::System::Boolean active_UseDistance; // 0x118
		::System::Single active_Distance; // 0x11C
		::System::Boolean active_LeaveHeight; // 0x120
		::System::Single active_LeaveHeightDistance; // 0x124
		::System::Boolean spacial_Enable; // 0x128
		::System::Boolean spatial_NeedCheckRoom; // 0x129
		::System::Int32 spatial_Priority; // 0x12C
		::System::String* spatial_ReverbAuxBus; // 0x130
		::System::Single spatial_ReverbLevel; // 0x138
		::System::Single spatial_WallOcclusion; // 0x13C
		::System::Single spatial_AuxSendLevelToSelf; // 0x140
		::System::String* mutexGroup; // 0x148
		::System::Int32 mutexPriority; // 0x150
		::System::Boolean subArea_Enable; // 0x154
		::System::String* subArea_Name; // 0x158
		::System::Collections::Generic::List_1<::MoleMole::Audio::SoundSubScriptBase*>* subScripts; // 0x160

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

		::UnityEngine::Vector3 GetClosestBoundaryPointTo(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTBOUNDARYPOINTTO_OFFSET))(this, position);
		}

		::UnityEngine::Vector3 GetClosestBoundaryPointToMultiFace(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GETCLOSESTBOUNDARYPOINTTOMULTIFACE_OFFSET))(this, position);
		}

		::System::Single GetSqrDistanceLowerBound(::UnityEngine::Vector3 position)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GETSQRDISTANCELOWERBOUND_OFFSET))(this, position);
		}

		static ::System::Boolean ContainsXZ(::Il2CppArray<::UnityEngine::Vector2>* ring, ::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_CONTAINSXZ_OFFSET))(ring, point);
		}

		static ::System::Boolean InAnyHole(::Il2CppArray<::MoleMole::ContourXZ*>* holes, ::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MoleMole::ContourXZ*>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_INANYHOLE_OFFSET))(holes, point);
		}

		static ::System::Void CompeteRingEdges(::Il2CppArray<::UnityEngine::Vector2>* ring, ::UnityEngine::Vector2 pos2D, ::System::Int32 faceIndex, ::System::Single& bestSqr, ::UnityEngine::Vector2& best2D, ::System::Int32& bestFace)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::System::Int32, ::System::Single&, ::UnityEngine::Vector2&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_COMPETERINGEDGES_OFFSET))(ring, pos2D, faceIndex, bestSqr, best2D, bestFace);
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

		::UnityEngine::Vector3 _GetPointsInWorld_b__76_0(::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA__GETPOINTSINWORLD_B__76_0_OFFSET))(this, p);
		}
	};
}
