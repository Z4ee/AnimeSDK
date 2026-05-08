#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_328B10E9F3553A0D;
class Class_2_7B15B3118FE590CD_19_Class_2_99BC69CB30FB4283;
namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D37C00)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SHOWTRANSITION_B__10_OFFSET UNITYSDK_OFFSET(0x14D38360)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SHOWTRANSITION_G__BINDBUTTON_2_OFFSET UNITYSDK_OFFSET(0x14D37E10)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SHOWTRANSITION_G__SHOWINFORMATION_1_OFFSET UNITYSDK_OFFSET(0x14D37C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass47_0_TypeDefinitionIndex = 47782;

	class UIMainCityChatPlayWidgetController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Action* __9__10; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* visitedList; // 0x18
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x20
		::Class_1_328B10E9F3553A0D* transitionNode; // 0x28
		::System::Single length; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTransition_g__ShowInformation_1(::Class_2_7B15B3118FE590CD_19_Class_2_99BC69CB30FB4283* go, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem* config, ::System::Boolean greyText)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7B15B3118FE590CD_19_Class_2_99BC69CB30FB4283*, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SHOWTRANSITION_G__SHOWINFORMATION_1_OFFSET))(this, go, config, greyText);
		}

		::System::Void _ShowTransition_g__BindButton_2(::Class_2_7B15B3118FE590CD_19_Class_2_99BC69CB30FB4283* go, ::System::Int32 buttonIndex, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7B15B3118FE590CD_19_Class_2_99BC69CB30FB4283*, ::System::Int32, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SHOWTRANSITION_G__BINDBUTTON_2_OFFSET))(this, go, buttonIndex, config);
		}

		::System::Void _ShowTransition_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SHOWTRANSITION_B__10_OFFSET))(this);
		}
	};
}
