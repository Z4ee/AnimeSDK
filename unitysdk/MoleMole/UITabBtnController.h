#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTNCONTROLLER_GET_TABBUTTON_OFFSET UNITYSDK_OFFSET(0x15A613E0)
#define MOLEMOLE_UITABBTNCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A613F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnController_TypeDefinitionIndex = 44605;

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
