#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTNCONTROLLER_GET_TABBUTTON_OFFSET UNITYSDK_OFFSET(0x148E4160)
#define MOLEMOLE_UITABBTNCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x148E4170)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnController_TypeDefinitionIndex = 41221;

	class UITabBtnController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::UI::Extension::UITabButton* _TabButton_k__BackingField; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_TabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNCONTROLLER_GET_TABBUTTON_OFFSET))(this);
		}
	};
}
