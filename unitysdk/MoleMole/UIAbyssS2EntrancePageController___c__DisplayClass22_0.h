#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole { class UIAbyssS2EntrancePageController; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183B1550)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c__DisplayClass22_0_TypeDefinitionIndex = 54794;

	class UIAbyssS2EntrancePageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssS2EntrancePageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* tcs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}
	};
}
