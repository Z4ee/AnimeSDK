#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EEB6F2355690A1CC.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178D9B00)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_0__ONPLAYCGEND_B__0_OFFSET UNITYSDK_OFFSET(0x178D9B10)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_0__ONPLAYCGEND_B__1_OFFSET UNITYSDK_OFFSET(0x178D9BF0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_0__ONPLAYCGEND_B__5_OFFSET UNITYSDK_OFFSET(0x178D9D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass53_0_TypeDefinitionIndex = 85284;

	class UIPerformPageController___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Action* __9__5; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UIPerformPageController* __4__this; // 0x20
		::Enum_3_EEB6F2355690A1CC performType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_0__ONPLAYCGEND_B__0_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_0__ONPLAYCGEND_B__1_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_0__ONPLAYCGEND_B__5_OFFSET))(this);
		}
	};
}
