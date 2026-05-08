#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30409CAE069D6997.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_17;
namespace MoleMole { class UIGachaBtnWidgetController; }
namespace MoleMole { class UIGachaPageController; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A117B0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHGACHATABS_G__CREATETABBTN_0_OFFSET UNITYSDK_OFFSET(0x15A117C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass24_0_TypeDefinitionIndex = 45789;

	class UIGachaPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaPageController* __4__this; // 0x10
		::MoleMole::UIGachaBtnWidgetController* selectedTab; // 0x18
		::Class_3_AE02BC8285203464_17* selectedGacha; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshGachaTabs_g__CreateTabBtn_0(::System::Int32 tabIdx, ::Enum_3_30409CAE069D6997 gachaType, ::Il2CppArray<::Class_3_AE02BC8285203464_17*>* gachas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_30409CAE069D6997, ::Il2CppArray<::Class_3_AE02BC8285203464_17*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHGACHATABS_G__CREATETABBTN_0_OFFSET))(this, tabIdx, gachaType, gachas);
		}
	};
}
