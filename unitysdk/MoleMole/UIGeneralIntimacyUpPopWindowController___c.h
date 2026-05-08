#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralIntimacyUpPopWindowController_Context; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__ADDCONTEXT_B__11_0_OFFSET UNITYSDK_OFFSET(0x16CD0110)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CD00C0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD0100)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralIntimacyUpPopWindowController___c_TypeDefinitionIndex = 78979;

	class UIGeneralIntimacyUpPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralIntimacyUpPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralIntimacyUpPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralIntimacyUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41FB0);
		}
		static ::System::Comparison_1<::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralIntimacyUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddContext_b__11_0(::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* a, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__ADDCONTEXT_B__11_0_OFFSET))(this, a, b);
		}
	};
}
