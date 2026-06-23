#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_863445FF70B314F5.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIRABAutoBattleBase3DModelController_SAssetInfo.h"

class Class_2_68A72EA5C103BA7B;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CHANGESHOWBUDDY_OFFSET UNITYSDK_OFFSET(0x16EB9930)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CLEARBUDDYCACHE_OFFSET UNITYSDK_OFFSET(0x16EB9490)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CLEARGACHASCREENPLAYER_OFFSET UNITYSDK_OFFSET(0x16EB8FE0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GETFADEINANIMATIONCLIPNAME_OFFSET UNITYSDK_OFFSET(0x16EB8390)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GETSWITCHANIMATIONCLIPNAME_OFFSET UNITYSDK_OFFSET(0x16EB8810)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GET_ALLOWASSETPROXYUNLOADRES_OFFSET UNITYSDK_OFFSET(0x16EB9910)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GET_ISCHANGING_OFFSET UNITYSDK_OFFSET(0x16EB9920)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EB8300)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONLOADMODEL_OFFSET UNITYSDK_OFFSET(0x16EBA5C0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EB93D0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EB81A0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EB8250)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x16EB8430)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYGACHASCREENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x16EB8C20)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYMANUFACTUREANI_OFFSET UNITYSDK_OFFSET(0x16EB8910)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYSTAGEUPANI_OFFSET UNITYSDK_OFFSET(0x16EB9040)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYSWITCHANIMATION_OFFSET UNITYSDK_OFFSET(0x16EB85C0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16EB9300)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EBAC80)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBABC0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EBACF0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EBAD80)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EBAD90)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EBADA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController_TypeDefinitionIndex = 72671;

	class UIRABAutoBattleBase3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::String** StaticGet_Switch_In_Right()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRABAutoBattleBase3DModelController_TypeDefinitionIndex)->GetStaticField(0x416A0);
		}
		static ::System::String** StaticGet_Switch_In_Left()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRABAutoBattleBase3DModelController_TypeDefinitionIndex)->GetStaticField(0x416A8);
		}
		static ::System::String** StaticGet_Switch_Out_Right()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRABAutoBattleBase3DModelController_TypeDefinitionIndex)->GetStaticField(0x416B0);
		}
		static ::System::String** StaticGet_Switch_Out_Left()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRABAutoBattleBase3DModelController_TypeDefinitionIndex)->GetStaticField(0x416B8);
		}
		// static const ::System::Int32 RarityS = 0x3; // 0x0
		// static const ::System::Int32 RarityA = 0x2; // 0x0
		// static const ::System::Int32 RarityB = 0x1; // 0x0
		// static const ::System::String* MainFadeIn; // 0x0
		// static const ::System::String* MaintoManufacture; // 0x0
		// static const ::System::String* MaintoTraining; // 0x0
		// static const ::System::String* ManufactureFadeIn; // 0x0
		// static const ::System::String* ManufacturetoMain; // 0x0
		// static const ::System::String* ManufacturetoTraining; // 0x0
		// static const ::System::String* TrainingtFadeIn; // 0x0
		// static const ::System::String* TrainingtoMain; // 0x0
		// static const ::System::String* TrainingtoManufacture; // 0x0
		// static const ::System::String* ManufactureAni; // 0x0
		// static const ::System::String* StageUpAni; // 0x0
		::Class_2_68A72EA5C103BA7B* _view; // 0x360
		::MoleMole::ScreenPlayer* _gachaScreenPlayer; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::UIRABAutoBattleBase3DModelController_SAssetInfo>* _assetCacheList; // 0x370
		::System::Int32 _currentShowBuddyUIConfigId; // 0x378
		::System::Int32 _currentShowBuddyIndex; // 0x37C
		::MoleMole::Battle::Entity* _buddyEntity; // 0x380
		::System::Boolean _isChanging; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::String* GetFadeInAnimationClipName(::Enum_3_863445FF70B314F5 pageType)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_863445FF70B314F5))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GETFADEINANIMATIONCLIPNAME_OFFSET))(this, pageType);
		}

		::System::Void PlayFadeIn(::Enum_3_863445FF70B314F5 pageType, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_863445FF70B314F5, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYFADEIN_OFFSET))(this, pageType, withAni);
		}

		::System::Void PlaySwitchAnimation(::Enum_3_863445FF70B314F5 fromPage, ::Enum_3_863445FF70B314F5 toPage, ::System::Action* nextUIOpenAction)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_863445FF70B314F5, ::Enum_3_863445FF70B314F5, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYSWITCHANIMATION_OFFSET))(this, fromPage, toPage, nextUIOpenAction);
		}

		::System::String* GetSwitchAnimationClipName(::Enum_3_863445FF70B314F5 fromPage, ::Enum_3_863445FF70B314F5 toPage)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_863445FF70B314F5, ::Enum_3_863445FF70B314F5))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GETSWITCHANIMATIONCLIPNAME_OFFSET))(this, fromPage, toPage);
		}

		::System::Void PlayManufactureAni(::System::Int32 maxRarity, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYMANUFACTUREANI_OFFSET))(this, maxRarity, onComplete);
		}

		::System::Void PlayGachaScreenSequence(::System::Int32 maxRarity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYGACHASCREENSEQUENCE_OFFSET))(this, maxRarity);
		}

		::System::Void ClearGachaScreenPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CLEARGACHASCREENPLAYER_OFFSET))(this);
		}

		::System::Void PlayStageUpAni(::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYSTAGEUPANI_OFFSET))(this, onComplete);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean get_AllowAssetProxyUnloadRes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GET_ALLOWASSETPROXYUNLOADRES_OFFSET))(this);
		}

		::System::Boolean get_IsChanging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GET_ISCHANGING_OFFSET))(this);
		}

		::System::Void ChangeShowBuddy(::System::Int32 buddyUIConfigId, ::System::Int32 buddyIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CHANGESHOWBUDDY_OFFSET))(this, buddyUIConfigId, buddyIndex);
		}

		::System::Void ClearBuddyCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CLEARBUDDYCACHE_OFFSET))(this);
		}

		::System::Void OnLoadModel(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject* model, ::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONLOADMODEL_OFFSET))(this, assetPath, model, isLeft);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
