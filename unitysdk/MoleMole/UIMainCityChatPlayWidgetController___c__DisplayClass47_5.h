#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIMainCityChatPlayWidgetController___c__DisplayClass47_0; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_5__CTOR_OFFSET UNITYSDK_OFFSET(0x15563920)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_5__SHOWTRANSITION_B__8_OFFSET UNITYSDK_OFFSET(0x15563930)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_5__SHOWTRANSITION_B__9_OFFSET UNITYSDK_OFFSET(0x15563B20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass47_5_TypeDefinitionIndex = 47778;

	class UIMainCityChatPlayWidgetController___c__DisplayClass47_5 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityChatPlayWidgetController___c__DisplayClass47_0* CS___8__locals3; // 0x10
		::System::Action* __9__9; // 0x18
		::Class_2_B4378B46E0020E85* btn; // 0x20
		::MoleMole::GalGame::MainCityChatTransitionDisplayItem* config; // 0x28
		::System::Int32 optionIndex; // 0x30
		::System::Int32 buttonIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_5__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTransition_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_5__SHOWTRANSITION_B__8_OFFSET))(this);
		}

		::System::Void _ShowTransition_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_5__SHOWTRANSITION_B__9_OFFSET))(this);
		}
	};
}
