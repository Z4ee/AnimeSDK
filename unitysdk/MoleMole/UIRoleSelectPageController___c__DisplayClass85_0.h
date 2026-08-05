#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13005400)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS85_0__FADEOUTANDCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x13005410)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass85_0_TypeDefinitionIndex = 47747;

	class UIRoleSelectPageController___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x10
		::System::Action* afterFadeAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void _FadeOutAndClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS85_0__FADEOUTANDCLOSE_B__0_OFFSET))(this);
		}
	};
}
