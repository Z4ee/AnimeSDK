#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace System { class Action; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A11780)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__DOQUICKBUY_B__1_OFFSET UNITYSDK_OFFSET(0x15A11790)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__DOQUICKBUY_B__2_OFFSET UNITYSDK_OFFSET(0x15A117A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass23_0_TypeDefinitionIndex = 45793;

	class UIGachaPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* onSuccess; // 0x10
		::System::Action* onFailed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoQuickBuy_b__1(::Class_0_16E4307DCC419505_11* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__DOQUICKBUY_B__1_OFFSET))(this, rsp);
		}

		::System::Void _DoQuickBuy_b__2(::Class_0_16E4307DCC419505_11* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__DOQUICKBUY_B__2_OFFSET))(this, error);
		}
	};
}
