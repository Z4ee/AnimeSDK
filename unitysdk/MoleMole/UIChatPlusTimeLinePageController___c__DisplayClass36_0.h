#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CEC585D0736F3660;
namespace MoleMole { class UIChatPlusTimeLinePageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1957E0C0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS36_0__ONNORMALGRAPHEXIT_B__1_OFFSET UNITYSDK_OFFSET(0x1957E0D0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS36_0__ONNORMALGRAPHEXIT_B__2_OFFSET UNITYSDK_OFFSET(0x1957E160)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusTimeLinePageController___c__DisplayClass36_0_TypeDefinitionIndex = 79166;

	class UIChatPlusTimeLinePageController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_2_CEC585D0736F3660*>* onFinishCallBack; // 0x10
		::MoleMole::UIChatPlusTimeLinePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNormalGraphExit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS36_0__ONNORMALGRAPHEXIT_B__1_OFFSET))(this);
		}

		::System::Void _OnNormalGraphExit_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS36_0__ONNORMALGRAPHEXIT_B__2_OFFSET))(this);
		}
	};
}
