#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/AAB2.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/MoleMole/SceneSoundPolygonData_Enum_3_EA66C7A4E1042C92.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Polygon2; }
namespace MoleMole { class SceneSoundPolygonData_Class_3_979E9A69F2BAE0D2; }
namespace MoleMole::Audio { class SoundSubScriptBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ADDWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1703F270)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_AUTOADJUST_OFFSET UNITYSDK_OFFSET(0x1703ECD0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GETPOINTSINWORLD_OFFSET UNITYSDK_OFFSET(0x1703F0C0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1703D610)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1703D630)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ISPOINTINPOLYGON_OFFSET UNITYSDK_OFFSET(0x1703E510)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_METHOD_5_4BFEBAF005497A7E_OFFSET UNITYSDK_OFFSET(0x1703F520)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_MODIFYWORLDPOSOFINDEX_OFFSET UNITYSDK_OFFSET(0x1703F160)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1703EBB0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONDESTROY_OFFSET UNITYSDK_OFFSET(0x1703EB60)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1703E600)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONREIGSTER_OFFSET UNITYSDK_OFFSET(0x1703E650)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONUNREGISTER_OFFSET UNITYSDK_OFFSET(0x1703E8E0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_PREPARERUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x1703D640)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_REMOVEATINDEX_OFFSET UNITYSDK_OFFSET(0x1703F340)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1703F400)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundPolygonData_TypeDefinitionIndex = 48244;

	class SceneSoundPolygonData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* spatial_Room; // 0x18
		::System::Boolean Field_5_1; // 0x20
		::Dest::Math::AAB2 Field_5_2; // 0x24
		::Dest::Math::Polygon2* polygon2; // 0x38
		::Dest::Math::Sphere3 sphere; // 0x40
		::UnityEngine::GameObject* emitter; // 0x50
		::System::Boolean nowInArea; // 0x58
		::System::Boolean isEnabled; // 0x59
		::MoleMole::SceneSoundPolygonData_Enum_3_EA66C7A4E1042C92 status; // 0x5C
		::MoleMole::SceneSoundPolygonData_Class_3_979E9A69F2BAE0D2* nowInAreaChanged; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points; // 0x68
		::System::Single y; // 0x70
		::System::Single height; // 0x74
		::System::String* eventName; // 0x78
		::System::String* enterSoundAction; // 0x80
		::System::String* exitSoundAction; // 0x88
		::System::Boolean simulateNearest3DPosition; // 0x90
		::System::Boolean useListenerPosition; // 0x91
		::System::String* soundAreaKey; // 0x98
		::System::Collections::Generic::List_1<::System::String*>* activeWhenSoundSceneTags; // 0xA0
		::System::Collections::Generic::List_1<::System::String*>* inactiveWhenSoundSceneTags; // 0xA8
		::System::Boolean active_UseDistance; // 0xB0
		::System::Single active_Distance; // 0xB4
		::System::Boolean active_LeaveHeight; // 0xB8
		::System::Single active_LeaveHeightDistance; // 0xBC
		::System::Boolean spacial_Enable; // 0xC0
		::System::Int32 spatial_Priority; // 0xC4
		::System::String* spatial_ReverbAuxBus; // 0xC8
		::System::Single spatial_ReverbLevel; // 0xD0
		::System::Single spatial_WallOcclusion; // 0xD4
		::System::Single spatial_AuxSendLevelToSelf; // 0xD8
		::System::Boolean subArea_Enable; // 0xDC
		::System::String* subArea_Name; // 0xE0
		::System::Collections::Generic::List_1<::MoleMole::Audio::SoundSubScriptBase*>* subScripts; // 0xE8

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

		::System::Boolean IsPointInPolygon(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_ISPOINTINPOLYGON_OFFSET))(this, a1);
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

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* GetPointsInWorld()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_GETPOINTSINWORLD_OFFSET))(this);
		}

		::System::Void ModifyWorldPosOfIndex(::UnityEngine::Vector2 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_MODIFYWORLDPOSOFINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void AddWorldPos(::UnityEngine::Vector2 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_ADDWORLDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveAtIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_REMOVEATINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_4BFEBAF005497A7E(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_METHOD_5_4BFEBAF005497A7E_OFFSET))(this, a1);
		}
	};
}
