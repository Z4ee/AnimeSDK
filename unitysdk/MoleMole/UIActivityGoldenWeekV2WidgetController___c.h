#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174326B0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174326F0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__REFRESHSHOWTABLE_B__24_0_OFFSET UNITYSDK_OFFSET(0x17432700)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGoldenWeekV2WidgetController___c_TypeDefinitionIndex = 82048;

	class UIActivityGoldenWeekV2WidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityGoldenWeekV2WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityGoldenWeekV2WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityGoldenWeekV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x377C0);
		}
		static ::System::Comparison_1<::Class_1_D375C91CCE5D3999*>** StaticGet___9__24_0()
		{
			return (::System::Comparison_1<::Class_1_D375C91CCE5D3999*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityGoldenWeekV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x377C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshShowTable_b__24_0(::Class_1_D375C91CCE5D3999* x, ::Class_1_D375C91CCE5D3999* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___C__REFRESHSHOWTABLE_B__24_0_OFFSET))(this, x, y);
		}
	};
}
