#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"

class Class_2_6BC87267F41C82C6_2;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x190F9320)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x190F8A30)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0x190F8B60)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0x190F8C10)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x190F9070)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190F8A40)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190F8AD0)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_SETUPITEM_OFFSET UNITYSDK_OFFSET(0x190F8D60)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190F9360)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x190F9370)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190F9400)
#define MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190F9490)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelLisaPanelChildWindowController_TypeDefinitionIndex = 49063;

	class UIInLevelLisaPanelChildWindowController : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		::Class_2_6BC87267F41C82C6_2* _view; // 0x350
		::UnityEngine::Material* _mat1; // 0x358
		::UnityEngine::Material* _mat2; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Void OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void CollectAllAnimationComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET))(this);
		}

		::System::Void SetupItem(::System::Int32 itemIndex, ::System::Int32 curNum, ::System::Boolean isMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER_SETUPITEM_OFFSET))(this, itemIndex, curNum, isMax);
		}

		::System::Void __base_OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLISAPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
