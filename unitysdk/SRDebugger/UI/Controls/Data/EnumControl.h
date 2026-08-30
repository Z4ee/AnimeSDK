#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRDebugger/UI/Controls/DataBoundControl.h"

namespace SRF::UI { class SRSpinner; }
namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { struct Enum; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0x1BDB8360)
#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x1BDB8110)
#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_GOTONEXT_OFFSET UNITYSDK_OFFSET(0x1BDB8610)
#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_GOTOPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1BDB8830)
#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x1BDB7B90)
#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0x1BDB8020)
#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1BDB8A50)
#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_SETINDEX_OFFSET UNITYSDK_OFFSET(0x1BDB83F0)
#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_START_OFFSET UNITYSDK_OFFSET(0x1BDB7B70)
#define SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB8A70)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int EnumControl_TypeDefinitionIndex = 37350;

	class EnumControl : public ::SRDebugger::UI::Controls::DataBoundControl
	{
	public:
		::System::Object* _lastValue; // 0x98
		::Il2CppArray<::System::String*>* _names; // 0xA0
		::System::Array* _values; // 0xA8
		::UnityEngine::UI::LayoutElement* ContentLayoutElement; // 0xB0
		::Il2CppArray<::UnityEngine::GameObject*>* DisableOnReadOnly; // 0xB8
		::SRF::UI::SRSpinner* Spinner; // 0xC0
		::UnityEngine::UI::Text* Title; // 0xC8
		::UnityEngine::UI::Text* Value; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_START_OFFSET))(this);
		}

		::System::Void OnBind(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_ONBIND_OFFSET))(this, a1, a2);
		}

		::System::Void OnValueUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_ONVALUEUPDATED_OFFSET))(this, a1);
		}

		::System::Boolean CanBind(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_CANBIND_OFFSET))(this, a1, a2);
		}

		::System::Void SetIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_SETINDEX_OFFSET))(this, a1);
		}

		static ::System::String* GetEnumName(::System::Enum* a1)
		{
			return ((::System::String*(*)(::System::Enum*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_GETENUMNAME_OFFSET))(a1);
		}

		::System::Void GoToNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_GOTONEXT_OFFSET))(this);
		}

		::System::Void GoToPrevious()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_GOTOPREVIOUS_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ENUMCONTROL_OPTIONCONTROL_OFFSET))(this, a1);
		}
	};
}
