#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/OptionsControlBase.h"

namespace SRF::Helpers { class PropertyReference; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_BINDCONTROL_OFFSET UNITYSDK_OFFSET(0x1BDBBD50)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_BIND_OFFSET UNITYSDK_OFFSET(0x1BD9BF50)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1BDBBD20)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BDBBD30)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1BDBBD10)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x1BDB7A70)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BDBC0C0)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BDBBF40)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BDBBF30)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_REFRESH_OFFSET UNITYSDK_OFFSET(0x1BDB8430)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BDBBD40)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_START_OFFSET UNITYSDK_OFFSET(0x1BDB7720)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1BDB7770)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB7B60)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int DataBoundControl_TypeDefinitionIndex = 37330;

	class DataBoundControl : public ::SRDebugger::UI::Controls::OptionsControlBase
	{
	public:
		::System::Boolean _hasStarted; // 0x78
		::System::Boolean _isReadOnly; // 0x79
		::System::Object* _prevValue; // 0x80
		::SRF::Helpers::PropertyReference* _prop; // 0x88
		::System::String* _PropertyName_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL__CTOR_OFFSET))(this);
		}

		::SRF::Helpers::PropertyReference* get_Property()
		{
			return ((::SRF::Helpers::PropertyReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_GET_PROPERTY_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_GET_ISREADONLY_OFFSET))(this);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_SET_PROPERTYNAME_OFFSET))(this, a1);
		}

		::System::Void Bind(::System::String* a1, ::SRF::Helpers::PropertyReference* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void OnValueChanged(::SRF::Helpers::PropertyReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void BindControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_BINDCONTROL_OFFSET))(this);
		}

		::System::Void UpdateValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_UPDATEVALUE_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_REFRESH_OFFSET))(this);
		}

		::System::Void OnBind(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONBIND_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONDISABLE_OFFSET))(this);
		}
	};
}
