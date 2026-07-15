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

#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0x1A20F6C0)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_GETMAXVALUE_OFFSET UNITYSDK_OFFSET(0x1A20F1F0)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_GETMINVALUE_OFFSET UNITYSDK_OFFSET(0x1A20F400)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ISDECIMALTYPE_OFFSET UNITYSDK_OFFSET(0x1A20F100)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ISINTEGERTYPE_OFFSET UNITYSDK_OFFSET(0x1A20F010)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0x1A20EC90)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A20EBF0)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0x1A20F610)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1A20F750)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_START_OFFSET UNITYSDK_OFFSET(0x1A20EB10)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20F790)
#define SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20F780)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int NumberControl_TypeDefinitionIndex = 36492;

	class NumberControl : public ::SRDebugger::UI::Controls::DataBoundControl
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_DecimalTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(NumberControl_TypeDefinitionIndex)->GetStaticField(0x62840);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_IntegerTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(NumberControl_TypeDefinitionIndex)->GetStaticField(0x62848);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::SRDebugger::UI::Controls::Data::NumberControl_ValueRange>** StaticGet_ValueRanges()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::SRDebugger::UI::Controls::Data::NumberControl_ValueRange>**)Il2CppClass::FromTypeDefinitionIndex(NumberControl_TypeDefinitionIndex)->GetStaticField(0x62850);
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

		::System::Void OnValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnBind(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONBIND_OFFSET))(this, a1, a2);
		}

		::System::Void OnValueUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ONVALUEUPDATED_OFFSET))(this, a1);
		}

		::System::Boolean CanBind(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_CANBIND_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IsIntegerType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ISINTEGERTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsDecimalType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_ISDECIMALTYPE_OFFSET))(a1);
		}

		::System::Double GetMaxValue(::System::Type* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_GETMAXVALUE_OFFSET))(this, a1);
		}

		::System::Double GetMinValue(::System::Type* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_GETMINVALUE_OFFSET))(this, a1);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_NUMBERCONTROL_OPTIONCONTROL_OFFSET))(this, a1);
		}
	};
}
