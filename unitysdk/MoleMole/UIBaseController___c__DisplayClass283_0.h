#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS283_0__CTOR_OFFSET UNITYSDK_OFFSET(0x172C9490)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS283_0__SHOWWITHANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x172C94A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass283_0_TypeDefinitionIndex = 76181;

	class UIBaseController___c__DisplayClass283_0 : public ::System::Object
	{
	public:
		::System::Action* callBack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS283_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowWithAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS283_0__SHOWWITHANIMATION_B__0_OFFSET))(this);
		}
	};
}
