#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"

class Class_2_53FDDB62C05D7434;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIInLevelAstraChildWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x17C084B0)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17C07D60)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0x17C08000)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0x17C08100)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x17C07E90)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17C07D70)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17C07E00)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C08570)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x17C08600)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17C08690)
#define MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17C08720)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAstraPanelChildWindowController_TypeDefinitionIndex = 88441;

	class UIInLevelAstraPanelChildWindowController : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		// static const ::System::String* GLOW_FADE_IN_ANIM_CLIP; // 0x0
		// static const ::System::String* GLOW_FADE_OUT_ANIM_CLIP; // 0x0
		::Class_2_53FDDB62C05D7434* _view; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelAstraChildWindowController*>* _childCtrlers; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void CollectAllAnimationComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Void __base_OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRAPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
