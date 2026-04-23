#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/OptionsControlBase.h"

namespace SRF::Helpers { class PropertyReference; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_BINDCONTROL_OFFSET UNITYSDK_OFFSET(0x19E8C610)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_BIND_OFFSET UNITYSDK_OFFSET(0x19E6E980)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19E8C5E0)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x19E8C5F0)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x19E8C5D0)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x19E88C20)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19E8C9A0)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19E8C840)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19E8C830)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_REFRESH_OFFSET UNITYSDK_OFFSET(0x19E892C0)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x19E8C600)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_START_OFFSET UNITYSDK_OFFSET(0x19E889B0)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x19E88A00)
#define SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E88D10)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int DataBoundControl_TypeDefinitionIndex = 35389;

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

		::System::Void set_PropertyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_SET_PROPERTYNAME_OFFSET))(this, value);
		}

		::System::Void Bind(::System::String* propertyName, ::SRF::Helpers::PropertyReference* prop)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_BIND_OFFSET))(this, propertyName, prop);
		}

		::System::Void OnValueChanged(::SRF::Helpers::PropertyReference* property)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONVALUECHANGED_OFFSET))(this, property);
		}

		::System::Void BindControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_BINDCONTROL_OFFSET))(this);
		}

		::System::Void UpdateValue(::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_UPDATEVALUE_OFFSET))(this, newValue);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_REFRESH_OFFSET))(this);
		}

		::System::Void OnBind(::System::String* propertyName, ::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATABOUNDCONTROL_ONBIND_OFFSET))(this, propertyName, t);
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
