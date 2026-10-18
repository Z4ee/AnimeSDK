#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/UI3DControllerBase_NotifyHandlerBinding.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/Client/ViewCacheType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoUIControllerGetter; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class UI3DControllerConfig; }
namespace RPG::Client { class UIAsyncPrefabLoaderProxy; }
namespace RPG::Client { class UIContextAssetLoader; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UI3DCONTROLLERBASE_ADD_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xE354D00)
#define RPG_CLIENT_UI3DCONTROLLERBASE_APPLYCAMERA_OFFSET UNITYSDK_OFFSET(0xE3557F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0xE356000)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0xE355D70)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0xE355F90)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0xE356070)
#define RPG_CLIENT_UI3DCONTROLLERBASE_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0xE355F20)
#define RPG_CLIENT_UI3DCONTROLLERBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0xE355130)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GETENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0xE354CB0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GETLINKEDUI2DS_OFFSET UNITYSDK_OFFSET(0xE354F40)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0xE354C70)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0xE354BB0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE354A50)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE354980)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_PREFABLOADER_OFFSET UNITYSDK_OFFSET(0xE354C30)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xE354BF0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_INSTANTIATEOBJECT_OFFSET UNITYSDK_OFFSET(0xE355D00)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE354B30)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xE354AF0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ISLOADED_OFFSET UNITYSDK_OFFSET(0xE354A90)
#define RPG_CLIENT_UI3DCONTROLLERBASE_LOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0xE356150)
#define RPG_CLIENT_UI3DCONTROLLERBASE_LOADSPRITETO_OFFSET UNITYSDK_OFFSET(0xE3560E0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_LOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0xE3561C0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_LOADVIEW_OFFSET UNITYSDK_OFFSET(0xE355860)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ONLINKEDUI2DCHANGED_OFFSET UNITYSDK_OFFSET(0xE354E00)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ONRELOADENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xE354DC0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ONVIEWSET_OFFSET UNITYSDK_OFFSET(0xE355020)
#define RPG_CLIENT_UI3DCONTROLLERBASE_OVERRIDEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0xE356230)
#define RPG_CLIENT_UI3DCONTROLLERBASE_REMOVE_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xE354D60)
#define RPG_CLIENT_UI3DCONTROLLERBASE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xE355660)
#define RPG_CLIENT_UI3DCONTROLLERBASE_SETDOFENABLE_OFFSET UNITYSDK_OFFSET(0xE356290)
#define RPG_CLIENT_UI3DCONTROLLERBASE_SYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0xE355E80)
#define RPG_CLIENT_UI3DCONTROLLERBASE_TICK_OFFSET UNITYSDK_OFFSET(0xE3562E0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_VIEWLOADPROMISE_OFFSET UNITYSDK_OFFSET(0xE354B70)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xE356850)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ADDLAYOUTNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE356D00)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xE3565B0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ADDTICK_OFFSET UNITYSDK_OFFSET(0xE3563C0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__BINDCAMERA_OFFSET UNITYSDK_OFFSET(0xE356AB0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__BINDROOT_OFFSET UNITYSDK_OFFSET(0xE3569C0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xE3548B0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__FINDSOURCECAMERA_OFFSET UNITYSDK_OFFSET(0xE356A10)
#define RPG_CLIENT_UI3DCONTROLLERBASE__INITCANVAS_OFFSET UNITYSDK_OFFSET(0xE356BF0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__INITINCONTROL_OFFSET UNITYSDK_OFFSET(0xE356C90)
#define RPG_CLIENT_UI3DCONTROLLERBASE__LOADVIEW_B__46_0_OFFSET UNITYSDK_OFFSET(0xE356E60)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0xE3568D0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xE356810)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONLOAD_OFFSET UNITYSDK_OFFSET(0xE3567D0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONTICK_OFFSET UNITYSDK_OFFSET(0xE356920)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONUISCREENSIZECHANGEDNOTIFY_OFFSET UNITYSDK_OFFSET(0xE356DA0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xE356980)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONVIEWLOADED_OFFSET UNITYSDK_OFFSET(0xE3559C0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__RAISEDESTROYED_OFFSET UNITYSDK_OFFSET(0xE3555F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xE3554F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__RELEASEVOLUMEPROFILE_OFFSET UNITYSDK_OFFSET(0xE3554A0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE3566D0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__REMOVETICK_OFFSET UNITYSDK_OFFSET(0xE356490)
#define RPG_CLIENT_UI3DCONTROLLERBASE__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xE355590)
#define RPG_CLIENT_UI3DCONTROLLERBASE__SETROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xE355400)
#define RPG_CLIENT_UI3DCONTROLLERBASE__SETTICKABLE_OFFSET UNITYSDK_OFFSET(0xE3557A0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xE356890)
#define RPG_CLIENT_UI3DCONTROLLERBASE__UPDATEINCONTROLTOPUI_OFFSET UNITYSDK_OFFSET(0xE354E50)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DControllerBase_TypeDefinitionIndex = 72999;

	class UI3DControllerBase : public ::System::Object
	{
	public:
		::RPG::Client::UIPrefabLoader* _PrefabLoader; // 0x10
		::RPG::Client::MonoUIControllerGetter* _UIControllerGetter; // 0x18
		::RPG::Client::UI3DControllerConfig* _Config; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::UI3DControllerBase_NotifyHandlerBinding>* _NotifyHandlers; // 0x28
		::System::Action* OnDestroyed; // 0x30
		::UnityEngine::Camera* _Camera; // 0x38
		::RPG::Client::UIContextAssetLoader* _AssetLoader; // 0x40
		::UnityEngine::Camera* _SourceCamera; // 0x48
		::UnityEngine::Transform* _Root; // 0x50
		::RPG::Client::Promises::Promise* _ViewLoadPromise; // 0x58
		::System::Boolean _ViewSet; // 0x60
		::System::Boolean _IsDestroyed; // 0x61
		::System::Boolean _IsActive; // 0x62
		::System::Boolean _AsyncLoading; // 0x63
		::RPG::Client::ViewCacheType _CacheType; // 0x64
		::RPG::Client::UILayer _Layer; // 0x68
		::System::Boolean _VolumeOverride; // 0x6C
		::System::Boolean _Tickable; // 0x6D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::UI3DControllerConfig* get_Config()
		{
			return ((::RPG::Client::UI3DControllerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ISLOADED_OFFSET))(this);
		}

		::System::Boolean IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ISDESTROYED_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ISACTIVE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* ViewLoadPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_VIEWLOADPROMISE_OFFSET))(this);
		}

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_CAMERA_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_ROOT_OFFSET))(this);
		}

		::RPG::Client::UIPrefabLoader* get_PrefabLoader()
		{
			return ((::RPG::Client::UIPrefabLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_PREFABLOADER_OFFSET))(this);
		}

		::RPG::Client::UIContextAssetLoader* get_AssetLoader()
		{
			return ((::RPG::Client::UIContextAssetLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_ASSETLOADER_OFFSET))(this);
		}

		::System::String* GetEnvironmentProfilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GETENVIRONMENTPROFILEPATH_OFFSET))(this);
		}

		::System::Void add_OnDestroyed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ADD_ONDESTROYED_OFFSET))(this, a1);
		}

		::System::Void remove_OnDestroyed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_REMOVE_ONDESTROYED_OFFSET))(this, a1);
		}

		::System::Void OnReloadEnvironment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ONRELOADENVIRONMENT_OFFSET))(this);
		}

		::System::Void OnLinkedUI2DChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ONLINKEDUI2DCHANGED_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::UIController*>* GetLinkedUI2Ds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::UIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GETLINKEDUI2DS_OFFSET))(this);
		}

		::System::Void OnViewSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ONVIEWSET_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_DESTROY_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ApplyCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_APPLYCAMERA_OFFSET))(this);
		}

		::System::Void LoadView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_LOADVIEW_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* InstantiateObject(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_INSTANTIATEOBJECT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* AsyncLoadPrefab(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADPREFAB_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* SyncLoadPrefab(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_SYNCLOADPREFAB_OFFSET))(this, a1, a2);
		}

		::System::Void DestroyObject(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_DESTROYOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::System::Void AsyncLoadMaterialTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADMATERIALTO_OFFSET))(this, a1, a2);
		}

		::System::Void AsyncLoadTextureTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADTEXTURETO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_LOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadMaterialTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_LOADMATERIALTO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadTextureTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_LOADTEXTURETO_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideDOFConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_OVERRIDEDOFCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetDOFEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_SETDOFENABLE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void _AddTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ADDTICK_OFFSET))(this);
		}

		::System::Void _RemoveTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__REMOVETICK_OFFSET))(this);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2, ::RPG::Client::NotifyHandler* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ADDNOTIFYHANDLER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONLOAD_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnActiveChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONACTIVECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void _SetRootActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__SETROOTACTIVE_OFFSET))(this, a1);
		}

		::System::Void _SetTickable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__SETTICKABLE_OFFSET))(this, a1);
		}

		::System::Void _ReleaseVolumeProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__RELEASEVOLUMEPROFILE_OFFSET))(this);
		}

		::System::Void _ReleaseView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__RELEASEVIEW_OFFSET))(this);
		}

		::System::Void _OnViewLoaded(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONVIEWLOADED_OFFSET))(this, a1);
		}

		::System::Void _RaiseDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__RAISEDESTROYED_OFFSET))(this);
		}

		static ::System::Void _ResolvePromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__RESOLVEPROMISE_OFFSET))(a1);
		}

		::System::Void _BindRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__BINDROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* _FindSourceCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__FINDSOURCECAMERA_OFFSET))(this);
		}

		::System::Void _BindCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__BINDCAMERA_OFFSET))(this, a1);
		}

		::System::Void _InitCanvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__INITCANVAS_OFFSET))(this, a1);
		}

		::System::Void _InitInControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__INITINCONTROL_OFFSET))(this);
		}

		::System::Void _UpdateInControlTopUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__UPDATEINCONTROLTOPUI_OFFSET))(this);
		}

		::System::Void _AddLayoutNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ADDLAYOUTNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChangedNotify(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONUISCREENSIZECHANGEDNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _LoadView_b__46_0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__LOADVIEW_B__46_0_OFFSET))(this, a1);
		}
	};
}
