#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A0999DD62F5BF03;
class Class_2_208CC9941471731A_643;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AFD470)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFD4B0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__ONUIINIT_B__2_3_OFFSET UNITYSDK_OFFSET(0x18AFD4C0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__REFRESHSHOPPOPUP_B__11_1_OFFSET UNITYSDK_OFFSET(0x18AFD4E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookWeeklyQuestWidgetController___c_TypeDefinitionIndex = 61786;

	class UIHandBookWeeklyQuestWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_1_7A0999DD62F5BF03*>** StaticGet___9__11_1()
		{
			return (::System::Predicate_1<::Class_1_7A0999DD62F5BF03*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47170);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_643*, ::System::Int32>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_643*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47178);
		}
		static ::MoleMole::UIHandBookWeeklyQuestWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookWeeklyQuestWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__2_3(::Class_2_208CC9941471731A_643* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_643*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__ONUIINIT_B__2_3_OFFSET))(this, entry);
		}

		::System::Boolean _RefreshShopPopup_b__11_1(::Class_1_7A0999DD62F5BF03* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__REFRESHSHOPPOPUP_B__11_1_OFFSET))(this, x);
		}
	};
}
