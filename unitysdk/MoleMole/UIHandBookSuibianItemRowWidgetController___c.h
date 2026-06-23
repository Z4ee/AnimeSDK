#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14689000)
#define MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14689040)
#define MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER___C__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x14689050)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookSuibianItemRowWidgetController___c_TypeDefinitionIndex = 86779;

	class UIHandBookSuibianItemRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookSuibianItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A290);
		}
		static ::MoleMole::UIHandBookSuibianItemRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookSuibianItemRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookSuibianItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_1(::System::Boolean jump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANITEMROWWIDGETCONTROLLER___C__ONUIINIT_B__1_1_OFFSET))(this, jump);
		}
	};
}
