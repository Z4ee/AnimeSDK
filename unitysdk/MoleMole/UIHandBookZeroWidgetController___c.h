#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A0999DD62F5BF03;
class Class_2_208CC9941471731A_643;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3289A0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3289E0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__20_0_OFFSET UNITYSDK_OFFSET(0x1A328A40)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_3_OFFSET UNITYSDK_OFFSET(0x1A3289F0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__REFRESHREDEEM_B__18_1_OFFSET UNITYSDK_OFFSET(0x1A328A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroWidgetController___c_TypeDefinitionIndex = 62178;

	class UIHandBookZeroWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_1_7A0999DD62F5BF03*>** StaticGet___9__18_1()
		{
			return (::System::Predicate_1<::Class_1_7A0999DD62F5BF03*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D0A0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_643*, ::System::Int32>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_643*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D0A8);
		}
		static ::MoleMole::UIHandBookZeroWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookZeroWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D0B0);
		}
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D0B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__9_3(::Class_2_208CC9941471731A_643* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_643*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_3_OFFSET))(this, entry);
		}

		::System::Boolean _RefreshRedeem_b__18_1(::Class_1_7A0999DD62F5BF03* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__REFRESHREDEEM_B__18_1_OFFSET))(this, x);
		}

		::System::Void _OnRewardBtnClick_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__20_0_OFFSET))(this);
		}
	};
}
