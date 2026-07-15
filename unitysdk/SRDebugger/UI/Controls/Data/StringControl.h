#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/DataBoundControl.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0x1A211C90)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x1A2118B0)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A2118A0)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0x1A211C30)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_START_OFFSET UNITYSDK_OFFSET(0x1A2117C0)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A211CD0)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int StringControl_TypeDefinitionIndex = 36496;

	class StringControl : public ::SRDebugger::UI::Controls::DataBoundControl
	{
	public:
		::UnityEngine::UI::InputField* InputField; // 0x98
		::UnityEngine::UI::Text* Title; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_START_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnBind(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONBIND_OFFSET))(this, a1, a2);
		}

		::System::Void OnValueUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONVALUEUPDATED_OFFSET))(this, a1);
		}

		::System::Boolean CanBind(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_CANBIND_OFFSET))(this, a1, a2);
		}
	};
}
