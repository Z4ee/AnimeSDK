#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMiniscapeMainPageController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D870B0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS22_0__DOPLAYPROGRESSANIM_B__1_OFFSET UNITYSDK_OFFSET(0x14D870C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMainPageController___c__DisplayClass22_0_TypeDefinitionIndex = 39375;

	class UIMiniscapeMainPageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMiniscapeMainPageController* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::System::Action_1<::System::Single>* onSetProgress; // 0x20
		::System::Single duration; // 0x28
		::System::Single curProgress; // 0x2C
		::System::Single prvProgress; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayProgressAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS22_0__DOPLAYPROGRESSANIM_B__1_OFFSET))(this);
		}
	};
}
