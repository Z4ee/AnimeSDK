#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"

class Class_2_6BC87267F41C82C6_10;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIInLevelEllenBulletWidgetWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x198461D0)
#define MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19845C80)
#define MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0x19845DB0)
#define MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0x19845EB0)
#define MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19845C90)
#define MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19845D20)
#define MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19846210)
#define MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x198462A0)
#define MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19846330)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelEllenBulletPanelChildWindowController_TypeDefinitionIndex = 61110;

	class UIInLevelEllenBulletPanelChildWindowController : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		::Class_2_6BC87267F41C82C6_10* _view; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelEllenBulletWidgetWidgetController*>* _bulletCtrlers; // 0x358
		::System::UInt32 _ownerEntityID; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Void CollectAllAnimationComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
