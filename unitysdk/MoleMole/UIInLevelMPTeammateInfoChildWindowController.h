#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWorldBaseController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48D56DACBE4271BC;
class Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D;
class Class_2_C5C76936C9D491E6;
class Class_3_7472FB6CC4015359;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x146ABD00)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x146AAFA0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x146AAF90)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_HIDEVIEW_OFFSET UNITYSDK_OFFSET(0x146AC9D0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x146AB4F0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x146AB5B0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONHUDUPDATE_OFFSET UNITYSDK_OFFSET(0x146ACA30)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x146AB640)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x146AB000)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x146AB380)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_SETTEAMMATEINDEX_OFFSET UNITYSDK_OFFSET(0x146AC750)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_SETUPENTITY_OFFSET UNITYSDK_OFFSET(0x146ABF10)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x146AB6B0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__BUILDDATABINDING_B__29_0_OFFSET UNITYSDK_OFFSET(0x146AD4E0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x146AD480)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x146AD390)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__SETUPFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x146AC260)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__UPDATEFOLLOWANDVISIBLE_OFFSET UNITYSDK_OFFSET(0x146ACB30)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__UPDATESCALE_OFFSET UNITYSDK_OFFSET(0x146AB700)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x146ADA80)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x146ADB10)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x146ADBA0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x146ADBB0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x146ADBC0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x146ADC50)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___UPDATEFOLLOWANDVISIBLE_G____AUTOVISIBLE_36_1_OFFSET UNITYSDK_OFFSET(0x146AD0F0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___UPDATEFOLLOWANDVISIBLE_G____ISPOINTVISIBLE_36_0_OFFSET UNITYSDK_OFFSET(0x146ACE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMPTeammateInfoChildWindowController_TypeDefinitionIndex = 53933;

	class UIInLevelMPTeammateInfoChildWindowController : public ::MoleMole::UIWorldBaseController
	{
	public:
		static ::System::Int32* StaticGet_StartColorShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMPTeammateInfoChildWindowController_TypeDefinitionIndex)->GetStaticField(0xE580);
		}
		static ::System::Int32* StaticGet_EndColorShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMPTeammateInfoChildWindowController_TypeDefinitionIndex)->GetStaticField(0xE584);
		}
		static ::System::Int32* StaticGet_ProgressShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMPTeammateInfoChildWindowController_TypeDefinitionIndex)->GetStaticField(0xE588);
		}
		::Class_2_C5C76936C9D491E6* _view; // 0x328
		::UnityEngine::CanvasGroup* _rootCanvasGroup; // 0x330
		::UnityEngine::RectTransform* parentRoot; // 0x338
		::UnityEngine::RectTransform* selfTransform; // 0x340
		::UnityEngine::Collider* followTargetCollider; // 0x348
		::MoleMole::UIGeneralInteractingContainerController* _generalInteractingContainerCtrl; // 0x350
		::UnityEngine::Transform* _followTargetPointTransform; // 0x358
		::System::Single _uiOffset; // 0x360
		::System::Collections::Generic::Dictionary_2<::Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B, ::Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D*>* _params; // 0x368
		::UnityEngine::Canvas* m_SortCamvas; // 0x370
		::UnityEngine::Color _beingRevivedColor; // 0x378
		::UnityEngine::Color _dyingColor; // 0x388
		::MoleMole::Battle::Entity* _entity; // 0x398
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x3A0
		::System::Boolean _hasBindView; // 0x3A8
		::Class_3_7472FB6CC4015359* _hudComponent; // 0x3B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void SetupEntity(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_SETUPENTITY_OFFSET))(this, entityID);
		}

		::System::Void HideView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_HIDEVIEW_OFFSET))(this);
		}

		::System::Void _SetupFollowTarget(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__SETUPFOLLOWTARGET_OFFSET))(this, entityID);
		}

		::System::Void SetTeammateIndex(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_SETTEAMMATEINDEX_OFFSET))(this, index);
		}

		::System::Void _UpdateScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__UPDATESCALE_OFFSET))(this);
		}

		::System::Void OnHudUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONHUDUPDATE_OFFSET))(this);
		}

		::System::Void _UpdateFollowAndVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__UPDATEFOLLOWANDVISIBLE_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__BUILDDATABINDING_B__29_0_OFFSET))(this);
		}

		::System::Boolean __UpdateFollowAndVisible_g____IsPointVisible_36_0(::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___UPDATEFOLLOWANDVISIBLE_G____ISPOINTVISIBLE_36_0_OFFSET))(this, worldPos);
		}

		::System::Void __UpdateFollowAndVisible_g____AutoVisible_36_1(::System::Boolean visable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___UPDATEFOLLOWANDVISIBLE_G____AUTOVISIBLE_36_1_OFFSET))(this, visable);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_UPDATE_OFFSET))(this);
		}
	};
}
