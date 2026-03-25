#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/DataBoundControl.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0x18451720)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x18451490)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x18451480)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0x184516C0)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_START_OFFSET UNITYSDK_OFFSET(0x18451390)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18451770)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int StringControl_TypeDefinitionIndex = 29694;

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

		::System::Void OnValueChanged(::System::String* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONVALUECHANGED_OFFSET))(this, newValue);
		}

		::System::Void OnBind(::System::String* propertyName, ::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONBIND_OFFSET))(this, propertyName, t);
		}

		::System::Void OnValueUpdated(::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_ONVALUEUPDATED_OFFSET))(this, newValue);
		}

		::System::Boolean CanBind(::System::Type* type, ::System::Boolean isReadOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGCONTROL_CANBIND_OFFSET))(this, type, isReadOnly);
		}
	};
}
