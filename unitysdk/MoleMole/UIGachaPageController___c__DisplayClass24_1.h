#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4666E61F66433B1E_2;
namespace MoleMole { class UIGachaBtnWidgetController; }
namespace MoleMole { class UIGachaPageController___c__DisplayClass24_0; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16792D60)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHGACHATABS_B__4_OFFSET UNITYSDK_OFFSET(0x16792D70)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHGACHATABS_B__5_OFFSET UNITYSDK_OFFSET(0x16793120)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass24_1_TypeDefinitionIndex = 64998;

	class UIGachaPageController___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaPageController___c__DisplayClass24_0* CS___8__locals1; // 0x10
		::MoleMole::UIGachaBtnWidgetController* btnWidget; // 0x18
		::Class_3_4666E61F66433B1E_2* gacha; // 0x20
		::System::Int32 tabIdx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshGachaTabs_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHGACHATABS_B__4_OFFSET))(this);
		}

		::System::Void _RefreshGachaTabs_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHGACHATABS_B__5_OFFSET))(this);
		}
	};
}
