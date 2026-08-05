#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { class Action; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACA060)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__DOQUICKBUY_B__1_OFFSET UNITYSDK_OFFSET(0x18ACA070)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__DOQUICKBUY_B__2_OFFSET UNITYSDK_OFFSET(0x18ACA080)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass28_0_TypeDefinitionIndex = 84826;

	class UIGachaPageController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action* onFailed; // 0x10
		::System::Action* onSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoQuickBuy_b__1(::Class_0_16E4307DCC419505_36* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__DOQUICKBUY_B__1_OFFSET))(this, rsp);
		}

		::System::Void _DoQuickBuy_b__2(::Class_0_16E4307DCC419505_36* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__DOQUICKBUY_B__2_OFFSET))(this, error);
		}
	};
}
