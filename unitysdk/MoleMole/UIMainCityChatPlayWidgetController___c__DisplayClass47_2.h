#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController___c__DisplayClass47_1; }
namespace System { class Action; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1783F110)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_2__SHOWTRANSITION_B__3_OFFSET UNITYSDK_OFFSET(0x1783F120)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_2__SHOWTRANSITION_B__5_OFFSET UNITYSDK_OFFSET(0x1783F450)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass47_2_TypeDefinitionIndex = 83700;

	class UIMainCityChatPlayWidgetController___c__DisplayClass47_2 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* canvasGroup; // 0x10
		::MoleMole::UIMainCityChatPlayWidgetController___c__DisplayClass47_1* CS___8__locals2; // 0x18
		::System::Action* __9__5; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_2__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTransition_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_2__SHOWTRANSITION_B__3_OFFSET))(this);
		}

		::System::Void _ShowTransition_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS47_2__SHOWTRANSITION_B__5_OFFSET))(this);
		}
	};
}
