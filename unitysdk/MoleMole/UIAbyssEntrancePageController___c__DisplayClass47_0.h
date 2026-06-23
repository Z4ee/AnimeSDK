#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_60;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173C01C0)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS47_0__SHOWVERSIONUPDATEREMINDER_WITHUNITASK_B__0_OFFSET UNITYSDK_OFFSET(0x173C01D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntrancePageController___c__DisplayClass47_0_TypeDefinitionIndex = 79315;

	class UIAbyssEntrancePageController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* tcs; // 0x10
		::Class_2_208CC9941471731A_60* needShowConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowVersionUpdateReminder_WithUniTask_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS47_0__SHOWVERSIONUPDATEREMINDER_WITHUNITASK_B__0_OFFSET))(this);
		}
	};
}
