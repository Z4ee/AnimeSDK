#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F4BC0015EEAF0CC2;
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace RPG::Client { class OrbSpawnConfig; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER_ADDHANDLEDORBUID_OFFSET UNITYSDK_OFFSET(0x1BC545A0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_ADDPRESENT_OFFSET UNITYSDK_OFFSET(0x1BC56890)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_ADDSPHERE_OFFSET UNITYSDK_OFFSET(0x1BC54E40)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BC534D0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_CHECKDRAGGEDSPHERES_OFFSET UNITYSDK_OFFSET(0x1BC547F0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_CHECKORBCANCLICK_OFFSET UNITYSDK_OFFSET(0x1BC54430)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_CLEARALLORBS_OFFSET UNITYSDK_OFFSET(0x1BC53AB0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_CLEARALLSPHERES_OFFSET UNITYSDK_OFFSET(0x1BC57590)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_GETALLSPHERES_OFFSET UNITYSDK_OFFSET(0x1BC577A0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1BC56F50)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_GETCURRENTHOVEREDSPHERE_OFFSET UNITYSDK_OFFSET(0x1BC57830)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_GETPREFABPATHFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1BC552B0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_GETSPHERE_OFFSET UNITYSDK_OFFSET(0x1BC57230)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_HANDLECLICKDETECTION_OFFSET UNITYSDK_OFFSET(0x1BC53C60)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_HANDLEDRAGDETECTION_OFFSET UNITYSDK_OFFSET(0x1BC54160)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_HASUIONBOARD_OFFSET UNITYSDK_OFFSET(0x1BC54370)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x1BC57870)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BC53A50)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_REGENPENDINGSPHERES_OFFSET UNITYSDK_OFFSET(0x1BC563D0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_REGISTERONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC578B0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_REGISTERONDRAGENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC57900)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_REMOVESPHERE_OFFSET UNITYSDK_OFFSET(0x1BC57320)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_SETBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1BC57700)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_SETRAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1BC57750)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1BC53A10)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BC53C10)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC57C30)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER__CHECKCOLLIDERPRESENTSPHERE_OFFSET UNITYSDK_OFFSET(0x1BC55D60)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER__CREATEPRESENT_OFFSET UNITYSDK_OFFSET(0x1BC56B80)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER__CREATESPHERE_OFFSET UNITYSDK_OFFSET(0x1BC55B10)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC57950)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER__GENSPAWNPOS_OFFSET UNITYSDK_OFFSET(0x1BC553E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbManager_TypeDefinitionIndex = 64521;

	class GridFightOrbManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::RPG::Client::OrbSpawnConfig*>** StaticGet_orbSpawnConfigs()
		{
			return (::Il2CppArray<::RPG::Client::OrbSpawnConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightOrbManager_TypeDefinitionIndex)->GetStaticField(0x392F0);
		}
		static ::System::String** StaticGet__PresentPrefab()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GridFightOrbManager_TypeDefinitionIndex)->GetStaticField(0x392F8);
		}
		static ::System::Single* StaticGet__PresentRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GridFightOrbManager_TypeDefinitionIndex)->GetStaticField(0xECF0);
		}
		::UnityEngine::BoxCollider* boundingBox; // 0x18
		::System::Single minDistance; // 0x20
		::UnityEngine::LayerMask raycastLayerMask; // 0x24
		::System::Boolean usePreGeneratedPositions; // 0x28
		::System::Boolean autoRegenerateOnStart; // 0x29
		::System::UInt32 _OrbNum; // 0x2C
		::System::Collections::Generic::List_1<::Class_1_F4BC0015EEAF0CC2*>* _PresentPos; // 0x30
		::System::Action_1<::UnityEngine::GameObject*>* OnSphereClicked; // 0x38
		::System::Action_1<::UnityEngine::GameObject*>* OnSphereDragEnter; // 0x40
		::UnityEngine::Camera* _mainCamera; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _generatedSpheres; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _pendingRegenerateSpheres; // 0x58
		::UnityEngine::GameObject* _currentHoveredSphere; // 0x60
		::UnityEngine::EventSystems::PointerEventData* _Pointer; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* _UIRaycastResult; // 0x70
		::System::Boolean _isDragging; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _draggedSpheres; // 0x80
		::UnityEngine::Vector3 _lastMousePosition; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _HandledOrbUIDToTime; // 0x98
		::RPG::Client::UIPrefabLoader* _PrefabLoader; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void HandleClickDetection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_HANDLECLICKDETECTION_OFFSET))(this);
		}

		::System::Void HandleDragDetection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_HANDLEDRAGDETECTION_OFFSET))(this);
		}

		::System::Void CheckDraggedSpheres(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_CHECKDRAGGEDSPHERES_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* AddSphere(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_ADDSPHERE_OFFSET))(this, a1);
		}

		::System::Void _CheckColliderPresentSphere()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER__CHECKCOLLIDERPRESENTSPHERE_OFFSET))(this);
		}

		::System::Void ReGenPendingSpheres()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_REGENPENDINGSPHERES_OFFSET))(this);
		}

		::UnityEngine::GameObject* AddPresent(::RPG::Client::GridFightPresentEntity* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_ADDPRESENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _GenSpawnPos(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER__GENSPAWNPOS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetSphere(::System::UInt32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_GETSPHERE_OFFSET))(this, a1);
		}

		::System::Void RemoveSphere(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_REMOVESPHERE_OFFSET))(this, a1);
		}

		::System::Void AddHandledOrbUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_ADDHANDLEDORBUID_OFFSET))(this, a1);
		}

		::System::Boolean CheckOrbCanClick(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_CHECKORBCANCLICK_OFFSET))(this, a1);
		}

		::System::Void ClearAllSpheres()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_CLEARALLSPHERES_OFFSET))(this);
		}

		::UnityEngine::GameObject* _CreateSphere(::System::String* a1, ::UnityEngine::Vector3 a2, ::RPG::Client::GridFightOrbEntityData* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER__CREATESPHERE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* _CreatePresent(::System::String* a1, ::Class_1_F4BC0015EEAF0CC2* a2, ::RPG::Client::GridFightPresentEntity* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::Class_1_F4BC0015EEAF0CC2*, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER__CREATEPRESENT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Bounds GetBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_GETBOUNDS_OFFSET))(this);
		}

		::System::Void SetBoundingBox(::UnityEngine::BoxCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_SETBOUNDINGBOX_OFFSET))(this, a1);
		}

		::System::Void SetRaycastLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_SETRAYCASTLAYERMASK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetAllSpheres()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_GETALLSPHERES_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCurrentHoveredSphere()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_GETCURRENTHOVEREDSPHERE_OFFSET))(this);
		}

		::System::Boolean IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_ISDRAGGING_OFFSET))(this);
		}

		::System::String* GetPrefabPathFromConfig(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_GETPREFABPATHFROMCONFIG_OFFSET))(this, a1);
		}

		::System::Void ClearAllOrbs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_CLEARALLORBS_OFFSET))(this);
		}

		::System::Boolean HasUIOnBoard(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_HASUIONBOARD_OFFSET))(this, a1);
		}

		::System::Void RegisterOnClickCallback(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_REGISTERONCLICKCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegisterOnDragEnterCallback(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER_REGISTERONDRAGENTERCALLBACK_OFFSET))(this, a1);
		}
	};
}
