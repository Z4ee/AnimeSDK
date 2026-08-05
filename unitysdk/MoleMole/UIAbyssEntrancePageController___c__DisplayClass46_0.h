#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }

#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E02720)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS46_0__SHOWENDTIMETIP_UNITASK_B__0_OFFSET UNITYSDK_OFFSET(0x18E02730)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS46_0__SHOWENDTIMETIP_UNITASK_B__1_OFFSET UNITYSDK_OFFSET(0x18E02990)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntrancePageController___c__DisplayClass46_0_TypeDefinitionIndex = 57570;

	class UIAbyssEntrancePageController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* tcs; // 0x10
		::System::Action* __9__1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEndTimeTip_UniTask_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS46_0__SHOWENDTIMETIP_UNITASK_B__0_OFFSET))(this);
		}

		::System::Void _ShowEndTimeTip_UniTask_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS46_0__SHOWENDTIMETIP_UNITASK_B__1_OFFSET))(this);
		}
	};
}
