#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/DataBoundControl.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0x1ACFF3E0)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x1ACFF2F0)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0x1ACFF350)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_START_OFFSET UNITYSDK_OFFSET(0x1ACFF010)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_TOGGLEONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1ACFF0E0)
#define SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFF420)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int BoolControl_TypeDefinitionIndex = 35708;

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

		::System::Void ToggleOnValueChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_TOGGLEONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnBind(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_ONBIND_OFFSET))(this, a1, a2);
		}

		::System::Void OnValueUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_ONVALUEUPDATED_OFFSET))(this, a1);
		}

		::System::Boolean CanBind(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_BOOLCONTROL_CANBIND_OFFSET))(this, a1, a2);
		}
	};
}
