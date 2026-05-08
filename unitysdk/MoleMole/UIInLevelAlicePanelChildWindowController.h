#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"

class Class_2_DD249427878F7751;
namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue; }
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x15D75880)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_GET_PLACEHOLDERKEY_CURCHARGEPOINT_OFFSET UNITYSDK_OFFSET(0x157D3370)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_GET_PLACEHOLDERKEY_ISENHANCE_OFFSET UNITYSDK_OFFSET(0x157D33B0)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_GET_PLACEHOLDERKEY_MAXCHARGEPOINT_OFFSET UNITYSDK_OFFSET(0x157D33F0)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x157D3360)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0x157D35C0)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0x157D37A0)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_HANDLEITEMMAT_OFFSET UNITYSDK_OFFSET(0x15D751E0)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ISARRIVEMAXVALUE_OFFSET UNITYSDK_OFFSET(0x157D4180)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ISITEMALREADYFADEIN_OFFSET UNITYSDK_OFFSET(0x15D75940)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ISITEMFULL_OFFSET UNITYSDK_OFFSET(0x15D75090)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x15D75400)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157D3430)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157D34C0)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D759B0)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x15D75A50)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D75AE0)
#define MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D75B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAlicePanelChildWindowController_TypeDefinitionIndex = 64447;

	class UIInLevelAlicePanelChildWindowController : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		// static const ::System::String* IteFadeInAnimationClip; // 0x0
		// static const ::System::String* ItemFadeOutAnimationClip; // 0x0
		// static const ::System::String* ItemMaxAnimationClip; // 0x0
		::Class_2_DD249427878F7751* _view; // 0x348
		::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue* _realConfig; // 0x350
		::UnityEngine::Material* _mat1; // 0x358
		::UnityEngine::Material* _mat2; // 0x360
		::UnityEngine::Material* _mat3; // 0x368
		::System::Collections::Generic::List_1<::System::Boolean>* _itemAlreadyFadeInStates; // 0x370
		::System::Collections::Generic::List_1<::System::Boolean>* _itemAlreadyRefreshed; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::String* get_PlaceHolderKey_CurChargePoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_GET_PLACEHOLDERKEY_CURCHARGEPOINT_OFFSET))(this);
		}

		::System::String* get_PlaceHolderKey_IsEnhance()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_GET_PLACEHOLDERKEY_ISENHANCE_OFFSET))(this);
		}

		::System::String* get_PlaceHolderKey_MaxChargePoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_GET_PLACEHOLDERKEY_MAXCHARGEPOINT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Boolean IsArriveMaxValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ISARRIVEMAXVALUE_OFFSET))(this);
		}

		::System::Boolean IsItemFull(::System::Int32 itemIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ISITEMFULL_OFFSET))(this, itemIndex);
		}

		::System::Void HandleItemMat(::System::Int32 itemIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_HANDLEITEMMAT_OFFSET))(this, itemIndex);
		}

		::System::Void OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void CollectAllAnimationComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET))(this);
		}

		::System::Boolean IsItemAlreadyFadeIn(::System::Int32 itemIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER_ISITEMALREADYFADEIN_OFFSET))(this, itemIndex);
		}

		::System::Void __base_OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELALICEPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
