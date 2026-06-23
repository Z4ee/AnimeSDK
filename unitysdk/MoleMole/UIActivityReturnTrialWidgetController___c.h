#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1743EBA0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__CONFRIMSELECT_B__20_1_OFFSET UNITYSDK_OFFSET(0x1743ED90)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__CONFRIMSELECT_B__20_3_OFFSET UNITYSDK_OFFSET(0x1743ED80)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1743EBE0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__OPENPREVIEW_B__16_0_OFFSET UNITYSDK_OFFSET(0x1743EBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnTrialWidgetController___c_TypeDefinitionIndex = 67656;

	class UIActivityReturnTrialWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__20_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnTrialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37820);
		}
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnTrialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37828);
		}
		static ::System::Action** StaticGet___9__20_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnTrialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37830);
		}
		static ::MoleMole::UIActivityReturnTrialWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityReturnTrialWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnTrialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OpenPreview_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__OPENPREVIEW_B__16_0_OFFSET))(this);
		}

		::System::Void _ConfrimSelect_b__20_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__CONFRIMSELECT_B__20_3_OFFSET))(this);
		}

		::System::Void _ConfrimSelect_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___C__CONFRIMSELECT_B__20_1_OFFSET))(this);
		}
	};
}
