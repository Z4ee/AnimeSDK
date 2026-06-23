#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
namespace MoleMole { class UISkillButtonBaseController; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET UNITYSDK_OFFSET(0x1533FD80)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET UNITYSDK_OFFSET(0x1533FFE0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET UNITYSDK_OFFSET(0x1533FDA0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET UNITYSDK_OFFSET(0x1533FE60)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET UNITYSDK_OFFSET(0x1533FF20)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x153400A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController_UIButtonView_TypeDefinitionIndex = 83326;

	class UISkillButtonBaseController_UIButtonView : public ::System::Object
	{
	public:
		::MoleMole::UISkillButtonBaseController* _owner; // 0x10

		::System::Void _ctor(::MoleMole::UISkillButtonBaseController* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISkillButtonBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW__CTOR_OFFSET))(this, owner);
		}

		::Class_2_B4378B46E0020E85* get_Btn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MaxDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MinDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET))(this);
		}
	};
}
