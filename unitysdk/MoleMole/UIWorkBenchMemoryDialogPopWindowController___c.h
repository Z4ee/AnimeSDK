#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_360;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F04570)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F045B0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x10F045C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMemoryDialogPopWindowController___c_TypeDefinitionIndex = 72605;

	class UIWorkBenchMemoryDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIWorkBenchMemoryDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchMemoryDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AF60);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_360*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_360*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMemoryData_b__10_0(::Class_2_208CC9941471731A_360* a, ::Class_2_208CC9941471731A_360* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_360*, ::Class_2_208CC9941471731A_360*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET))(this, a, b);
		}
	};
}
