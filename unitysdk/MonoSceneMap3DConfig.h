#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoSceneMap3DConfig_URPFogItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class ChangeLayerFlickHolder;
class Map3DFogItem;
class Map3DLiftRenderer;
class MonoSceneMap3DConfig_FloorPosInfo;
class MonoSceneMap3DConfig_LayerSpecialNodeInfo;
class MonoSceneMap3DConfig_LiftPosInfo;
class MonoSceneMap3DConfig_SubAreaPosInfo;
class MonoSceneMap3DFogAnimationConfig;
class NapSceneMap3DConfig;
namespace MoleMole { class MapChangeLayerConfig; }
namespace MoleMole { class MapChangeLayerSwitchConfig; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class Map3DVisualConfigItem; }
namespace MoleMole::Config { class SceneMap3DVisualConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define MONOSCENEMAP3DCONFIG_ADDSCENEMAPFOGITEM_OFFSET UNITYSDK_OFFSET(0xE86B5D0)
#define MONOSCENEMAP3DCONFIG_CREATELIFT_OFFSET UNITYSDK_OFFSET(0xE867370)
#define MONOSCENEMAP3DCONFIG_GENERATEBOTTOM_OFFSET UNITYSDK_OFFSET(0xE866CE0)
#define MONOSCENEMAP3DCONFIG_GENERATEOUTLINE_OFFSET UNITYSDK_OFFSET(0xE86A230)
#define MONOSCENEMAP3DCONFIG_GETMAPBOUNDS_OFFSET UNITYSDK_OFFSET(0xE8669A0)
#define MONOSCENEMAP3DCONFIG_GETVIRTUALMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xE868110)
#define MONOSCENEMAP3DCONFIG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE86C640)
#define MONOSCENEMAP3DCONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE86C250)
#define MONOSCENEMAP3DCONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE867AF0)
#define MONOSCENEMAP3DCONFIG_PLAYCHANGELAYERANIMATION_OFFSET UNITYSDK_OFFSET(0xE86C3D0)
#define MONOSCENEMAP3DCONFIG_PUSHFOGITEMDATATOGPU_OFFSET UNITYSDK_OFFSET(0xE86A760)
#define MONOSCENEMAP3DCONFIG_REFRESHCHARACTERARROWMATOCCLUSION_OFFSET UNITYSDK_OFFSET(0xE86ACC0)
#define MONOSCENEMAP3DCONFIG_REFRESHCOLORBOX_OFFSET UNITYSDK_OFFSET(0xE869870)
#define MONOSCENEMAP3DCONFIG_REFRESHFONT_OFFSET UNITYSDK_OFFSET(0xE868400)
#define MONOSCENEMAP3DCONFIG_REFRESHLIFTLAYER_OFFSET UNITYSDK_OFFSET(0xE867970)
#define MONOSCENEMAP3DCONFIG_REFRESHLIGHT_OFFSET UNITYSDK_OFFSET(0xE868B70)
#define MONOSCENEMAP3DCONFIG_REMOVESCENEMAPFOGITEM_OFFSET UNITYSDK_OFFSET(0xE86B6F0)
#define MONOSCENEMAP3DCONFIG_SETCURRENTLAYERCENTERANDHEIGHT_OFFSET UNITYSDK_OFFSET(0xE86B010)
#define MONOSCENEMAP3DCONFIG_TESTBOTTOM_OFFSET UNITYSDK_OFFSET(0xE866940)
#define MONOSCENEMAP3DCONFIG_UPDATE_OFFSET UNITYSDK_OFFSET(0xE86B790)
#define MONOSCENEMAP3DCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0xE86CB90)
#define MONOSCENEMAP3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE86C7F0)

inline static constexpr unsigned int MonoSceneMap3DConfig_TypeDefinitionIndex = 66977;

class MonoSceneMap3DConfig : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__EnableFarOutlineFix()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAB0);
	}
	static ::System::Int32* StaticGet__Map3DColorBoxCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAB4);
	}
	static ::System::Int32* StaticGet__FogItems()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAB8);
	}
	static ::System::Int32* StaticGet__BoundsSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFABC);
	}
	static ::System::Int32* StaticGet__BoundsCenter()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAC0);
	}
	static ::System::Int32* StaticGet__Map3DColorBoxColorData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAC4);
	}
	static ::System::Int32* StaticGet__GridTilling()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAC8);
	}
	static ::System::Int32* StaticGet__CameraDitherAlphaAndCharacterPos()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFACC);
	}
	static ::System::Int32* StaticGet__FogItemCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAD0);
	}
	static ::System::Int32* StaticGet__CircleOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAD4);
	}
	static ::System::Int32* StaticGet__Map3DColorBoxSizeDatas()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAD8);
	}
	static ::System::Int32* StaticGet__DisableOcclusionColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFADC);
	}
	static ::System::Int32* StaticGet__GridOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0xFAE0);
	}
	// static const ::System::Int32 MAX_FOG_ITEM_COUNT = 0xA; // 0x0
	::NapSceneMap3DConfig* m_SceneMap3DConfig; // 0x18
	::System::Collections::Generic::List_1<::Map3DLiftRenderer*>* m_CreateLiftGo; // 0x20
	::System::Collections::Generic::List_1<::MonoSceneMap3DConfig_LiftPosInfo*>* LiftPosValue; // 0x28
	::System::Collections::Generic::List_1<::MonoSceneMap3DConfig_FloorPosInfo*>* FloorPosValue; // 0x30
	::System::Collections::Generic::List_1<::MonoSceneMap3DConfig_SubAreaPosInfo*>* SubAreaValue; // 0x38
	::System::Single bottomYOffset; // 0x40
	::System::Boolean overrideLightParams; // 0x44
	::UnityEngine::Vector3 lightEulerAngle; // 0x48
	::System::Boolean EnableCrossLayer; // 0x54
	::Il2CppArray<::MonoSceneMap3DConfig_LayerSpecialNodeInfo*>* CrossLayerNodeList; // 0x58
	::Il2CppArray<::MonoSceneMap3DConfig_LayerSpecialNodeInfo*>* RadarCrossLayerNodeList; // 0x60
	::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0x68
	::UnityEngine::MaterialPropertyBlock* m_BottomPropertyBlock; // 0x70
	::UnityEngine::ComputeBuffer* m_FogItemDataForGPU; // 0x78
	::Il2CppArray<::MonoSceneMap3DConfig_URPFogItemData>* m_FogItemDataForCPU; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::MapChangeLayerSwitchConfig*>* EnableCameraChangeLayer; // 0x88
	::Il2CppArray<::MoleMole::MapChangeLayerConfig*>* CameraChangeLayerPoints; // 0x90
	::MoleMole::Cameras::CameraTrackBlending* _cameraChangeLayerRadiusDuration; // 0x98
	::System::Single _cameraChangeLayerMoveDelay; // 0xA0
	::MoleMole::Cameras::CameraTrackBlending* _cameraChangeLayerMoveDuration; // 0xA8
	::System::String* _cameraChangeLayerMoveGlichKey; // 0xB0
	::System::Single _cameraChangeLayerShowIconDelay; // 0xB8
	::System::Single _cameraChangeLayerMoveFocusDelay; // 0xBC
	::MoleMole::Cameras::CameraTrackBlending* _cameraChangeLayerMoveFocusDuration; // 0xC0
	::System::Boolean KeepCameraRotation; // 0xC8
	::MonoSceneMap3DFogAnimationConfig* m_FogAnimationConfig; // 0xD0
	::UnityEngine::Bounds customMapBounds; // 0xD8
	::Il2CppArray<::UnityEngine::Vector4>* colorBoxSizeData; // 0xF0
	::Il2CppArray<::UnityEngine::Vector4>* colorBoxColorData; // 0xF8
	::MoleMole::Config::SceneMap3DVisualConfig* m_VisualConfigs; // 0x100
	::MoleMole::Config::Map3DVisualConfigItem* m_MapConfig; // 0x108
	::System::String* m_VisualConfigKey; // 0x110
	::UnityEngine::Vector4 m_LayerSize; // 0x118
	::UnityEngine::Vector4 m_LayerCenterAndHeight; // 0x128
	::System::Single m_LayerClipYOffset; // 0x138
	::System::Collections::Generic::HashSet_1<::Map3DFogItem*>* fogItems; // 0x140
	::System::Collections::Generic::List_1<::Map3DFogItem*>* removedList; // 0x148
	::System::Boolean needChangeLayerFlick; // 0x150
	::UnityEngine::AnimationCurve* changeLayerFlickCurve; // 0x158
	::System::Single changeLayerFlickCurveLength; // 0x160
	::Il2CppArray<::ChangeLayerFlickHolder*>* changeLayerFlickLayerHolder; // 0x168
	::Map3DFogItem* testFogItem; // 0x170
	::UnityEngine::MeshRenderer* bottomMeshRenderer; // 0x178

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG__CCTOR_OFFSET))();
	}

	::System::Void TestBottom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_TESTBOTTOM_OFFSET))(this);
	}

	::System::Void CreateLift(::System::Collections::Generic::List_1<::MonoSceneMap3DConfig_LiftPosInfo*>* liftPosInfos)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MonoSceneMap3DConfig_LiftPosInfo*>*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_CREATELIFT_OFFSET))(this, liftPosInfos);
	}

	::System::Void RefreshLiftLayer(::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHLIFTLAYER_OFFSET))(this, layerIndex);
	}

	::UnityEngine::Bounds GetMapBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_GETMAPBOUNDS_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_ONENABLE_OFFSET))(this);
	}

	::System::Void RefreshFont()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHFONT_OFFSET))(this);
	}

	::System::Void RefreshCharacterArrowMatOcclusion(::System::Boolean isOnEnable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHCHARACTERARROWMATOCCLUSION_OFFSET))(this, isOnEnable);
	}

	::System::Void RefreshLight()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHLIGHT_OFFSET))(this);
	}

	::System::Void GetVirtualMapConfig()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_GETVIRTUALMAPCONFIG_OFFSET))(this);
	}

	::System::Void RefreshColorBox()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHCOLORBOX_OFFSET))(this);
	}

	::System::Void SetCurrentLayerCenterAndHeight(::UnityEngine::Vector3 layerCenter, ::UnityEngine::Vector3 boundSize)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_SETCURRENTLAYERCENTERANDHEIGHT_OFFSET))(this, layerCenter, boundSize);
	}

	::Map3DFogItem* AddSceneMapFogItem(::UnityEngine::Bounds fogItemBounds)
	{
		return ((::Map3DFogItem*(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_ADDSCENEMAPFOGITEM_OFFSET))(this, fogItemBounds);
	}

	::System::Boolean RemoveSceneMapFogItem(::Map3DFogItem* fogItem)
	{
		return ((::System::Boolean(*)(::PVOID, ::Map3DFogItem*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REMOVESCENEMAPFOGITEM_OFFSET))(this, fogItem);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_UPDATE_OFFSET))(this);
	}

	::System::Void PushFogItemDataToGPU()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_PUSHFOGITEMDATATOGPU_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_ONDISABLE_OFFSET))(this);
	}

	::System::Void PlayChangeLayerAnimation(::UnityEngine::GameObject* root)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_PLAYCHANGELAYERANIMATION_OFFSET))(this, root);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_ONDESTROY_OFFSET))(this);
	}

	::System::Void GenerateBottom(::UnityEngine::Bounds bounds, ::System::Boolean autoInit)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_GENERATEBOTTOM_OFFSET))(this, bounds, autoInit);
	}

	::System::Void GenerateOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_GENERATEOUTLINE_OFFSET))(this);
	}
};
