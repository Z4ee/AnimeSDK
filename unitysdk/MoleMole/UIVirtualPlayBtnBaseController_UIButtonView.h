#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIVirtualPlayBtnBaseController; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET UNITYSDK_OFFSET(0x12E50560)
#define MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET UNITYSDK_OFFSET(0x12E50700)
#define MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET UNITYSDK_OFFSET(0x12E50580)
#define MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET UNITYSDK_OFFSET(0x12E50600)
#define MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET UNITYSDK_OFFSET(0x12E50680)
#define MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x12E50780)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirtualPlayBtnBaseController_UIButtonView_TypeDefinitionIndex = 79653;

	class UIVirtualPlayBtnBaseController_UIButtonView : public ::System::Object
	{
	public:
		::MoleMole::UIVirtualPlayBtnBaseController* _owner; // 0x10

		::System::Void _ctor(::MoleMole::UIVirtualPlayBtnBaseController* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirtualPlayBtnBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW__CTOR_OFFSET))(this, owner);
		}

		::Class_2_B4378B46E0020E85* get_Btn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MaxDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MinDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALPLAYBTNBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET))(this);
		}
	};
}
