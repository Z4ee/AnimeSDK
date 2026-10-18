#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasGroup; }

#define RPG_CLIENT_UI_UISTATECTRL_CANVASGROUPALPHADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE348B80)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int CanvasGroupAlphaData_TypeDefinitionIndex = 74046;

	class CanvasGroupAlphaData : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* CanvasGroup; // 0x10
		::System::Single Alpha; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_CANVASGROUPALPHADATA__CTOR_OFFSET))(this);
		}
	};
}
