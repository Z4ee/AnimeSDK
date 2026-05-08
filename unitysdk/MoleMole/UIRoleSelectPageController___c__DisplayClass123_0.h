#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleInfoPageContext; }
namespace MoleMole { class UIRoleSelectPageController; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS123_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16139650)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS123_0__JUMPROLEINFOPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x16139660)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass123_0_TypeDefinitionIndex = 39207;

	class UIRoleSelectPageController___c__DisplayClass123_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x10
		::MoleMole::UIRoleInfoPageContext* roleInfoPageContext; // 0x18
		::System::Boolean invokeSelectEvent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS123_0__CTOR_OFFSET))(this);
		}

		::System::Void _JumpRoleInfoPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS123_0__JUMPROLEINFOPAGE_B__0_OFFSET))(this);
		}
	};
}
