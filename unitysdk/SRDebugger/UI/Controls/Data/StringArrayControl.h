#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/DataBoundControl.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0x19E8BF90)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_ISENUMERATORTYPE_OFFSET UNITYSDK_OFFSET(0x19E8BFF0)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x19E8B870)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_ONVALUEINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0x19E8B360)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0x19E8BBB0)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_START_OFFSET UNITYSDK_OFFSET(0x19E8B280)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E8C0F0)
#define SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E8C0E0)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int StringArrayControl_TypeDefinitionIndex = 35413;

	class StringArrayControl : public ::SRDebugger::UI::Controls::DataBoundControl
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_EnumeratorTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(StringArrayControl_TypeDefinitionIndex)->GetStaticField(0x68EC0);
		}
		::Il2CppArray<::System::String*>* _selectValues; // 0x98
		::System::Int32 _lastIndex; // 0xA0
		::Il2CppArray<::UnityEngine::GameObject*>* DisableOnReadOnly; // 0xA8
		::UnityEngine::UI::Dropdown* DropdownButton; // 0xB0
		::UnityEngine::UI::Text* Title; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_START_OFFSET))(this);
		}

		::System::Void OnValueIndexChanged(::System::Int32 newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_ONVALUEINDEXCHANGED_OFFSET))(this, newValue);
		}

		::System::Void OnBind(::System::String* propertyName, ::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_ONBIND_OFFSET))(this, propertyName, t);
		}

		::System::Void OnValueUpdated(::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_ONVALUEUPDATED_OFFSET))(this, newValue);
		}

		::System::Boolean CanBind(::System::Type* type, ::System::Boolean isReadOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_CANBIND_OFFSET))(this, type, isReadOnly);
		}

		static ::System::Boolean IsEnumeratorType(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_STRINGARRAYCONTROL_ISENUMERATORTYPE_OFFSET))(t);
		}
	};
}
