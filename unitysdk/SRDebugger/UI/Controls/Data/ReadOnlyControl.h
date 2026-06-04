#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/DataBoundControl.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0x1AD01730)
#define SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x1AD01510)
#define SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0x1AD016F0)
#define SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL_START_OFFSET UNITYSDK_OFFSET(0x1AD014F0)
#define SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD01770)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int ReadOnlyControl_TypeDefinitionIndex = 35712;

	class ReadOnlyControl : public ::SRDebugger::UI::Controls::DataBoundControl
	{
	public:
		::UnityEngine::UI::Text* ValueText; // 0x98
		::UnityEngine::UI::Text* Title; // 0xA0
		::UnityEngine::GameObject* ScrollContent; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL_START_OFFSET))(this);
		}

		::System::Void OnBind(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL_ONBIND_OFFSET))(this, a1, a2);
		}

		::System::Void OnValueUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL_ONVALUEUPDATED_OFFSET))(this, a1);
		}

		::System::Boolean CanBind(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_READONLYCONTROL_CANBIND_OFFSET))(this, a1, a2);
		}
	};
}
