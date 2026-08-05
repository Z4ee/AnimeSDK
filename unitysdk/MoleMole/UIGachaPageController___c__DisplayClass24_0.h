#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC9A90)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__SHOWAMEPURCHASETIPS_B__0_OFFSET UNITYSDK_OFFSET(0x18AC9AA0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__SHOWAMEPURCHASETIPS_B__1_OFFSET UNITYSDK_OFFSET(0x18AC9AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass24_0_TypeDefinitionIndex = 84833;

	class UIGachaPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaPageController* __4__this; // 0x10
		::System::Action* onFailed; // 0x18
		::System::Action* onSuccess; // 0x20
		::System::UInt32 num; // 0x28
		::System::Int32 itemID; // 0x2C
		::System::UInt32 materialID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAMEPurchaseTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__SHOWAMEPURCHASETIPS_B__0_OFFSET))(this);
		}

		::System::Void _ShowAMEPurchaseTips_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS24_0__SHOWAMEPURCHASETIPS_B__1_OFFSET))(this);
		}
	};
}
