#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UISurfAutoSkillButton_1.h"

class Class_2_0C1EE8A3BE8526FC_2;
class Class_2_B4378B46E0020E85;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x13829390)
#define MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x13829380)
#define MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0x13829360)
#define MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x13829340)
#define MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x138293A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfJumpChildWindowController_TypeDefinitionIndex = 67528;

	class UISurfJumpChildWindowController : public ::MoleMole::UISurfAutoSkillButton_1<::Class_2_0C1EE8A3BE8526FC_2*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_SkillButton()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFJUMPCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}
	};
}
