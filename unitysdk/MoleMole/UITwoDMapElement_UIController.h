#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITwoDMapElement_Data; }

#define MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x17BC6CC0)
#define MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17BC7300)
#define MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BC6D60)
#define MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x17BC6DD0)
#define MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_SETSIZE_OFFSET UNITYSDK_OFFSET(0x17BC6FA0)
#define MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC7360)
#define MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BC73C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITwoDMapElement_UIController_TypeDefinitionIndex = 48786;

	class UITwoDMapElement_UIController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Single _scale; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UITwoDMapElement_Data* GetData()
		{
			return ((::MoleMole::UITwoDMapElement_Data*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_GETDATA_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetPosition(::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_SETPOSITION_OFFSET))(this, offset);
		}

		::System::Void SetSize(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_SETSIZE_OFFSET))(this, scale);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_UICONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
