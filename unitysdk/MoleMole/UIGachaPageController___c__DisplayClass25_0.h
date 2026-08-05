#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC9AF0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS25_0__SHOWGACHAQUICK_B__0_OFFSET UNITYSDK_OFFSET(0x18AC9B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass25_0_TypeDefinitionIndex = 84824;

	class UIGachaPageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action* onFailed; // 0x10
		::MoleMole::UIGachaPageController* __4__this; // 0x18
		::System::Action* onSuccess; // 0x20
		::System::UInt32 materialID; // 0x28
		::System::UInt32 num; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGachaQuick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS25_0__SHOWGACHAQUICK_B__0_OFFSET))(this);
		}
	};
}
