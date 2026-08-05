#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianTempleCoinWidgetController; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151224A0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__CREATEPOPDATA_B__63_0_OFFSET UNITYSDK_OFFSET(0x15122590)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151224E0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__REFRESHSMALLCHANGELIST_B__46_0_OFFSET UNITYSDK_OFFSET(0x151224F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellWidgetController___c_TypeDefinitionIndex = 45984;

	class UISuibianTempleSellWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UISuibianTempleCoinWidgetController*>** StaticGet___9__46_0()
		{
			return (::System::Comparison_1<::MoleMole::UISuibianTempleCoinWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleSellWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47360);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__63_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleSellWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47368);
		}
		static ::MoleMole::UISuibianTempleSellWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleSellWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleSellWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshSmallChangeList_b__46_0(::MoleMole::UISuibianTempleCoinWidgetController* ctrl1, ::MoleMole::UISuibianTempleCoinWidgetController* ctrl2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UISuibianTempleCoinWidgetController*, ::MoleMole::UISuibianTempleCoinWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__REFRESHSMALLCHANGELIST_B__46_0_OFFSET))(this, ctrl1, ctrl2);
		}

		::System::Int32 _CreatePopData_b__63_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__CREATEPOPDATA_B__63_0_OFFSET))(this, a, b);
		}
	};
}
