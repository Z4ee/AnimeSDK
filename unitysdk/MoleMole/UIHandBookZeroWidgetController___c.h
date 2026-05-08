#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1027;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14677AE0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14677B20)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__20_0_OFFSET UNITYSDK_OFFSET(0x14677B50)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_3_OFFSET UNITYSDK_OFFSET(0x14677B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroWidgetController___c_TypeDefinitionIndex = 38647;

	class UIHandBookZeroWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_1027*, ::System::Int32>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_1027*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37E00);
		}
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37E08);
		}
		static ::MoleMole::UIHandBookZeroWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookZeroWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__9_3(::Class_2_208CC9941471731A_1027* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1027*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_3_OFFSET))(this, entry);
		}

		::System::Void _OnRewardBtnClick_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__20_0_OFFSET))(this);
		}
	};
}
