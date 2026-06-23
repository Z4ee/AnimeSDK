#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBB300)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___C__DISPLAYCLASS46_0__PLAYCLIPASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15DBB310)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailPanelWidgetController___c__DisplayClass46_0_TypeDefinitionIndex = 77762;

	class UINounDetailPanelWidgetController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* tcs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayClipAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___C__DISPLAYCLASS46_0__PLAYCLIPASYNC_B__0_OFFSET))(this);
		}
	};
}
