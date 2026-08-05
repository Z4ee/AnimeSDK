#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS330_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18842930)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS330_0__SHOWOVERLOADANIM_B__0_OFFSET UNITYSDK_OFFSET(0x18842B40)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS330_0__SHOWOVERLOADANIM_B__1_OFFSET UNITYSDK_OFFSET(0x18842940)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass330_0_TypeDefinitionIndex = 73696;

	class UIHollowMainPageController___c__DisplayClass330_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18
		::System::String* loopEffect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS330_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowOverloadAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS330_0__SHOWOVERLOADANIM_B__1_OFFSET))(this);
		}

		::System::Void _ShowOverloadAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS330_0__SHOWOVERLOADANIM_B__0_OFFSET))(this);
		}
	};
}
