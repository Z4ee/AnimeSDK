#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1F91F923AA05A3FA;
namespace RPG::Client { class UIMap3DContainerConfig; }
namespace RPG::Client { class UIMap3DContainer_IPoseTransformProvider; }
namespace System { class Object; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIMAP3DCONTAINER_GETMAPBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0xB406780)
#define RPG_CLIENT_UIMAP3DCONTAINER_GETMAPBOUNDINGSPHERE_OFFSET UNITYSDK_OFFSET(0xB4079A0)
#define RPG_CLIENT_UIMAP3DCONTAINER_GETMAPROTATION_OFFSET UNITYSDK_OFFSET(0xB406630)
#define RPG_CLIENT_UIMAP3DCONTAINER_GET_VIEWMODELROTATION_OFFSET UNITYSDK_OFFSET(0xB405B40)
#define RPG_CLIENT_UIMAP3DCONTAINER_GET__CURRENTMODELUP_OFFSET UNITYSDK_OFFSET(0xB409530)
#define RPG_CLIENT_UIMAP3DCONTAINER_GET__INITMODELUP_OFFSET UNITYSDK_OFFSET(0xB40BDB0)
#define RPG_CLIENT_UIMAP3DCONTAINER_GET__MAPMODELTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB405AE0)
#define RPG_CLIENT_UIMAP3DCONTAINER_GET__POSETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xB4078A0)
#define RPG_CLIENT_UIMAP3DCONTAINER_INIT_OFFSET UNITYSDK_OFFSET(0xB4055D0)
#define RPG_CLIENT_UIMAP3DCONTAINER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xB4088D0)
#define RPG_CLIENT_UIMAP3DCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB409120)
#define RPG_CLIENT_UIMAP3DCONTAINER_RESET_OFFSET UNITYSDK_OFFSET(0xB408660)
#define RPG_CLIENT_UIMAP3DCONTAINER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB4085F0)
#define RPG_CLIENT_UIMAP3DCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB40C030)
#define RPG_CLIENT_UIMAP3DCONTAINER__CLAMPPITCH_OFFSET UNITYSDK_OFFSET(0xB40B610)
#define RPG_CLIENT_UIMAP3DCONTAINER__CLEARDAMPINGRECOVERSTATES_OFFSET UNITYSDK_OFFSET(0xB4086E0)
#define RPG_CLIENT_UIMAP3DCONTAINER__CLEARROTATELOCK_OFFSET UNITYSDK_OFFSET(0xB4093C0)
#define RPG_CLIENT_UIMAP3DCONTAINER__COMPUTEPITCHOUTRATIO_OFFSET UNITYSDK_OFFSET(0xB40A160)
#define RPG_CLIENT_UIMAP3DCONTAINER__COMPUTEROTATESPEEDDAMPING_OFFSET UNITYSDK_OFFSET(0xB409410)
#define RPG_CLIENT_UIMAP3DCONTAINER__COMPUTEROTATESPEEDDEFAULT_OFFSET UNITYSDK_OFFSET(0xB409270)
#define RPG_CLIENT_UIMAP3DCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xB40BF90)
#define RPG_CLIENT_UIMAP3DCONTAINER__FETCHROTATEINPUT_OFFSET UNITYSDK_OFFSET(0xB409E20)
#define RPG_CLIENT_UIMAP3DCONTAINER__INITPOSETRANSPROVIDER_OFFSET UNITYSDK_OFFSET(0xB405DA0)
#define RPG_CLIENT_UIMAP3DCONTAINER__INITUNWALKABLE_OFFSET UNITYSDK_OFFSET(0xB4063A0)
#define RPG_CLIENT_UIMAP3DCONTAINER__ONMAP3DTOUCHENABLED_OFFSET UNITYSDK_OFFSET(0xB40B5B0)
#define RPG_CLIENT_UIMAP3DCONTAINER__RECOVERPITCH_OFFSET UNITYSDK_OFFSET(0xB409740)
#define RPG_CLIENT_UIMAP3DCONTAINER__ROTATEMODEL_OFFSET UNITYSDK_OFFSET(0xB408C20)
#define RPG_CLIENT_UIMAP3DCONTAINER__SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0xB406100)
#define RPG_CLIENT_UIMAP3DCONTAINER__STARTRESETROTATION_OFFSET UNITYSDK_OFFSET(0xB408730)
#define RPG_CLIENT_UIMAP3DCONTAINER__SYNCMAPTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB406210)
#define RPG_CLIENT_UIMAP3DCONTAINER__UPDATEMAPTRANSPARENCY_OFFSET UNITYSDK_OFFSET(0xB40A8C0)
#define RPG_CLIENT_UIMAP3DCONTAINER__UPDATERESET_OFFSET UNITYSDK_OFFSET(0xB408970)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMap3DContainer_TypeDefinitionIndex = 63658;

	class UIMap3DContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_s_Opacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMap3DContainer_TypeDefinitionIndex)->GetStaticField(0xC100);
		}
		static ::System::Int32* StaticGet_s_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMap3DContainer_TypeDefinitionIndex)->GetStaticField(0xC104);
		}
		::UnityEngine::Transform* MapIconContainer; // 0x18
		::System::Single ViewModelRotationY; // 0x20
		::System::Single ViewModelRotationX; // 0x24
		::System::Single RotationSpeedX; // 0x28
		::System::Single RotationSpeedY; // 0x2C
		::System::Single RotationSpeedXDamping; // 0x30
		::System::Single MobileRotationRatioX; // 0x34
		::System::Single MobileRotationRatioY; // 0x38
		::System::Single ControllerRotationRatioX; // 0x3C
		::System::Single ControllerRotationRatioY; // 0x40
		::System::Boolean EnableRotateAxisLock; // 0x44
		::System::Single RotateAxisLockDuration; // 0x48
		::System::Single MaxPitch; // 0x4C
		::System::Single MinPitch; // 0x50
		::System::Single PitchRecoverTime; // 0x54
		::System::Single PitchOuterRatio; // 0x58
		::System::Single PitchOuterRatioController; // 0x5C
		::System::Single ActivePoseMaxAlpha; // 0x60
		::System::Single InactivePoseMaxAlpha; // 0x64
		::System::Single PoseMinAlpha; // 0x68
		::System::Single UnwalkableAreaAlpha; // 0x6C
		::System::Single WalkableAreaGreyScale; // 0x70
		::System::Single WalkableEdgeGreyScale; // 0x74
		::System::Single UnwalkableAreaGreyScale; // 0x78
		::System::Single BufferAngle; // 0x7C
		::System::Single IconMinAlpha; // 0x80
		::System::Single ModelIconMinAlpha; // 0x84
		::System::Single PlayerIconMinAlpha; // 0x88
		::System::Single ModelResetDuration; // 0x8C
		::UnityEngine::AnimationCurve* ModelResetCurve; // 0x90
		::Il2CppArray<::System::Single>* PoseAlphas; // 0x98
		::RPG::Client::UIMap3DContainer_IPoseTransformProvider* _PoseTransformProvider; // 0xA0
		::System::Boolean _Initialized; // 0xA8
		::Class_1_1F91F923AA05A3FA* _InputController; // 0xB0
		::RPG::Client::UIMap3DContainerConfig* _Config; // 0xB8
		::System::Boolean _LockYRotate; // 0xC0
		::System::Boolean _LockXRotate; // 0xC1
		::System::Single _LockRotateAxisBeginTime; // 0xC4
		::System::Single _RotationVelocityX; // 0xC8
		::System::Single _PitchRecoverVelocity; // 0xCC
		::System::Boolean _ShouldNotifyMap3DColliderUpdate; // 0xD0
		::System::Boolean _IsReseting; // 0xD1
		::System::Nullable_1<::UnityEngine::Quaternion> _InitRotation; // 0xD4
		::UnityEngine::Quaternion _ResetStartRotation; // 0xE8
		::System::Single _CurrentCenteringTime; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::Client::UIMap3DContainerConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMap3DContainerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_INIT_OFFSET))(this, config);
		}

		::UnityEngine::Quaternion GetMapRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_GETMAPROTATION_OFFSET))(this);
		}

		::UnityEngine::Bounds GetMapBoundingBox()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_GETMAPBOUNDINGBOX_OFFSET))(this);
		}

		::UnityEngine::BoundingSphere GetMapBoundingSphere()
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_GETMAPBOUNDINGSPHERE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_UPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_RESET_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _RotateModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__ROTATEMODEL_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> _ComputeRotateSpeedDefault()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__COMPUTEROTATESPEEDDEFAULT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> _ComputeRotateSpeedDamping()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__COMPUTEROTATESPEEDDAMPING_OFFSET))(this);
		}

		::System::Void _ClearRotateLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__CLEARROTATELOCK_OFFSET))(this);
		}

		::System::Void _SyncMapTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__SYNCMAPTRANSFORM_OFFSET))(this);
		}

		static ::System::Void _SetLayerRecursively(::UnityEngine::GameObject* go, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__SETLAYERRECURSIVELY_OFFSET))(go, layer);
		}

		::System::Void _UpdateMapTransparency()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__UPDATEMAPTRANSPARENCY_OFFSET))(this);
		}

		::System::Void _InitPoseTransProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__INITPOSETRANSPROVIDER_OFFSET))(this);
		}

		::System::Void _InitUnwalkable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__INITUNWALKABLE_OFFSET))(this);
		}

		::System::Void _OnMap3DTouchEnabled(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__ONMAP3DTOUCHENABLED_OFFSET))(this, param);
		}

		::System::Boolean _ComputePitchOutRatio(::System::Single speed, ::System::Single& ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__COMPUTEPITCHOUTRATIO_OFFSET))(this, speed, ratio);
		}

		::System::Void _ClampPitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__CLAMPPITCH_OFFSET))(this);
		}

		::System::Boolean _RecoverPitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__RECOVERPITCH_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> _FetchRotateInput()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__FETCHROTATEINPUT_OFFSET))(this);
		}

		::System::Void _StartResetRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__STARTRESETROTATION_OFFSET))(this);
		}

		::System::Void _UpdateReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__UPDATERESET_OFFSET))(this);
		}

		::System::Void _ClearDampingRecoverStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER__CLEARDAMPINGRECOVERSTATES_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_ViewModelRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_GET_VIEWMODELROTATION_OFFSET))(this);
		}

		::UnityEngine::Transform* get__MapModelTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_GET__MAPMODELTRANSFORM_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Transform*>* get__PoseTransforms()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_GET__POSETRANSFORMS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get__InitModelUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_GET__INITMODELUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 get__CurrentModelUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_GET__CURRENTMODELUP_OFFSET))(this);
		}
	};
}
