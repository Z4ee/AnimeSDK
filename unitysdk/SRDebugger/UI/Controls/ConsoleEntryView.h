#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::Services { class ConsoleEntry; }
namespace SRF::UI { class StyleComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_CONSOLEENTRYVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E877A0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLEENTRYVIEW_SETDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x19E87340)
#define SRDEBUGGER_UI_CONTROLS_CONSOLEENTRYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19E878F0)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ConsoleEntryView_TypeDefinitionIndex = 35386;

	class ConsoleEntryView : public ::SRF::SRMonoBehaviourEx
	{
	public:
		// static const ::System::String* ConsoleBlobInfo; // 0x0
		// static const ::System::String* ConsoleBlobWarning; // 0x0
		// static const ::System::String* ConsoleBlobError; // 0x0
		::System::Int32 _count; // 0x48
		::System::Boolean _hasCount; // 0x4C
		::SRDebugger::Services::ConsoleEntry* _prevData; // 0x50
		::UnityEngine::RectTransform* _rectTransform; // 0x58
		::UnityEngine::UI::Text* Count; // 0x60
		::UnityEngine::CanvasGroup* CountContainer; // 0x68
		::SRF::UI::StyleComponent* ImageStyle; // 0x70
		::UnityEngine::UI::Text* Message; // 0x78
		::UnityEngine::UI::Text* StackTrace; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLEENTRYVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetDataContext(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLEENTRYVIEW_SETDATACONTEXT_OFFSET))(this, data);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLEENTRYVIEW_AWAKE_OFFSET))(this);
		}
	};
}
