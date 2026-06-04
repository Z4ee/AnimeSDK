#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRF::UI { class StyleComponent; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_SRTABBUTTON_GET_CACHERECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AD079E0)
#define SRDEBUGGER_UI_CONTROLS_SRTABBUTTON_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1AD07990)
#define SRDEBUGGER_UI_CONTROLS_SRTABBUTTON_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1AD079B0)
#define SRDEBUGGER_UI_CONTROLS_SRTABBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD07A80)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int SRTabButton_TypeDefinitionIndex = 35706;

	class SRTabButton : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::Behaviour* ActiveToggle; // 0x48
		::UnityEngine::UI::Button* Button; // 0x50
		::UnityEngine::RectTransform* ExtraContentContainer; // 0x58
		::SRF::UI::StyleComponent* IconStyleComponent; // 0x60
		::UnityEngine::UI::Text* TitleText; // 0x68
		::UnityEngine::RectTransform* _CacheRectTransform; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_SRTABBUTTON__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_SRTABBUTTON_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_SRTABBUTTON_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_CacheRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_SRTABBUTTON_GET_CACHERECTTRANSFORM_OFFSET))(this);
		}
	};
}
