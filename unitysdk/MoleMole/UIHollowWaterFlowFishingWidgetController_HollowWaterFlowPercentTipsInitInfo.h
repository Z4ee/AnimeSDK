#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_HOLLOWWATERFLOWPERCENTTIPSINITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15269160)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowWaterFlowFishingWidgetController_HollowWaterFlowPercentTipsInitInfo_TypeDefinitionIndex = 69227;

	class UIHollowWaterFlowFishingWidgetController_HollowWaterFlowPercentTipsInitInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* PercentList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_HOLLOWWATERFLOWPERCENTTIPSINITINFO__CTOR_OFFSET))(this);
		}
	};
}
