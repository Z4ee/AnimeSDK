#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/SpawnPointMaskRegion.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_303;
class Class_1_181A04F78EA47987;
class Class_1_82AD18310A9D6C9D;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class MonoCurveMoveObject; }
namespace MoleMole { class MonoDestructionObject; }
namespace MoleMole { class MonoEntity; }
namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoInterestPoint; }
namespace MoleMole { class MonoMainCityObject; }
namespace MoleMole { class MonoPartySceneObject; }
namespace MoleMole { class MonoSceneFindWayObject; }
namespace MoleMole { class MonoSceneMoveObject; }
namespace MoleMole { class MonoSceneToFindObject; }
namespace MoleMole { class MonoSimpleRigidbodyObject; }
namespace MoleMole { class MonoSpawnMonsterConfig; }
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole { class MonoSpawnPointMaskRegion; }
namespace MoleMole { class MonoStageCameraConfig; }
namespace MoleMole { class MonoStageEnv_Class_1_E314997DBD1559E0; }
namespace MoleMole { class MonoTerrainZone3D; }
namespace MoleMole { class MonoTerrainZoneVoxel; }
namespace MoleMole { class MonoVehicleObject; }
namespace MoleMole { class MonoWayPath; }
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::SceneMark { class DoorMark; }
namespace MoleMole::SceneMark { class MonoSceneMarkRoot; }
namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSTAGEENV_AWAKE_OFFSET UNITYSDK_OFFSET(0x129CD210)
#define MOLEMOLE_MONOSTAGEENV_BUILDSTAGEENV_OFFSET UNITYSDK_OFFSET(0x129CD2E0)
#define MOLEMOLE_MONOSTAGEENV_CLEAR_OFFSET UNITYSDK_OFFSET(0x129D2470)
#define MOLEMOLE_MONOSTAGEENV_CREATEDYNAMICSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x129D2B10)
#define MOLEMOLE_MONOSTAGEENV_CREATESPAWNPOINTMASKREGION_OFFSET UNITYSDK_OFFSET(0x129D3560)
#define MOLEMOLE_MONOSTAGEENV_FINDMARKNODEBYSHORTNAME_OFFSET UNITYSDK_OFFSET(0x129D1210)
#define MOLEMOLE_MONOSTAGEENV_GETALLCURVEMOVEOBJECTS_OFFSET UNITYSDK_OFFSET(0x129CCDD0)
#define MOLEMOLE_MONOSTAGEENV_GETALLCURVYSPLINE_OFFSET UNITYSDK_OFFSET(0x129D10B0)
#define MOLEMOLE_MONOSTAGEENV_GETALLDESTRUCTIONOBJECTS_OFFSET UNITYSDK_OFFSET(0x129CCD90)
#define MOLEMOLE_MONOSTAGEENV_GETALLINTERESTPOINTS_OFFSET UNITYSDK_OFFSET(0x129CCB70)
#define MOLEMOLE_MONOSTAGEENV_GETALLMAINCITYSCENEOBJECTS_OFFSET UNITYSDK_OFFSET(0x129CCD50)
#define MOLEMOLE_MONOSTAGEENV_GETALLPARTYSCENEOBJECTS_OFFSET UNITYSDK_OFFSET(0x129CCEA0)
#define MOLEMOLE_MONOSTAGEENV_GETALLSCENEFINDWAYOBJECTS_OFFSET UNITYSDK_OFFSET(0x129CCE50)
#define MOLEMOLE_MONOSTAGEENV_GETALLSCENEMOVEOBJECTS_OFFSET UNITYSDK_OFFSET(0x129CCCD0)
#define MOLEMOLE_MONOSTAGEENV_GETALLSCENEOBJECTS_OFFSET UNITYSDK_OFFSET(0x129CCC90)
#define MOLEMOLE_MONOSTAGEENV_GETALLSIMPLERIGIDBODYOBJECTS_OFFSET UNITYSDK_OFFSET(0x129CCE10)
#define MOLEMOLE_MONOSTAGEENV_GETALLSTAGEDOORS_OFFSET UNITYSDK_OFFSET(0x129D11C0)
#define MOLEMOLE_MONOSTAGEENV_GETALLVEHICLEOBJECTS_OFFSET UNITYSDK_OFFSET(0x129CCD10)
#define MOLEMOLE_MONOSTAGEENV_GETALLWAYPATHSNOALLOC_OFFSET UNITYSDK_OFFSET(0x129D0CD0)
#define MOLEMOLE_MONOSTAGEENV_GETCOLLIDEREVENTDISPATCHER_OFFSET UNITYSDK_OFFSET(0x129D0600)
#define MOLEMOLE_MONOSTAGEENV_GETCURVYSPLINE_OFFSET UNITYSDK_OFFSET(0x129D0FD0)
#define MOLEMOLE_MONOSTAGEENV_GETDOOR_OFFSET UNITYSDK_OFFSET(0x129D1100)
#define MOLEMOLE_MONOSTAGEENV_GETDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x129D0E40)
#define MOLEMOLE_MONOSTAGEENV_GETENTITYMODELMODIFIERBYSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x129D2410)
#define MOLEMOLE_MONOSTAGEENV_GETRANDOMSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x129D07F0)
#define MOLEMOLE_MONOSTAGEENV_GETSPAWNMONSTERCONFIGBYSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x129D1EB0)
#define MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINTGROUPLIST_OFFSET UNITYSDK_OFFSET(0x129D15A0)
#define MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINTMASKREGION_OFFSET UNITYSDK_OFFSET(0x129D3BA0)
#define MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x129D24E0)
#define MOLEMOLE_MONOSTAGEENV_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x129CCBB0)
#define MOLEMOLE_MONOSTAGEENV_GETWAYENTITYLIST_OFFSET UNITYSDK_OFFSET(0x129D3470)
#define MOLEMOLE_MONOSTAGEENV_GETWAYPATH_OFFSET UNITYSDK_OFFSET(0x129D0BE0)
#define MOLEMOLE_MONOSTAGEENV_GET_DYNAMICOBJECTMANAGER_OFFSET UNITYSDK_OFFSET(0x129CCB40)
#define MOLEMOLE_MONOSTAGEENV_GET_EVNDESIGNGO_OFFSET UNITYSDK_OFFSET(0x129CCB30)
#define MOLEMOLE_MONOSTAGEENV_GET_MONOSTAGECAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x129CCB60)
#define MOLEMOLE_MONOSTAGEENV_GET_SPAWNPOINTMASKREGIONS_OFFSET UNITYSDK_OFFSET(0x129D3550)
#define MOLEMOLE_MONOSTAGEENV_GET_SPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x129D24D0)
#define MOLEMOLE_MONOSTAGEENV_GET_STAGEPREHITBOUNDS_OFFSET UNITYSDK_OFFSET(0x129CCB50)
#define MOLEMOLE_MONOSTAGEENV_GET_TERRAINVOXEL_OFFSET UNITYSDK_OFFSET(0x129CD080)
#define MOLEMOLE_MONOSTAGEENV_GET_TERRAINZONE_OFFSET UNITYSDK_OFFSET(0x129CCEF0)
#define MOLEMOLE_MONOSTAGEENV_INITSPAWNPOINTMASKREGIONS_OFFSET UNITYSDK_OFFSET(0x129CFD80)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_086B8F3BEB129044_OFFSET UNITYSDK_OFFSET(0x129CD9E0)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x129D0220)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_1BB114A39722C94E_OFFSET UNITYSDK_OFFSET(0x129CF640)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_1C3A83F41FF8C386_OFFSET UNITYSDK_OFFSET(0x129D2640)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x129CDF20)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_3986038F8A75EC34_OFFSET UNITYSDK_OFFSET(0x129D1CE0)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0x129D4080)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x129CF160)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_81BB58ABD0B02221_OFFSET UNITYSDK_OFFSET(0x129D43E0)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x129D4610)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_9755255E23633868_OFFSET UNITYSDK_OFFSET(0x129D4620)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x129CFBD0)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_A984AD179B91DF9C_OFFSET UNITYSDK_OFFSET(0x129D1F10)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x129CDCD0)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x129CF7D0)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_ED665226DF4C8866_OFFSET UNITYSDK_OFFSET(0x129CD860)
#define MOLEMOLE_MONOSTAGEENV_METHOD_5_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0x129CEC10)
#define MOLEMOLE_MONOSTAGEENV_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x129D1350)
#define MOLEMOLE_MONOSTAGEENV_ONENABLE_OFFSET UNITYSDK_OFFSET(0x129CD250)
#define MOLEMOLE_MONOSTAGEENV_QUERYALLSPAWNPOINTBYPREFIX_OFFSET UNITYSDK_OFFSET(0x129D2750)
#define MOLEMOLE_MONOSTAGEENV_REBUILDSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x129D04F0)
#define MOLEMOLE_MONOSTAGEENV_REGISTERSPAWNPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x129D3150)
#define MOLEMOLE_MONOSTAGEENV_RESETDYNAMICOBJECTLAYER_OFFSET UNITYSDK_OFFSET(0x129D0F60)
#define MOLEMOLE_MONOSTAGEENV_SETDYNAMICOBJECTLAYERACTIVE_OFFSET UNITYSDK_OFFSET(0x129D0EF0)
#define MOLEMOLE_MONOSTAGEENV_UPDATE_OFFSET UNITYSDK_OFFSET(0x129D1270)
#define MOLEMOLE_MONOSTAGEENV__CCTOR_OFFSET UNITYSDK_OFFSET(0x129D3FE0)
#define MOLEMOLE_MONOSTAGEENV__CTOR_OFFSET UNITYSDK_OFFSET(0x129D3C80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageEnv_TypeDefinitionIndex = 45659;

	class MonoStageEnv : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>** StaticGet_Field_5_39()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>**)Il2CppClass::FromTypeDefinitionIndex(MonoStageEnv_TypeDefinitionIndex)->GetStaticField(0x3E8A0);
		}
		static ::MoleMole::MonoStageEnv** StaticGet_S_AdditiveStageEnv()
		{
			return (::MoleMole::MonoStageEnv**)Il2CppClass::FromTypeDefinitionIndex(MonoStageEnv_TypeDefinitionIndex)->GetStaticField(0x3E8A8);
		}
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_5_1()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoStageEnv_TypeDefinitionIndex)->GetStaticField(0x3E8B0);
		}
		::System::Boolean IsAdditiveEnv; // 0x18
		::MoleMole::SceneMark::MonoSceneMarkRoot* Field_5_7; // 0x20
		::Il2CppArray<::System::String*>* Field_5_6; // 0x28
		::Il2CppArray<::MoleMole::MonoSpawnPoint*>* Field_5_5; // 0x30
		::Il2CppArray<::MoleMole::Battle::ColliderEventDispatcher*>* Field_5_4; // 0x38
		::Il2CppArray<::MoleMole::MonoInterestPoint*>* Field_5_11; // 0x40
		::Il2CppArray<::MoleMole::MonoEntity*>* Field_5_10; // 0x48
		::Il2CppArray<::MoleMole::MonoMainCityObject*>* Field_5_9; // 0x50
		::Il2CppArray<::MoleMole::MonoDestructionObject*>* Field_5_8; // 0x58
		::Il2CppArray<::MoleMole::MonoCurveMoveObject*>* Field_5_15; // 0x60
		::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>* Field_5_14; // 0x68
		::Il2CppArray<::MoleMole::MonoSceneMoveObject*>* Field_5_13; // 0x70
		::Il2CppArray<::MoleMole::MonoVehicleObject*>* Field_5_12; // 0x78
		::Il2CppArray<::MoleMole::MonoSceneFindWayObject*>* Field_5_19; // 0x80
		::Il2CppArray<::MoleMole::MonoPartySceneObject*>* Field_5_18; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Cinemachine::CinemachineVirtualCamera*>* Field_5_17; // 0x90
		::Il2CppArray<::Class_1_82AD18310A9D6C9D*>* Field_5_16; // 0x98
		::Il2CppArray<::System::String*>* Field_5_23; // 0xA0
		::MoleMole::MonoStageCameraConfig* Field_5_22; // 0xA8
		::UnityEngine::GameObject* Field_5_21; // 0xB0
		::UnityEngine::GameObject* SpecialEnvInst; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoWayPath*>* Field_5_27; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*>* Field_5_26; // 0xC8
		::Class_1_181A04F78EA47987* Field_5_25; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>* Field_5_24; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoStageEnv_Class_1_E314997DBD1559E0*>* Field_5_31; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_5_30; // 0xE8
		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* Field_5_29; // 0xF0
		::System::Boolean Field_5_28; // 0xF8
		::MoleMole::MonoTerrainZone3D* Field_5_35; // 0x100
		::System::Int32 Field_5_34; // 0x108
		::MoleMole::MonoTerrainZoneVoxel* Field_5_33; // 0x110
		::System::Int32 Field_5_32; // 0x118
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoSpawnPoint*>* Field_5_38; // 0x120
		::UnityEngine::GameObject* Field_5_37; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_5_36; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MonoSceneToFindObject*>*>* sceneToFindObjectMap; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>* Field_5_42; // 0x140
		::UnityEngine::Transform* Field_5_41; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* get_EvnDesignGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_EVNDESIGNGO_OFFSET))(this);
		}

		::Class_1_181A04F78EA47987* get_dynamicObjectManager()
		{
			return ((::Class_1_181A04F78EA47987*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_DYNAMICOBJECTMANAGER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* get_StagePreHitBounds()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Bounds>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_STAGEPREHITBOUNDS_OFFSET))(this);
		}

		::MoleMole::MonoStageCameraConfig* get_monoStageCameraConfig()
		{
			return ((::MoleMole::MonoStageCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_MONOSTAGECAMERACONFIG_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoInterestPoint*>* GetAllInterestPoints()
		{
			return ((::Il2CppArray<::MoleMole::MonoInterestPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLINTERESTPOINTS_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* GetVirtualCamera(::System::String* a1)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::Il2CppArray<::MoleMole::MonoEntity*>* GetAllSceneObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSCENEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoSceneMoveObject*>* GetAllSceneMoveObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoSceneMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSCENEMOVEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoVehicleObject*>* GetAllVehicleObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoVehicleObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLVEHICLEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoMainCityObject*>* GetAllMainCitySceneObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoMainCityObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLMAINCITYSCENEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoDestructionObject*>* GetAllDestructionObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoDestructionObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLDESTRUCTIONOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoCurveMoveObject*>* GetAllCurveMoveObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoCurveMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLCURVEMOVEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>* GetAllSimpleRigidbodyObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSIMPLERIGIDBODYOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoSceneFindWayObject*>* GetAllSceneFindWayObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoSceneFindWayObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSCENEFINDWAYOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoPartySceneObject*>* GetAllPartySceneObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoPartySceneObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLPARTYSCENEOBJECTS_OFFSET))(this);
		}

		::MoleMole::MonoTerrainZone3D* get_TerrainZone()
		{
			return ((::MoleMole::MonoTerrainZone3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_TERRAINZONE_OFFSET))(this);
		}

		::MoleMole::MonoTerrainZoneVoxel* get_TerrainVoxel()
		{
			return ((::MoleMole::MonoTerrainZoneVoxel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_TERRAINVOXEL_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_ONENABLE_OFFSET))(this);
		}

		::System::Void BuildStageEnv(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_BUILDSTAGEENV_OFFSET))(this, a1, a2);
		}

		::System::Void RebuildSpawnPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_REBUILDSPAWNPOINTS_OFFSET))(this);
		}

		::MoleMole::Battle::ColliderEventDispatcher* GetColliderEventDispatcher(::System::String* a1)
		{
			return ((::MoleMole::Battle::ColliderEventDispatcher*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETCOLLIDEREVENTDISPATCHER_OFFSET))(this, a1);
		}

		::MoleMole::MonoSpawnPoint* GetRandomSpawnPoint(::System::String* a1)
		{
			return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETRANDOMSPAWNPOINT_OFFSET))(this, a1);
		}

		::MoleMole::MonoWayPath* GetWayPath(::System::String* a1)
		{
			return ((::MoleMole::MonoWayPath*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETWAYPATH_OFFSET))(this, a1);
		}

		::System::Void GetAllWayPathsNoAlloc(::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLWAYPATHSNOALLOC_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_303* GetDynamicObject(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_303*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETDYNAMICOBJECT_OFFSET))(this, a1);
		}

		::System::Void SetDynamicObjectLayerActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_SETDYNAMICOBJECTLAYERACTIVE_OFFSET))(this, a1);
		}

		::System::Void ResetDynamicObjectLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_RESETDYNAMICOBJECTLAYER_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* GetCurvySpline(::System::String* a1)
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETCURVYSPLINE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>* GetAllCurvySpline()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLCURVYSPLINE_OFFSET))(this);
		}

		::Class_1_82AD18310A9D6C9D* GetDoor(::System::String* a1)
		{
			return ((::Class_1_82AD18310A9D6C9D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETDOOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::Class_1_82AD18310A9D6C9D*>* GetAllStageDoors()
		{
			return ((::Il2CppArray<::Class_1_82AD18310A9D6C9D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSTAGEDOORS_OFFSET))(this);
		}

		::MoleMole::SceneMark::SceneMarkNode* FindMarkNodeByShortName(::System::String* a1)
		{
			return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_FINDMARKNODEBYSHORTNAME_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetSpawnPointGroupList(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINTGROUPLIST_OFFSET))(this, a1, a2);
		}

		::MoleMole::MonoSpawnMonsterConfig* GetSpawnMonsterConfigBySpawnPoint(::System::String* a1)
		{
			return ((::MoleMole::MonoSpawnMonsterConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETSPAWNMONSTERCONFIGBYSPAWNPOINT_OFFSET))(this, a1);
		}

		::MoleMole::MonoEntityModelModifier* GetEntityModelModifierBySpawnPoint(::System::String* a1)
		{
			return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETENTITYMODELMODIFIERBYSPAWNPOINT_OFFSET))(this, a1);
		}

		::System::Void Clear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_CLEAR_OFFSET))(this, a1);
		}

		::Il2CppArray<::MoleMole::MonoSpawnPoint*>* get_spawnPoints()
		{
			return ((::Il2CppArray<::MoleMole::MonoSpawnPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_SPAWNPOINTS_OFFSET))(this);
		}

		::MoleMole::MonoSpawnPoint* GetSpawnPoint(::System::String* a1, ::System::Boolean a2)
		{
			return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* QueryAllSpawnPointByPrefix(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_QUERYALLSPAWNPOINTBYPREFIX_OFFSET))(this, a1);
		}

		::System::Boolean CreateDynamicSpawnPoint(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_CREATEDYNAMICSPAWNPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterSpawnPointEntity(::System::Int32 a1, ::MoleMole::EntityHandle a2, ::MoleMole::MonoSceneToFindObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle, ::MoleMole::MonoSceneToFindObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_REGISTERSPAWNPOINTENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* GetWayEntityList(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETWAYENTITYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>* get_SpawnPointMaskRegions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_SPAWNPOINTMASKREGIONS_OFFSET))(this);
		}

		::System::Void InitSpawnPointMaskRegions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_INITSPAWNPOINTMASKREGIONS_OFFSET))(this);
		}

		::System::Void CreateSpawnPointMaskRegion(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::MoleMole::SpawnPointMaskRegion a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::SpawnPointMaskRegion))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_CREATESPAWNPOINTMASKREGION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>* GetSpawnPointMaskRegion(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINTMASKREGION_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_1C3A83F41FF8C386(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_1C3A83F41FF8C386_OFFSET))(this, a1);
		}

		::System::Void Method_5_3FAAA518D3F433CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_3FAAA518D3F433CC_OFFSET))(this);
		}

		::MoleMole::MonoStageEnv_Class_1_E314997DBD1559E0* Method_5_A984AD179B91DF9C(::System::String* a1)
		{
			return ((::MoleMole::MonoStageEnv_Class_1_E314997DBD1559E0*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_A984AD179B91DF9C_OFFSET))(this, a1);
		}

		::System::Void Method_5_086B8F3BEB129044(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_086B8F3BEB129044_OFFSET))(this, a1);
		}

		::System::Void Method_5_1BB114A39722C94E(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_1BB114A39722C94E_OFFSET))(this, a1);
		}

		::System::Void Method_5_2839AE123F8ECAA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_2839AE123F8ECAA7_OFFSET))(this);
		}

		::System::Void Method_5_81BB58ABD0B02221(::Class_1_82AD18310A9D6C9D* a1, ::MoleMole::SceneMark::DoorMark* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_82AD18310A9D6C9D*, ::MoleMole::SceneMark::DoorMark*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_81BB58ABD0B02221_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_ED665226DF4C8866(::Il2CppArray<::MoleMole::MonoSpawnPoint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::MonoSpawnPoint*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_ED665226DF4C8866_OFFSET))(this, a1);
		}

		::System::Void Method_5_8C8625211DA811AE(::Class_1_181A04F78EA47987* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_181A04F78EA47987*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_8C8625211DA811AE_OFFSET))(this, a1);
		}

		::System::Void Method_5_ACE888BF6F5BC5FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_ACE888BF6F5BC5FD_OFFSET))(this);
		}

		::System::Void Method_5_F04C04E6DB6D6224()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_F04C04E6DB6D6224_OFFSET))(this);
		}

		::System::Void Method_5_C9A3013DD208C696()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_C9A3013DD208C696_OFFSET))(this);
		}

		::System::Void Method_5_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_A984848EA3E436DA_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_5_3986038F8A75EC34(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_3986038F8A75EC34_OFFSET))(this, a1);
		}

		::System::Void Method_5_5EBCF276C230582C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_5EBCF276C230582C_OFFSET))(this);
		}

		::System::Void Method_5_1659BCB6D1A9FC34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_1659BCB6D1A9FC34_OFFSET))(this);
		}

		::System::Void Method_5_9755255E23633868(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_METHOD_5_9755255E23633868_OFFSET))(this, a1);
		}
	};
}
