#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_423;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1041F910)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1041F950)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__INITMEMORYDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0x1041F960)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__ONSELECTMEMORYITEM_B__13_0_OFFSET UNITYSDK_OFFSET(0x1041F9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c_TypeDefinitionIndex = 65561;

	class UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_423*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_423*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x31200);
		}
		static ::MoleMole::UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x31208);
		}
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreeDetailsCardMemorylInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x31210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMemoryData_b__12_0(::Class_2_208CC9941471731A_423* a, ::Class_2_208CC9941471731A_423* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_423*, ::Class_2_208CC9941471731A_423*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__INITMEMORYDATA_B__12_0_OFFSET))(this, a, b);
		}

		::System::Void _OnSelectMemoryItem_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDMEMORYLINFOWIDGETCONTROLLER___C__ONSELECTMEMORYITEM_B__13_0_OFFSET))(this);
		}
	};
}
