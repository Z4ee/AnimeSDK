#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"

namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUI; }
namespace MoleMole { class UIInLevelLightUpPointsItemControllerBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_GET_ISARRIVEMAXPOINT_OFFSET UNITYSDK_OFFSET(0x150DB460)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x150DB450)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0x150DB5C0)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLEARRIVEMAXPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0x150DC0F0)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLECURPOINT_OFFSET UNITYSDK_OFFSET(0x150DBF00)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0x150DB6D0)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLEMAXPOINT_OFFSET UNITYSDK_OFFSET(0x150DB8D0)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x150DB850)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x150DB510)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x150DC260)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x150DC390)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x150DC2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelLightUpPointsPanelControllerBase_TypeDefinitionIndex = 60344;

	class UIInLevelLightUpPointsPanelControllerBase : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI* _realConfig; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelLightUpPointsItemControllerBase*>* _itemCtrlers; // 0x350
		::System::Boolean _lastIsArriveMaxPoint; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsArriveMaxPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_GET_ISARRIVEMAXPOINT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Void OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void HandleMaxPoint(::System::Int32 maxPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLEMAXPOINT_OFFSET))(this, maxPoint);
		}

		::System::Void HandleCurPoint(::System::Int32 curPoint, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLECURPOINT_OFFSET))(this, curPoint, ignoreAnimation);
		}

		::System::Void HandleArriveMaxPointChanged(::System::Boolean isArriveMaxPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE_HANDLEARRIVEMAXPOINTCHANGED_OFFSET))(this, isArriveMaxPoint);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSPANELCONTROLLERBASE___BASE_ONATTACHENTITY_OFFSET))(this);
		}
	};
}
