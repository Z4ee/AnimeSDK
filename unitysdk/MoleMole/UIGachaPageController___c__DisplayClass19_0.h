#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166D3320)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS19_0__SHOWAMEPURCHASETIPS_B__0_OFFSET UNITYSDK_OFFSET(0x166D3330)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS19_0__SHOWAMEPURCHASETIPS_B__1_OFFSET UNITYSDK_OFFSET(0x166D3340)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass19_0_TypeDefinitionIndex = 64991;

	class UIGachaPageController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* onFailed; // 0x10
		::MoleMole::UIGachaPageController* __4__this; // 0x18
		::System::Action* onSuccess; // 0x20
		::System::UInt32 materialID; // 0x28
		::System::Int32 itemID; // 0x2C
		::System::UInt32 num; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAMEPurchaseTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS19_0__SHOWAMEPURCHASETIPS_B__0_OFFSET))(this);
		}

		::System::Void _ShowAMEPurchaseTips_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS19_0__SHOWAMEPURCHASETIPS_B__1_OFFSET))(this);
		}
	};
}
