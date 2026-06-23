#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187D1F20)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS34_0__ENSUREONGOINGFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0x187D1F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass34_0_TypeDefinitionIndex = 70297;

	class UIChatPlusPageController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnsureOnGoingFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS34_0__ENSUREONGOINGFADEIN_B__0_OFFSET))(this);
		}
	};
}
