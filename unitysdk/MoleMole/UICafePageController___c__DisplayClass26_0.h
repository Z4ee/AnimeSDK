#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_499EDFA3518A0E64;
namespace MoleMole { class UICafePageController; }
namespace System { class Action; }

#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176DFF90)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x176DFFA0)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_G__SHOWTIP_1_OFFSET UNITYSDK_OFFSET(0x176DFFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UICafePageController___c__DisplayClass26_0_TypeDefinitionIndex = 85842;

	class UICafePageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UICafePageController* __4__this; // 0x10
		::Class_1_499EDFA3518A0E64* cafeItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowDrinkCafeFinished_b__0(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_B__0_OFFSET))(this, _);
		}

		::System::Void _OnShowDrinkCafeFinished_g__ShowTip_1(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_G__SHOWTIP_1_OFFSET))(this, onFinish);
		}
	};
}
