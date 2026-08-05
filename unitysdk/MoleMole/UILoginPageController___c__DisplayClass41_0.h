#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoginPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS41_0__CLOSELOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1744A1C0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1744A1B0)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController___c__DisplayClass41_0_TypeDefinitionIndex = 46280;

	class UILoginPageController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MoleMole::UILoginPageController* __4__this; // 0x10
		::System::Action_1<::System::Boolean>* cb; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseLogin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS41_0__CLOSELOGIN_B__0_OFFSET))(this);
		}
	};
}
