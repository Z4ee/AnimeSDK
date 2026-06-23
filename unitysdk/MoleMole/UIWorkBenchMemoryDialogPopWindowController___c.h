#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_423;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE85F8C0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE85F900)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0xE85F910)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMemoryDialogPopWindowController___c_TypeDefinitionIndex = 59580;

	class UIWorkBenchMemoryDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_423*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_423*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46DE0);
		}
		static ::MoleMole::UIWorkBenchMemoryDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchMemoryDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMemoryData_b__10_0(::Class_2_208CC9941471731A_423* a, ::Class_2_208CC9941471731A_423* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_423*, ::Class_2_208CC9941471731A_423*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET))(this, a, b);
		}
	};
}
