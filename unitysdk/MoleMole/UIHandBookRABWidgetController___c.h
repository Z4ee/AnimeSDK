#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18422480)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184224C0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__ONGOTOBUTTON_B__37_0_OFFSET UNITYSDK_OFFSET(0x184224D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRABWidgetController___c_TypeDefinitionIndex = 83163;

	class UIHandBookRABWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookRABWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookRABWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x490E0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__37_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x490E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGoToButton_b__37_0(::System::Boolean jump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__ONGOTOBUTTON_B__37_0_OFFSET))(this, jump);
		}
	};
}
