#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ButtonSizes.h"
#include "unitysdk/Sirenix/OdinInspector/ButtonStyle.h"
#include "unitysdk/Sirenix/OdinInspector/ShowInInspectorAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE_GET_DRAWRESULTISSET_OFFSET UNITYSDK_OFFSET(0x1F76FA80)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE_GET_DRAWRESULT_OFFSET UNITYSDK_OFFSET(0x1F76FA70)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE_SET_DRAWRESULT_OFFSET UNITYSDK_OFFSET(0x1F76FA60)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1F76FBE0)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_11_OFFSET UNITYSDK_OFFSET(0x1F76FC00)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_12_OFFSET UNITYSDK_OFFSET(0x1F76FC20)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_13_OFFSET UNITYSDK_OFFSET(0x1F76FC40)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F76FAC0)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F76FAE0)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F76FB00)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1F76FB20)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1F76FB40)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1F76FB60)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1F76FB80)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1F76FBA0)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1F76FBC0)
#define SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76FA90)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ButtonAttribute_TypeDefinitionIndex = 7267;

	class ButtonAttribute : public ::Sirenix::OdinInspector::ShowInInspectorAttribute
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Tooltip; // 0x18
		::System::Boolean drawResultIsSet; // 0x20
		::System::Boolean drawResult; // 0x21
		::System::Int32 ButtonHeight; // 0x24
		::System::Boolean FloatButton; // 0x28
		::System::Boolean Expanded; // 0x29
		::System::Boolean DisplayParameters; // 0x2A
		::Sirenix::OdinInspector::ButtonStyle Style; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Sirenix::OdinInspector::ButtonSizes size)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::ButtonSizes))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_1_OFFSET))(this, size);
		}

		::System::Void _ctor_2(::System::Int32 buttonSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_2_OFFSET))(this, buttonSize);
		}

		::System::Void _ctor_3(::System::String* name, ::System::Boolean floatStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_3_OFFSET))(this, name, floatStyle);
		}

		::System::Void _ctor_4(::System::String* name, ::System::String* tooltip, ::System::Boolean floatStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_4_OFFSET))(this, name, tooltip, floatStyle);
		}

		::System::Void _ctor_5(::System::String* name, ::System::String* tooltip, ::System::Int32 buttonSize, ::System::Boolean floatStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_5_OFFSET))(this, name, tooltip, buttonSize, floatStyle);
		}

		::System::Void _ctor_6(::System::String* name, ::Sirenix::OdinInspector::ButtonSizes buttonSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Sirenix::OdinInspector::ButtonSizes))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_6_OFFSET))(this, name, buttonSize);
		}

		::System::Void _ctor_7(::System::String* name, ::System::Int32 buttonSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_7_OFFSET))(this, name, buttonSize);
		}

		::System::Void _ctor_8(::Sirenix::OdinInspector::ButtonStyle parameterBtnStyle)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::ButtonStyle))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_8_OFFSET))(this, parameterBtnStyle);
		}

		::System::Void _ctor_9(::System::Int32 buttonSize, ::Sirenix::OdinInspector::ButtonStyle parameterBtnStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Sirenix::OdinInspector::ButtonStyle))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_9_OFFSET))(this, buttonSize, parameterBtnStyle);
		}

		::System::Void _ctor_10(::Sirenix::OdinInspector::ButtonSizes size, ::Sirenix::OdinInspector::ButtonStyle parameterBtnStyle)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::ButtonSizes, ::Sirenix::OdinInspector::ButtonStyle))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_10_OFFSET))(this, size, parameterBtnStyle);
		}

		::System::Void _ctor_11(::System::String* name, ::Sirenix::OdinInspector::ButtonStyle parameterBtnStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Sirenix::OdinInspector::ButtonStyle))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_11_OFFSET))(this, name, parameterBtnStyle);
		}

		::System::Void _ctor_12(::System::String* name, ::Sirenix::OdinInspector::ButtonSizes buttonSize, ::Sirenix::OdinInspector::ButtonStyle parameterBtnStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Sirenix::OdinInspector::ButtonSizes, ::Sirenix::OdinInspector::ButtonStyle))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_12_OFFSET))(this, name, buttonSize, parameterBtnStyle);
		}

		::System::Void _ctor_13(::System::String* name, ::System::Int32 buttonSize, ::Sirenix::OdinInspector::ButtonStyle parameterBtnStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Sirenix::OdinInspector::ButtonStyle))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE__CTOR_13_OFFSET))(this, name, buttonSize, parameterBtnStyle);
		}

		::System::Void set_DrawResult(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE_SET_DRAWRESULT_OFFSET))(this, value);
		}

		::System::Boolean get_DrawResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE_GET_DRAWRESULT_OFFSET))(this);
		}

		::System::Boolean get_DrawResultIsSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONATTRIBUTE_GET_DRAWRESULTISSET_OFFSET))(this);
		}
	};
}
