#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoginPageController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS42_0__CLOSELOGIN2_B__0_OFFSET UNITYSDK_OFFSET(0x1744A200)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS42_0__CLOSELOGIN2_B__1_OFFSET UNITYSDK_OFFSET(0x1744A2A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1744A1F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController___c__DisplayClass42_0_TypeDefinitionIndex = 46285;

	class UILoginPageController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UILoginPageController* __4__this; // 0x18
		::System::Action_1<::System::Boolean>* cb; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseLogin2_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS42_0__CLOSELOGIN2_B__0_OFFSET))(this);
		}

		::System::Void _CloseLogin2_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS42_0__CLOSELOGIN2_B__1_OFFSET))(this);
		}
	};
}
