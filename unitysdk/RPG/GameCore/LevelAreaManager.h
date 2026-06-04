#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_278;
class Class_1_004034A1FAAF468A;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class ICinemachineCamera; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAnchorInfo; }
namespace RPG::GameCore { class LevelAreaActiveVirtualCameraParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_LEVELAREAMANAGER_ACQUIREACTIVEVCAMPARAM_OFFSET UNITYSDK_OFFSET(0xCE37D30)
#define RPG_GAMECORE_LEVELAREAMANAGER_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xCE361C0)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDGROUPAREA_OFFSET UNITYSDK_OFFSET(0xCE33D50)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREAASYNC_OFFSET UNITYSDK_OFFSET(0xCE34770)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_1_OFFSET UNITYSDK_OFFSET(0xCE34910)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_OFFSET UNITYSDK_OFFSET(0xCE347E0)
#define RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVEALLVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xCE36CA0)
#define RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVECURRENTVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xCE36C40)
#define RPG_GAMECORE_LEVELAREAMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE332D0)
#define RPG_GAMECORE_LEVELAREAMANAGER_FINDANCHOR_OFFSET UNITYSDK_OFFSET(0xCE35DE0)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERATRANSFORMFROMANCHORMAP_OFFSET UNITYSDK_OFFSET(0xCE37A00)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xCE37700)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETAREANAMEBYGROUPID_OFFSET UNITYSDK_OFFSET(0xCE35B40)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETCOIN40ANCHOR_OFFSET UNITYSDK_OFFSET(0xCE35F20)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREANAMEBYCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xCE34720)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREAROOTTRANS_OFFSET UNITYSDK_OFFSET(0xCE32E40)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETMONSTERCENTERTRANS_OFFSET UNITYSDK_OFFSET(0xCE33070)
#define RPG_GAMECORE_LEVELAREAMANAGER_GET_HASACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xCE38250)
#define RPG_GAMECORE_LEVELAREAMANAGER_GET_LASTLEVELAREANAME_OFFSET UNITYSDK_OFFSET(0xCE37E60)
#define RPG_GAMECORE_LEVELAREAMANAGER_GET_STAGEGOROOT_OFFSET UNITYSDK_OFFSET(0xCE382B0)
#define RPG_GAMECORE_LEVELAREAMANAGER_HASAREA_OFFSET UNITYSDK_OFFSET(0xCE35AB0)
#define RPG_GAMECORE_LEVELAREAMANAGER_REGISTERMAINCAMERAANCHOR_OFFSET UNITYSDK_OFFSET(0xCE35730)
#define RPG_GAMECORE_LEVELAREAMANAGER_RELEASEACTIVEVCAMPARAM_OFFSET UNITYSDK_OFFSET(0xCE37DA0)
#define RPG_GAMECORE_LEVELAREAMANAGER_REMOVELEVELAREA_OFFSET UNITYSDK_OFFSET(0xCE352B0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETBASETRANSFORM_OFFSET UNITYSDK_OFFSET(0xCE37CA0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0xCE32E90)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xCE32F60)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xCE32FF0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0xCE331D0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xCE330C0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xCE33150)
#define RPG_GAMECORE_LEVELAREAMANAGER_SET_STAGEGOROOT_OFFSET UNITYSDK_OFFSET(0xCE382C0)
#define RPG_GAMECORE_LEVELAREAMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xCE336B0)
#define RPG_GAMECORE_LEVELAREAMANAGER_TRYFINDANCHORBYGROUPIDANDID_OFFSET UNITYSDK_OFFSET(0xCE35BD0)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_B__13_0_OFFSET UNITYSDK_OFFSET(0xCE382D0)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDWAITTICKDEACTIVEVCAM_OFFSET UNITYSDK_OFFSET(0xCE375A0)
#define RPG_GAMECORE_LEVELAREAMANAGER__CHECKVCAMDISABLEPROTECTWHENBLENDING_OFFSET UNITYSDK_OFFSET(0xCE338F0)
#define RPG_GAMECORE_LEVELAREAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCE32AA0)
#define RPG_GAMECORE_LEVELAREAMANAGER__ISDYNAMICANCHOR_OFFSET UNITYSDK_OFFSET(0xCE37F10)
#define RPG_GAMECORE_LEVELAREAMANAGER__ONLEVELAREALOADED_OFFSET UNITYSDK_OFFSET(0xCE349F0)
#define RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFOLIST_OFFSET UNITYSDK_OFFSET(0xCE33720)
#define RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFO_OFFSET UNITYSDK_OFFSET(0xCE37F90)
#define RPG_GAMECORE_LEVELAREAMANAGER__REMOVEWAITTICKDEACTIVEVCAM_OFFSET UNITYSDK_OFFSET(0xCE36BD0)
#define RPG_GAMECORE_LEVELAREAMANAGER__TICKWAITDEACTIVEVCAM_OFFSET UNITYSDK_OFFSET(0xCE33AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaManager_TypeDefinitionIndex = 54046;

	class LevelAreaManager : public ::System::Object
	{
	public:
		// static const ::System::Single VIRTUAL_CAMERA_NEAR_CLIP; // 0x0
		// static const ::System::Single VIRTUAL_CAMERA_FAR_CLIP; // 0x0
		::UnityEngine::GameObject* _CameraAnchorGO; // 0x10
		::System::String* _ActiveVirtualCameraAreaName; // 0x18
		::RPG::Client::IAssetOperation* _LoadLevelAreaAssetOpt; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>*>* _AnchorMap; // 0x28
		::UnityEngine::Transform* _BaseTransform; // 0x30
		::UnityEngine::GameObject* _RotatableRegionAnchorGO; // 0x38
		::System::Collections::Generic::Stack_1<::RPG::GameCore::LevelAreaActiveVirtualCameraParam*>* _ActiveVCamParamPool; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* _WaitDeactiveCamera; // 0x48
		::UnityEngine::GameObject* _StageGORoot_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* _DynamicAnchorInfoList; // 0x58
		::UnityEngine::GameObject* _MonsterCenterGO; // 0x60
		::UnityEngine::GameObject* _LevelAreaGORoot; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _GroupIDToAreaName; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _LookAtCameraTemplateAsset; // 0x78
		::System::Collections::Generic::List_1<::Class_1_004034A1FAAF468A*>* _LevelAreaList; // 0x80
		::Cinemachine::ICinemachineCamera* _VCamNeedDisableProtectWhenBlending; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLevelAreaRootTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREAROOTTRANS_OFFSET))(this);
		}

		::System::Void SetLevelAreaWorldPositionOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITIONOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetLevelAreaWorldPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLevelAreaWorldRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetMonsterCenterTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETMONSTERCENTERTRANS_OFFSET))(this);
		}

		::System::Void SetMonsterCenterWorldPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetMonsterCenterWorldRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDROTATION_OFFSET))(this, a1);
		}

		::System::Void SetMonsterCenterPositionOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERPOSITIONOFFSET_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::String* AddGroupArea(::System::String* a1, ::Il2CppArray<::RPG::GameCore::LevelAnchorInfo*>* a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::LevelAnchorInfo*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDGROUPAREA_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::String* GetLevelAreaNameByConfigPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREANAMEBYCONFIGPATH_OFFSET))(a1);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* AddLevelAreaAsync(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREAASYNC_OFFSET))(this, a1);
		}

		::System::String* AddLevelArea(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_OFFSET))(this, a1, a2);
		}

		::System::String* AddLevelArea_1(::System::String* a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveLevelArea(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_REMOVELEVELAREA_OFFSET))(this, a1);
		}

		::System::Boolean RegisterMainCameraAnchor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_REGISTERMAINCAMERAANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasArea(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_HASAREA_OFFSET))(this, a1);
		}

		::System::String* GetAreaNameByGroupID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETAREANAMEBYGROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::AnchorInfo* TryFindAnchorByGroupIDAndID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_TRYFINDANCHORBYGROUPIDANDID_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AnchorInfo* FindAnchor(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_FINDANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* GetCoin40Anchor(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETCOIN40ANCHOR_OFFSET))(this, a1);
		}

		::System::Void ActiveVirtualCamera(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5, ::System::Nullable_1<::UnityEngine::Vector2> a6, ::System::Boolean a7, ::RPG::GameCore::LevelAreaActiveVirtualCameraParam* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Boolean, ::RPG::GameCore::LevelAreaActiveVirtualCameraParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ACTIVEVIRTUALCAMERA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void DeActiveCurrentVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVECURRENTVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void DeActiveAllVirtualCamera(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVEALLVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineVirtualCamera* GetActiveVirtualCamera(::System::String* a1, ::System::String* a2)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AnchorInfo* GetActiveVirtualCameraTransformFromAnchorMap(::System::String* a1)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERATRANSFORMFROMANCHORMAP_OFFSET))(this, a1);
		}

		::System::Void SetBaseTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETBASETRANSFORM_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelAreaActiveVirtualCameraParam* AcquireActiveVCamParam()
		{
			return ((::RPG::GameCore::LevelAreaActiveVirtualCameraParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ACQUIREACTIVEVCAMPARAM_OFFSET))(this);
		}

		::System::Void ReleaseActiveVCamParam(::RPG::GameCore::LevelAreaActiveVirtualCameraParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaActiveVirtualCameraParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_RELEASEACTIVEVCAMPARAM_OFFSET))(this, a1);
		}

		::System::String* get_LastLevelAreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GET_LASTLEVELAREANAME_OFFSET))(this);
		}

		::System::String* _OnLevelAreaLoaded(::UnityEngine::Object* a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Object*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ONLEVELAREALOADED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _IsDynamicAnchor(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ISDYNAMICANCHOR_OFFSET))(this, a1);
		}

		::System::Void _RefreshDynamicAnchorInfoList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFOLIST_OFFSET))(this);
		}

		::System::Void _RefreshDynamicAnchorInfo(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFO_OFFSET))(this, a1);
		}

		::System::Void _CheckVCamDisableProtectWhenBlending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__CHECKVCAMDISABLEPROTECTWHENBLENDING_OFFSET))(this);
		}

		::System::Void _TickWaitDeactiveVCam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__TICKWAITDEACTIVEVCAM_OFFSET))(this);
		}

		::System::Void _AddWaitTickDeactiveVCam(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDWAITTICKDEACTIVEVCAM_OFFSET))(this, a1);
		}

		::System::Void _RemoveWaitTickDeactiveVCam(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__REMOVEWAITTICKDEACTIVEVCAM_OFFSET))(this, a1);
		}

		::System::Boolean get_HasActiveVirtualCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GET_HASACTIVEVIRTUALCAMERA_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_StageGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GET_STAGEGOROOT_OFFSET))(this);
		}

		::System::Void set_StageGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SET_STAGEGOROOT_OFFSET))(this, a1);
		}

		::System::Boolean _AddLevelAreaAsync_b__13_0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_B__13_0_OFFSET))(this, a1);
		}
	};
}
