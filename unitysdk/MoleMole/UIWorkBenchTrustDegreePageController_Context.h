#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE27B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController_Context_TypeDefinitionIndex = 39298;

	class UIWorkBenchTrustDegreePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::System::Int32> partnerID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
