#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRDebugger/UI/Controls/Data/NumberControl_ValueRange.h"
#include "unitysdk/SRDebugger/UI/Controls/DataBoundControl.h"

namespace SRF::UI { class SRNumberButton; }
namespace SRF::UI { class SRNumberSpinner; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0x19E8A520)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_GETMAXVALUE_OFFSET UNITYSDK_OFFSET(0x19E89F90)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_GETMINVALUE_OFFSET UNITYSDK_OFFSET(0x19E8A200)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ISDECIMALTYPE_OFFSET UNITYSDK_OFFSET(0x19E89EA0)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ISINTEGERTYPE_OFFSET UNITYSDK_OFFSET(0x19E89DB0)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x19E89A80)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19E899E0)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0x19E8A470)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x19E8A5B0)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_START_OFFSET UNITYSDK_OFFSET(0x19E898F0)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E8A5F0)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E8A5E0)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int NumberControl_TypeDefinitionIndex = 35410;

	class NumberControl : public ::SRDebugger::UI::Controls::DataBoundControl
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_IntegerTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(NumberControl_TypeDefinitionIndex)->GetStaticField(0x68E00);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_DecimalTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(NumberControl_TypeDefinitionIndex)->GetStaticField(0x68E08);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::SRDebugger::UI::Controls::Data::NumberControl_ValueRange>** StaticGet_ValueRanges()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::SRDebugger::UI::Controls::Data::NumberControl_ValueRange>**)Il2CppClass::FromTypeDefinitionIndex(NumberControl_TypeDefinitionIndex)->GetStaticField(0x68E10);
		}
		::System::String* _lastValue; // 0x98
		::System::Type* _type; // 0xA0
		::Il2CppArray<::UnityEngine::GameObject*>* DisableOnReadOnly; // 0xA8
		::SRF::UI::SRNumberButton* DownNumberButton; // 0xB0
		::SRF::UI::SRNumberSpinner* NumberSpinner; // 0xB8
		::UnityEngine::UI::Text* Title; // 0xC0
		::SRF::UI::SRNumberButton* UpNumberButton; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_START_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::String* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONVALUECHANGED_OFFSET))(this, newValue);
		}

		::System::Void OnBind(::System::String* propertyName, ::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONBIND_OFFSET))(this, propertyName, t);
		}

		::System::Void OnValueUpdated(::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONVALUEUPDATED_OFFSET))(this, newValue);
		}

		::System::Boolean CanBind(::System::Type* type, ::System::Boolean isReadOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_CANBIND_OFFSET))(this, type, isReadOnly);
		}

		static ::System::Boolean IsIntegerType(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ISINTEGERTYPE_OFFSET))(t);
		}

		static ::System::Boolean IsDecimalType(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ISDECIMALTYPE_OFFSET))(t);
		}

		::System::Double GetMaxValue(::System::Type* t)
		{
			return ((::System::Double(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_GETMAXVALUE_OFFSET))(this, t);
		}

		::System::Double GetMinValue(::System::Type* t)
		{
			return ((::System::Double(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_GETMINVALUE_OFFSET))(this, t);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_OPTIONCONTROL_OFFSET))(this, type);
		}
	};
}
