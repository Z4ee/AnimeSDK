#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_243;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E88E90)
#define MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E88ED0)
#define MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__REFRESHSCROLLVIEW_B__15_0_OFFSET UNITYSDK_OFFSET(0x13E88EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerSettlementDialogPopWindowController___c_TypeDefinitionIndex = 76113;

	class UIFlowerSettlementDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_243*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_243*>**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerSettlementDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32720);
		}
		static ::MoleMole::UIFlowerSettlementDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIFlowerSettlementDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerSettlementDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollView_b__15_0(::Class_0_16E4307DCC419505_243* x, ::Class_0_16E4307DCC419505_243* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_243*, ::Class_0_16E4307DCC419505_243*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__REFRESHSCROLLVIEW_B__15_0_OFFSET))(this, x, y);
		}
	};
}
