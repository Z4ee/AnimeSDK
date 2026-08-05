#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIInLevelCoAttackBtnChildWindowController; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET UNITYSDK_OFFSET(0x1849C6F0)
#define MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET UNITYSDK_OFFSET(0x1849C990)
#define MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET UNITYSDK_OFFSET(0x1849C720)
#define MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET UNITYSDK_OFFSET(0x1849C7F0)
#define MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET UNITYSDK_OFFSET(0x1849C8C0)
#define MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1849CA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCoAttackBtnChildWindowController_UIButtonView_TypeDefinitionIndex = 79499;

	class UIInLevelCoAttackBtnChildWindowController_UIButtonView : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelCoAttackBtnChildWindowController* _owner; // 0x10

		::System::Void _ctor(::MoleMole::UIInLevelCoAttackBtnChildWindowController* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelCoAttackBtnChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW__CTOR_OFFSET))(this, owner);
		}

		::Class_2_B4378B46E0020E85* get_Btn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MaxDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MinDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCOATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET))(this);
		}
	};
}
