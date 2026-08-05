#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199BCCE0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199BCD20)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DOPOWERACTION_B__21_0_OFFSET UNITYSDK_OFFSET(0x199BCD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemUsePopWindowController___c_TypeDefinitionIndex = 55115;

	class UIGeneralItemUsePopWindowController___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__21_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemUsePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47160);
		}
		static ::MoleMole::UIGeneralItemUsePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralItemUsePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemUsePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoPowerAction_b__21_0(::Class_0_16E4307DCC419505_36* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DOPOWERACTION_B__21_0_OFFSET))(this, e);
		}
	};
}
