#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_410;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF3A41F0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF3A4230)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__INITMEMORYDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0xF3A4240)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__ONSELECTMEMORYITEM_B__13_0_OFFSET UNITYSDK_OFFSET(0xF3A4290)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c_TypeDefinitionIndex = 40991;

	class UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F400);
		}
		static ::MoleMole::UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F408);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_410*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_410*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMemoryData_b__12_0(::Class_2_208CC9941471731A_410* a, ::Class_2_208CC9941471731A_410* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_410*, ::Class_2_208CC9941471731A_410*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__INITMEMORYDATA_B__12_0_OFFSET))(this, a, b);
		}

		::System::Void _OnSelectMemoryItem_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__ONSELECTMEMORYITEM_B__13_0_OFFSET))(this);
		}
	};
}
