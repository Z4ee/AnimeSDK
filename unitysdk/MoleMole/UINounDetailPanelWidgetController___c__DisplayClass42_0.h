#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1300DAB0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___C__DISPLAYCLASS42_0__PLAYCLIPASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1300DAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailPanelWidgetController___c__DisplayClass42_0_TypeDefinitionIndex = 82394;

	class UINounDetailPanelWidgetController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* tcs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayClipAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___C__DISPLAYCLASS42_0__PLAYCLIPASYNC_B__0_OFFSET))(this);
		}
	};
}
