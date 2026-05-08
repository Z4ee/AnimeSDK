#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIMainPageBG3DModelController___c__DisplayClass59_0.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_2_58619A0893665D06;
class Class_2_C2B4B123B5A9B78A;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace MoleMole { class UIAvatarAnimator; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainPageBGContext; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Timeline::TimelineComponent { class RuntimeTimelineRebindComp; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ALLOCRTUNIT_OFFSET UNITYSDK_OFFSET(0x14D3F9A0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_APPLYAVATARSHOWSETTINGFORGO_OFFSET UNITYSDK_OFFSET(0x14D43F40)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_CREATECACHEENTITY_OFFSET UNITYSDK_OFFSET(0x14D41190)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DESTROYALLCACHEENTITIES_OFFSET UNITYSDK_OFFSET(0x14D40430)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DOPROCESSUIPREFAB_OFFSET UNITYSDK_OFFSET(0x14D43430)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ENABLEOVERRIDEMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x14D43DA0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETENTITYTYPEFORITEM_OFFSET UNITYSDK_OFFSET(0x14D41010)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETSCENELIGHT_OFFSET UNITYSDK_OFFSET(0x14D45580)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETSCENEVOLUME_OFFSET UNITYSDK_OFFSET(0x14D45460)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETUIAVATARGRAPHICS_OFFSET UNITYSDK_OFFSET(0x14D44140)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETUIPREFABPATHFORITEM_OFFSET UNITYSDK_OFFSET(0x14D41080)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETVISUALENVIRONMENTECOMP_OFFSET UNITYSDK_OFFSET(0x14D452E0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_INITCAMERADATA_OFFSET UNITYSDK_OFFSET(0x14D3F500)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_LOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0x14D45700)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14D3F3F0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14D42A00)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x14D433B0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14D3F6B0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14D42B20)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14D42C70)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14D3F480)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSAVATARMODEL_1_OFFSET UNITYSDK_OFFSET(0x14D45990)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSAVATARMODEL_OFFSET UNITYSDK_OFFSET(0x14D45920)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSMAINPAGEGO_OFFSET UNITYSDK_OFFSET(0x14D40A10)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSMAINPAGEITEM_OFFSET UNITYSDK_OFFSET(0x14D40F70)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIAVATAR_1_OFFSET UNITYSDK_OFFSET(0x14D43840)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0x14D40E40)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIBUDDY_OFFSET UNITYSDK_OFFSET(0x14D438E0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIPERFORM_OFFSET UNITYSDK_OFFSET(0x14D41540)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUISKIN_OFFSET UNITYSDK_OFFSET(0x14D439A0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REALLOCRTUNIT_OFFSET UNITYSDK_OFFSET(0x14D3F950)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REBINDSHOWTIMELINE_OFFSET UNITYSDK_OFFSET(0x14D44530)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REFRESHCAMERADATA_OFFSET UNITYSDK_OFFSET(0x14D42570)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14D3FB70)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_RELEASERTUNIT_OFFSET UNITYSDK_OFFSET(0x14D432F0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_RELEASEUIMODELS_OFFSET UNITYSDK_OFFSET(0x14D42AC0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_RESETCAMERADATA_OFFSET UNITYSDK_OFFSET(0x14D42990)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_SETHAIRSHADOWOFFSETS_OFFSET UNITYSDK_OFFSET(0x14D43C00)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_SETVIEWLIGHTROTOFFSET_OFFSET UNITYSDK_OFFSET(0x14D43A40)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__GETRANDOMCOUNT_59_0_OFFSET UNITYSDK_OFFSET(0x14D45C60)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__GETRANDOMINT_59_1_OFFSET UNITYSDK_OFFSET(0x14D45FB0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__HANDLESHADERUIOUTLINE_59_8_OFFSET UNITYSDK_OFFSET(0x14D46020)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__PLAYAVATARANIMATIONBYSETTING_59_6_OFFSET UNITYSDK_OFFSET(0x14D46940)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETANIMATORRANDOMINT_59_7_OFFSET UNITYSDK_OFFSET(0x14D46E80)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETAVATARANIMATION_59_5_OFFSET UNITYSDK_OFFSET(0x14D46330)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETAVATARSHADERPROPERTYBYRENDERS_59_4_OFFSET UNITYSDK_OFFSET(0x14D466F0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETAVATARSHADERPROPERTY_59_3_OFFSET UNITYSDK_OFFSET(0x14D46050)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETAVATAR_59_2_OFFSET UNITYSDK_OFFSET(0x14D45FE0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D466B0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14D465B0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14D470F0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14D47180)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x14D47210)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14D47220)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14D47230)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14D472F0)
#define MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14D47300)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainPageBG3DModelController_TypeDefinitionIndex = 43742;

	class UIMainPageBG3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet_UIOutline()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMainPageBG3DModelController_TypeDefinitionIndex)->GetStaticField(0xDEE0);
		}
		// static const ::System::String* CameraShowTrack; // 0x0
		// static const ::System::String* VolumeName; // 0x0
		::Class_2_C2B4B123B5A9B78A* _roleUnit; // 0x358
		::MoleMole::AvatarShowSetting* _avatarShowSetting; // 0x360
		::MoleMole::UIMainPageBGContext* uIMainPageBGContext; // 0x368
		::System::String* mainPagePrefabPath; // 0x370
		::UnityEngine::GameObject* mainPagePrefabModelGo; // 0x378
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* cameraData; // 0x380
		::System::Single lastRenderScale; // 0x388
		::System::Boolean applyLutAfterEverything; // 0x38C
		::System::Boolean renderVolumetricFog; // 0x38D
		::System::Boolean renderWater; // 0x38E
		::UnityEngine::Animator* cameraAnimator; // 0x390
		::UnityEngine::Animation* cameraAnimation; // 0x398
		::System::String* cameraAnimationName; // 0x3A0
		::System::String* animationClipPath; // 0x3A8
		::System::String* animatorControllerPath; // 0x3B0
		::System::String* avatarShowTlPath; // 0x3B8
		::UnityEngine::GameObject* avatarShowTl; // 0x3C0
		::Class_2_58619A0893665D06* _view; // 0x3C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* _cacheEntityDic; // 0x3D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::System::Int32 postGirlID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REFRESHVIEW_OFFSET))(this, postGirlID);
		}

		::MoleMole::Config::EntityType GetEntityTypeForItem(::MoleMole::MainPageItemShowSetting* setting)
		{
			return ((::MoleMole::Config::EntityType(*)(::PVOID, ::MoleMole::MainPageItemShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETENTITYTYPEFORITEM_OFFSET))(this, setting);
		}

		::Foundation::AssetPath GetUIPrefabPathForItem(::MoleMole::MainPageItemShowSetting* setting)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::MainPageItemShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETUIPREFABPATHFORITEM_OFFSET))(this, setting);
		}

		::System::Void InitCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_INITCAMERADATA_OFFSET))(this);
		}

		::System::Void RefreshCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REFRESHCAMERADATA_OFFSET))(this);
		}

		::System::Void ResetCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_RESETCAMERADATA_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ReAllocRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REALLOCRTUNIT_OFFSET))(this);
		}

		::System::Void ReleaseUIModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_RELEASEUIMODELS_OFFSET))(this);
		}

		::System::Void AllocRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ALLOCRTUNIT_OFFSET))(this);
		}

		::System::Void ReleaseRTUnit(::System::Boolean isReAlloc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_RELEASERTUNIT_OFFSET))(this, isReAlloc);
		}

		::System::Void OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void ProcessMainPageGo(::System::String* configPrefabPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSMAINPAGEGO_OFFSET))(this, configPrefabPath);
		}

		::System::Void ProcessUIAvatar(::System::Int32 avatarID, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarID, showTypeIndex);
		}

		::System::Void ProcessMainPageItem(::MoleMole::MainPageItemShowSetting* setting)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MainPageItemShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSMAINPAGEITEM_OFFSET))(this, setting);
		}

		::System::Void ProcessUIAvatar_1(::System::Int32 avatarID, ::MoleMole::AvatarShowSetting* avatarShowSetting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIAVATAR_1_OFFSET))(this, avatarID, avatarShowSetting);
		}

		::System::Void ProcessUIBuddy(::System::Int32 buddyID, ::MoleMole::AvatarShowSetting* avatarShowSetting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIBUDDY_OFFSET))(this, buddyID, avatarShowSetting);
		}

		::System::Void ProcessUISkin(::System::Int32 skinID, ::MoleMole::AvatarShowSetting* avatarShowSetting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUISKIN_OFFSET))(this, skinID, avatarShowSetting);
		}

		::System::Void DoProcessUIPrefab(::Foundation::AssetPath prefabPath, ::MoleMole::AvatarShowSetting* showSetting, ::System::Int32 templateID, ::MoleMole::Config::EntityType entityType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::System::Int32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DOPROCESSUIPREFAB_OFFSET))(this, prefabPath, showSetting, templateID, entityType);
		}

		::MoleMole::Battle::Entity* CreateCacheEntity(::MoleMole::Config::EntityType entityType, ::System::Int32 ID, ::Foundation::AssetPath prefabPath, ::MoleMole::AvatarShowSetting* showSetting, ::MoleMole::UIAvatarLightSetting* overrideLightSetting)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Int32, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_CREATECACHEENTITY_OFFSET))(this, entityType, ID, prefabPath, showSetting, overrideLightSetting);
		}

		::System::Void DestroyAllCacheEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_DESTROYALLCACHEENTITIES_OFFSET))(this);
		}

		::System::Void ProcessUIPerform(::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSUIPERFORM_OFFSET))(this, info);
		}

		::System::Void SetHairShadowOffsets(::System::Boolean enable, ::UnityEngine::Vector2 offset, ::MoleMole::UIAvatarGraphics* avatarGraphics)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_SETHAIRSHADOWOFFSETS_OFFSET))(this, enable, offset, avatarGraphics);
		}

		::System::Void EnableOverrideMainLight(::System::Boolean overrideMainLightDir, ::UnityEngine::Vector4 lightDir, ::MoleMole::UIAvatarGraphics* avatarGraphics)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector4, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_ENABLEOVERRIDEMAINLIGHT_OFFSET))(this, overrideMainLightDir, lightDir, avatarGraphics);
		}

		::System::Void SetViewLightRotOffset(::UnityEngine::Vector3 mainPageLightRotOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_SETVIEWLIGHTROTOFFSET_OFFSET))(this, mainPageLightRotOffset);
		}

		static ::System::Void RebindShowTimeline(::UnityEngine::Playables::PlayableDirector* playableDirector, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp* runtimeTimelineRebindComp, ::UnityEngine::Animator* cameraAnimator, ::UnityEngine::GameObject* mainPagePrefabModelGo, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* uiAvatars)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*, ::UnityEngine::Animator*, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_REBINDSHOWTIMELINE_OFFSET))(playableDirector, runtimeTimelineRebindComp, cameraAnimator, mainPagePrefabModelGo, uiAvatars);
		}

		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE* GetVisualEnvironmentEComp(::UnityEngine::GameObject* mainPagePrefabModelGo)
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETVISUALENVIRONMENTECOMP_OFFSET))(mainPagePrefabModelGo);
		}

		static ::UnityEngine::Light* GetSceneLight(::UnityEngine::GameObject* mainPagePrefabModelGo)
		{
			return ((::UnityEngine::Light*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETSCENELIGHT_OFFSET))(mainPagePrefabModelGo);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* GetUIAvatarGraphics()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETUIAVATARGRAPHICS_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Volume* GetSceneVolume(::UnityEngine::GameObject* mainPagePrefabModelGo)
		{
			return ((::UnityEngine::Rendering::Volume*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_GETSCENEVOLUME_OFFSET))(mainPagePrefabModelGo);
		}

		::System::Void LoadRTModelFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_LOADRTMODELFINISHED_OFFSET))(this);
		}

		::System::Void ProcessAvatarModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSAVATARMODEL_OFFSET))(this);
		}

		::System::Void ProcessAvatarModel_1(::UnityEngine::GameObject* go, ::MoleMole::AvatarShowSetting* showSetting)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_PROCESSAVATARMODEL_1_OFFSET))(this, go, showSetting);
		}

		::System::Void ApplyAvatarShowSettingForGo(::UnityEngine::GameObject* go, ::MoleMole::AvatarShowSetting* showSetting, ::MoleMole::UIAvatarLightSetting* overrideLightSetting)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::AvatarShowSetting*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER_APPLYAVATARSHOWSETTINGFORGO_OFFSET))(this, go, showSetting, overrideLightSetting);
		}

		::System::Int32 _ApplyAvatarShowSettingForGo_g__GetRandomCount_59_0(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__GETRANDOMCOUNT_59_0_OFFSET))(this, a1);
		}

		::System::Int32 _ApplyAvatarShowSettingForGo_g__GetRandomInt_59_1(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__GETRANDOMINT_59_1_OFFSET))(this, a1);
		}

		::System::Void _ApplyAvatarShowSettingForGo_g__SetAvatar_59_2(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETAVATAR_59_2_OFFSET))(this, a1);
		}

		::System::Void _ApplyAvatarShowSettingForGo_g__SetAvatarShaderProperty_59_3(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETAVATARSHADERPROPERTY_59_3_OFFSET))(this, a1);
		}

		::System::Void _ApplyAvatarShowSettingForGo_g__SetAvatarShaderPropertyByRenders_59_4(::Il2CppArray<::UnityEngine::Renderer*>* renderers, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETAVATARSHADERPROPERTYBYRENDERS_59_4_OFFSET))(this, renderers, a2);
		}

		::System::Void _ApplyAvatarShowSettingForGo_g__SetAvatarAnimation_59_5(::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETAVATARANIMATION_59_5_OFFSET))(this, a1);
		}

		static ::System::Void _ApplyAvatarShowSettingForGo_g__PlayAvatarAnimationBySetting_59_6(::MoleMole::UIAvatarAnimator* animator, ::MoleMole::UIAvatarAnimatorParamsSetting* setting)
		{
			return ((::System::Void(*)(::MoleMole::UIAvatarAnimator*, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__PLAYAVATARANIMATIONBYSETTING_59_6_OFFSET))(animator, setting);
		}

		::System::Void _ApplyAvatarShowSettingForGo_g__SetAnimatorRandomInt_59_7(::MoleMole::UIAvatarAnimator* animator, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*, ::MoleMole::UIMainPageBG3DModelController___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__SETANIMATORRANDOMINT_59_7_OFFSET))(this, animator, a2);
		}

		static ::System::Single _ApplyAvatarShowSettingForGo_g__HandleShaderUIOutline_59_8(::System::Single rtHeight)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER__APPLYAVATARSHOWSETTINGFORGO_G__HANDLESHADERUIOUTLINE_59_8_OFFSET))(rtHeight);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPAGEBG3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
