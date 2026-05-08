#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_17;
namespace MoleMole { class UIGachaBtnWidgetController; }
namespace MoleMole { class UIGachaPageController___c__DisplayClass24_0; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15A11F30)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHGACHATABS_B__4_OFFSET UNITYSDK_OFFSET(0x15A11F40)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHGACHATABS_B__5_OFFSET UNITYSDK_OFFSET(0x15A122F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass24_1_TypeDefinitionIndex = 45795;

	class UIGachaPageController___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaBtnWidgetController* btnWidget; // 0x10
		::Class_3_AE02BC8285203464_17* gacha; // 0x18
		::MoleMole::UIGachaPageController___c__DisplayClass24_0* CS___8__locals1; // 0x20
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
