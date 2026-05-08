#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHANDBOOKTOWERWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FA1420)
#define MOLEMOLE_UIHANDBOOKTOWERWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA1460)
#define MOLEMOLE_UIHANDBOOKTOWERWIDGETCONTROLLER___C__ONUIINIT_B__2_2_OFFSET UNITYSDK_OFFSET(0x15FA1470)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTowerWidgetController___c_TypeDefinitionIndex = 42717;

	class UIHandBookTowerWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookTowerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47B50);
		}
		static ::MoleMole::UIHandBookTowerWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookTowerWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookTowerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47B58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__2_2(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERWIDGETCONTROLLER___C__ONUIINIT_B__2_2_OFFSET))(this, i);
		}
	};
}
