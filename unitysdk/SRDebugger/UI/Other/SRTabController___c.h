#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Other { class SRTab; }
namespace System { template <typename T> class Comparison_1; }

#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69D3A0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69D3E0)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__SORTTABS_B__21_0_OFFSET UNITYSDK_OFFSET(0x1E69D3F0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int SRTabController___c_TypeDefinitionIndex = 37320;

	class SRTabController___c : public ::System::Object
	{
	public:
		static ::SRDebugger::UI::Other::SRTabController___c** StaticGet___9()
		{
			return (::SRDebugger::UI::Other::SRTabController___c**)Il2CppClass::FromTypeDefinitionIndex(SRTabController___c_TypeDefinitionIndex)->GetStaticField(0x49110);
		}
		static ::System::Comparison_1<::SRDebugger::UI::Other::SRTab*>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::SRDebugger::UI::Other::SRTab*>**)Il2CppClass::FromTypeDefinitionIndex(SRTabController___c_TypeDefinitionIndex)->GetStaticField(0x49118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortTabs_b__21_0(::SRDebugger::UI::Other::SRTab* a1, ::SRDebugger::UI::Other::SRTab* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::SRDebugger::UI::Other::SRTab*, ::SRDebugger::UI::Other::SRTab*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__SORTTABS_B__21_0_OFFSET))(this, a1, a2);
		}
	};
}
