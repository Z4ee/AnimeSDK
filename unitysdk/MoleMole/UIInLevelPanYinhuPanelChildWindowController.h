#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"

class Class_2_14B0BFEBE8C5942A_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIInLevelPanYinhuWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x18FDC330)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18FDC200)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0x18FDC370)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0x18FDC420)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x18FDCA90)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FDC210)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FDC2A0)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_RECREATEITEMLIST_OFFSET UNITYSDK_OFFSET(0x18FDC620)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDCB10)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x18FDCBA0)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FDCC30)
#define MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FDCCC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPanYinhuPanelChildWindowController_TypeDefinitionIndex = 47163;

	class UIInLevelPanYinhuPanelChildWindowController : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		::Class_2_14B0BFEBE8C5942A_3* _view; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPanYinhuWidgetController*>* _itemList; // 0x358
		::System::Boolean _isFullLightFlameOn; // 0x360
		::System::Int32 _maxRedLightCount; // 0x364
		::System::Int32 _curRedLightCount; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void CollectAllAnimationComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Void OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void RecreateItemList(::System::Int32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER_RECREATEITEMLIST_OFFSET))(this, num);
		}

		::System::Void __base_OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
