#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinition; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EA0DB0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__CREATECATEGORY_B__51_0_OFFSET UNITYSDK_OFFSET(0x19EA0E00)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA0DF0)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int OptionsTabController___c_TypeDefinitionIndex = 35358;

	class OptionsTabController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::SRDebugger::OptionDefinition*, ::System::Int32>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::SRDebugger::OptionDefinition*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OptionsTabController___c_TypeDefinitionIndex)->GetStaticField(0xFB0);
		}
		static ::SRDebugger::UI::Tabs::OptionsTabController___c** StaticGet___9()
		{
			return (::SRDebugger::UI::Tabs::OptionsTabController___c**)Il2CppClass::FromTypeDefinitionIndex(OptionsTabController___c_TypeDefinitionIndex)->GetStaticField(0xFB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateCategory_b__51_0(::SRDebugger::OptionDefinition* i)
		{
			return ((::System::Int32(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__CREATECATEGORY_B__51_0_OFFSET))(this, i);
		}
	};
}
