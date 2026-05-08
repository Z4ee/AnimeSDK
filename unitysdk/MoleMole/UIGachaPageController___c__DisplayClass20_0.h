#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A11210)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS20_0__SHOWGACHAQUICK_B__0_OFFSET UNITYSDK_OFFSET(0x15A11220)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass20_0_TypeDefinitionIndex = 45791;

	class UIGachaPageController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Action* onSuccess; // 0x10
		::System::Action* onFailed; // 0x18
		::MoleMole::UIGachaPageController* __4__this; // 0x20
		::System::UInt32 num; // 0x28
		::System::UInt32 materialID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGachaQuick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS20_0__SHOWGACHAQUICK_B__0_OFFSET))(this);
		}
	};
}
