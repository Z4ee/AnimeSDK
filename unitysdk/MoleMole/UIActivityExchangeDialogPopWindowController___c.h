#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44CBA518ED37A411;
class Class_3_0D91E5D723663FA4;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x191E7330)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191E7370)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_0_OFFSET UNITYSDK_OFFSET(0x191E7380)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_1_OFFSET UNITYSDK_OFFSET(0x191E7390)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex = 40716;

	class UIActivityExchangeDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_44CBA518ED37A411*, ::System::UInt32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::Class_1_44CBA518ED37A411*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48F50);
		}
		static ::System::Func_2<::Class_3_0D91E5D723663FA4*, ::Class_1_44CBA518ED37A411*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::Class_3_0D91E5D723663FA4*, ::Class_1_44CBA518ED37A411*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48F58);
		}
		static ::MoleMole::UIActivityExchangeDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityExchangeDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_1_44CBA518ED37A411* _UpdateExchangeTable_b__15_0(::Class_3_0D91E5D723663FA4* x)
		{
			return ((::Class_1_44CBA518ED37A411*(*)(::PVOID, ::Class_3_0D91E5D723663FA4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_0_OFFSET))(this, x);
		}

		::System::UInt32 _UpdateExchangeTable_b__15_1(::Class_1_44CBA518ED37A411* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_44CBA518ED37A411*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_1_OFFSET))(this, x);
		}
	};
}
