#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIInLevelAidAttackBtnChildWindowController; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET UNITYSDK_OFFSET(0x1481E2A0)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET UNITYSDK_OFFSET(0x1481E540)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET UNITYSDK_OFFSET(0x1481E2D0)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET UNITYSDK_OFFSET(0x1481E3A0)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET UNITYSDK_OFFSET(0x1481E470)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1481E610)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAidAttackBtnChildWindowController_UIButtonView_TypeDefinitionIndex = 50060;

	class UIInLevelAidAttackBtnChildWindowController_UIButtonView : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelAidAttackBtnChildWindowController* _owner; // 0x10

		::System::Void _ctor(::MoleMole::UIInLevelAidAttackBtnChildWindowController* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelAidAttackBtnChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW__CTOR_OFFSET))(this, owner);
		}

		::Class_2_B4378B46E0020E85* get_Btn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MaxDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MinDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET))(this);
		}
	};
}
