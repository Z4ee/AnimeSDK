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
class MonoSceneMap3DBlockDitherProxy;
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

#define MONOSCENEMAP3DCONFIG_ADDSCENEMAPFOGITEM_OFFSET UNITYSDK_OFFSET(0x11BF5040)
#define MONOSCENEMAP3DCONFIG_CREATELIFT_OFFSET UNITYSDK_OFFSET(0x11BF0280)
#define MONOSCENEMAP3DCONFIG_GENERATEBOTTOM_OFFSET UNITYSDK_OFFSET(0x11BEFBF0)
#define MONOSCENEMAP3DCONFIG_GENERATEOUTLINE_OFFSET UNITYSDK_OFFSET(0x11BF3A30)
#define MONOSCENEMAP3DCONFIG_GETMAPBOUNDS_OFFSET UNITYSDK_OFFSET(0x11BEF8B0)
#define MONOSCENEMAP3DCONFIG_GETVIRTUALMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x11BF1030)
#define MONOSCENEMAP3DCONFIG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11BF62F0)
#define MONOSCENEMAP3DCONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11BF5E30)
#define MONOSCENEMAP3DCONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11BF0A00)
#define MONOSCENEMAP3DCONFIG_PLAYCHANGELAYERANIMATION_OFFSET UNITYSDK_OFFSET(0x11BF6080)
#define MONOSCENEMAP3DCONFIG_PUSHFOGITEMDATATOGPU_OFFSET UNITYSDK_OFFSET(0x11BF3F60)
#define MONOSCENEMAP3DCONFIG_REFRESHCHARACTERARROWMATOCCLUSION_OFFSET UNITYSDK_OFFSET(0x11BF44D0)
#define MONOSCENEMAP3DCONFIG_REFRESHCOLORBOX_OFFSET UNITYSDK_OFFSET(0x11BF2FC0)
#define MONOSCENEMAP3DCONFIG_REFRESHFONT_OFFSET UNITYSDK_OFFSET(0x11BF1320)
#define MONOSCENEMAP3DCONFIG_REFRESHLIFTLAYER_OFFSET UNITYSDK_OFFSET(0x11BF0880)
#define MONOSCENEMAP3DCONFIG_REFRESHLIGHT_OFFSET UNITYSDK_OFFSET(0x11BF1DA0)
#define MONOSCENEMAP3DCONFIG_REMOVESCENEMAPFOGITEM_OFFSET UNITYSDK_OFFSET(0x11BF5160)
#define MONOSCENEMAP3DCONFIG_SETCURRENTLAYERCENTERANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x11BF4820)
#define MONOSCENEMAP3DCONFIG_TESTBOTTOM_OFFSET UNITYSDK_OFFSET(0x11BEF850)
#define MONOSCENEMAP3DCONFIG_UPDATE_OFFSET UNITYSDK_OFFSET(0x11BF5200)
#define MONOSCENEMAP3DCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BF6830)
#define MONOSCENEMAP3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11BF64A0)

inline static constexpr unsigned int MonoSceneMap3DConfig_TypeDefinitionIndex = 40574;

class MonoSceneMap3DConfig : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__FogItems()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10400);
	}
	static ::System::Int32* StaticGet__EnableFarOutlineFix()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10404);
	}
	static ::System::Int32* StaticGet__BoundsCenter()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10408);
	}
	static ::System::Int32* StaticGet__GridOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x1040C);
	}
	static ::System::Int32* StaticGet__RotateAngle()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10410);
	}
	static ::System::Int32* StaticGet__CircleOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10414);
	}
	static ::System::Int32* StaticGet__Map3DColorBoxSizeDatas()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10418);
	}
	static ::System::Int32* StaticGet__CameraDitherAlphaAndCharacterPos()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x1041C);
	}
	static ::System::Int32* StaticGet__FogItemCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10420);
	}
	static ::System::Int32* StaticGet__Map3DColorBoxCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10424);
	}
	static ::System::Int32* StaticGet__DisableOcclusionColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10428);
	}
	static ::System::Int32* StaticGet__RotateCenter()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x1042C);
	}
	static ::System::Int32* StaticGet__Map3DColorBoxColorData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10430);
	}
	static ::System::Int32* StaticGet__GridTilling()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10434);
	}
	static ::System::Int32* StaticGet__BoundsSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x10438);
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
	::Il2CppArray<::UnityEngine::MeshRenderer*>* CullRenderList; // 0x68
	::System::Boolean EnableLayerClipOverride; // 0x70
	::System::Single LayerClipYOffsetOverride; // 0x74
	::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0x78
	::UnityEngine::MaterialPropertyBlock* m_BottomPropertyBlock; // 0x80
	::UnityEngine::ComputeBuffer* m_FogItemDataForGPU; // 0x88
	::Il2CppArray<::MonoSceneMap3DConfig_URPFogItemData>* m_FogItemDataForCPU; // 0x90
	::System::Collections::Generic::List_1<::MoleMole::MapChangeLayerSwitchConfig*>* EnableCameraChangeLayer; // 0x98
	::Il2CppArray<::MoleMole::MapChangeLayerConfig*>* CameraChangeLayerPoints; // 0xA0
	::MoleMole::Cameras::CameraTrackBlending* _cameraChangeLayerRadiusDuration; // 0xA8
	::System::Single _cameraChangeLayerMoveDelay; // 0xB0
	::MoleMole::Cameras::CameraTrackBlending* _cameraChangeLayerMoveDuration; // 0xB8
	::System::String* _cameraChangeLayerMoveGlichKey; // 0xC0
	::System::Single _cameraChangeLayerShowIconDelay; // 0xC8
	::System::Single _cameraChangeLayerMoveFocusDelay; // 0xCC
	::MoleMole::Cameras::CameraTrackBlending* _cameraChangeLayerMoveFocusDuration; // 0xD0
	::System::Boolean KeepCameraRotation; // 0xD8
	::MonoSceneMap3DFogAnimationConfig* m_FogAnimationConfig; // 0xE0
	::UnityEngine::Bounds customMapBounds; // 0xE8
	::System::Collections::Generic::List_1<::MonoSceneMap3DBlockDitherProxy*>* blockColliders; // 0x100
	::Il2CppArray<::UnityEngine::Vector4>* colorBoxSizeData; // 0x108
	::Il2CppArray<::UnityEngine::Vector4>* colorBoxColorData; // 0x110
	::MoleMole::Config::SceneMap3DVisualConfig* m_VisualConfigs; // 0x118
	::MoleMole::Config::Map3DVisualConfigItem* m_MapConfig; // 0x120
	::System::String* m_VisualConfigKey; // 0x128
	::UnityEngine::Vector4 m_LayerSize; // 0x130
	::UnityEngine::Vector4 m_LayerCenterAndHeight; // 0x140
	::System::Single m_LayerClipYOffset; // 0x150
	::System::Collections::Generic::HashSet_1<::Map3DFogItem*>* fogItems; // 0x158
	::System::Collections::Generic::List_1<::Map3DFogItem*>* removedList; // 0x160
	::System::Boolean needChangeLayerFlick; // 0x168
	::UnityEngine::AnimationCurve* changeLayerFlickCurve; // 0x170
	::System::Single changeLayerFlickCurveLength; // 0x178
	::Il2CppArray<::ChangeLayerFlickHolder*>* changeLayerFlickLayerHolder; // 0x180
	::Map3DFogItem* testFogItem; // 0x188
	::UnityEngine::MeshRenderer* bottomMeshRenderer; // 0x190

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
