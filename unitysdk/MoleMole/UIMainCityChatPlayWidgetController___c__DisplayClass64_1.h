#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController___c__DisplayClass64_0; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS64_1__CTOR_OFFSET UNITYSDK_OFFSET(0x147B6770)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS64_1__SHOWNARRATORSCREEN_G__PLAYGALEFFECT_5_OFFSET UNITYSDK_OFFSET(0x147B6780)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass64_1_TypeDefinitionIndex = 47781;

	class UIMainCityChatPlayWidgetController___c__DisplayClass64_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* textList; // 0x10
		::MoleMole::UIMainCityChatPlayWidgetController___c__DisplayClass64_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS64_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_g__PlayGalEffect_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS64_1__SHOWNARRATORSCREEN_G__PLAYGALEFFECT_5_OFFSET))(this);
		}
	};
}
