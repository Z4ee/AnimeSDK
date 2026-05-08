#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44CBA518ED37A411;
class Class_3_E2CC6290DEE53563;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E86B30)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E86B70)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_0_OFFSET UNITYSDK_OFFSET(0x15E86B80)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_1_OFFSET UNITYSDK_OFFSET(0x15E86B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex = 76806;

	class UIActivityExchangeDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_44CBA518ED37A411*, ::System::UInt32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::Class_1_44CBA518ED37A411*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41E80);
		}
		static ::System::Func_2<::Class_3_E2CC6290DEE53563*, ::Class_1_44CBA518ED37A411*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::Class_3_E2CC6290DEE53563*, ::Class_1_44CBA518ED37A411*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41E88);
		}
		static ::MoleMole::UIActivityExchangeDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityExchangeDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_1_44CBA518ED37A411* _UpdateExchangeTable_b__15_0(::Class_3_E2CC6290DEE53563* x)
		{
			return ((::Class_1_44CBA518ED37A411*(*)(::PVOID, ::Class_3_E2CC6290DEE53563*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_0_OFFSET))(this, x);
		}

		::System::UInt32 _UpdateExchangeTable_b__15_1(::Class_1_44CBA518ED37A411* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_44CBA518ED37A411*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_1_OFFSET))(this, x);
		}
	};
}
