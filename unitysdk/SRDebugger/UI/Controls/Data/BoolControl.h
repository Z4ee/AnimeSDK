#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/DataBoundControl.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0x19E88CC0)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x19E88BD0)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0x19E88C30)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_START_OFFSET UNITYSDK_OFFSET(0x19E88920)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_TOGGLEONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19E889D0)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E88D00)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int BoolControl_TypeDefinitionIndex = 35408;

	class BoolControl : public ::SRDebugger::UI::Controls::DataBoundControl
	{
	public:
		::UnityEngine::UI::Text* Title; // 0x98
		::UnityEngine::UI::Toggle* Toggle; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_START_OFFSET))(this);
		}

		::System::Void ToggleOnValueChanged(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_TOGGLEONVALUECHANGED_OFFSET))(this, isOn);
		}

		::System::Void OnBind(::System::String* propertyName, ::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_ONBIND_OFFSET))(this, propertyName, t);
		}

		::System::Void OnValueUpdated(::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_ONVALUEUPDATED_OFFSET))(this, newValue);
		}

		::System::Boolean CanBind(::System::Type* type, ::System::Boolean isReadOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_CANBIND_OFFSET))(this, type, isReadOnly);
		}
	};
}
