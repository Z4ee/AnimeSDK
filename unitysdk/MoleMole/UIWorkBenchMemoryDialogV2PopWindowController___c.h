#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_360;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B0C6A0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0C6E0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x15B0C6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMemoryDialogV2PopWindowController___c_TypeDefinitionIndex = 74387;

	class UIWorkBenchMemoryDialogV2PopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIWorkBenchMemoryDialogV2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchMemoryDialogV2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x33470);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_360*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_360*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x33478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMemoryData_b__10_0(::Class_2_208CC9941471731A_360* a, ::Class_2_208CC9941471731A_360* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_360*, ::Class_2_208CC9941471731A_360*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET))(this, a, b);
		}
	};
}
