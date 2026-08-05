#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookPrimerWidgetController_TabItem; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ED5EB0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED5EF0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__INITTAB_B__12_0_OFFSET UNITYSDK_OFFSET(0x18ED5F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPrimerWidgetController___c_TypeDefinitionIndex = 40904;

	class UIHandBookPrimerWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UIHandBookPrimerWidgetController_TabItem*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::MoleMole::UIHandBookPrimerWidgetController_TabItem*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookPrimerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A470);
		}
		static ::MoleMole::UIHandBookPrimerWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookPrimerWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookPrimerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitTab_b__12_0(::MoleMole::UIHandBookPrimerWidgetController_TabItem* a, ::MoleMole::UIHandBookPrimerWidgetController_TabItem* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHandBookPrimerWidgetController_TabItem*, ::MoleMole::UIHandBookPrimerWidgetController_TabItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__INITTAB_B__12_0_OFFSET))(this, a, b);
		}
	};
}
