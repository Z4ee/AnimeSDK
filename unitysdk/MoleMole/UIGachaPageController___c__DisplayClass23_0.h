#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace System { class Action; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16792590)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__DOQUICKBUY_B__1_OFFSET UNITYSDK_OFFSET(0x167925A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__DOQUICKBUY_B__2_OFFSET UNITYSDK_OFFSET(0x167925B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass23_0_TypeDefinitionIndex = 64994;

	class UIGachaPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* onFailed; // 0x10
		::System::Action* onSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoQuickBuy_b__1(::Class_0_16E4307DCC419505_29* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__DOQUICKBUY_B__1_OFFSET))(this, rsp);
		}

		::System::Void _DoQuickBuy_b__2(::Class_0_16E4307DCC419505_29* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS23_0__DOQUICKBUY_B__2_OFFSET))(this, error);
		}
	};
}
