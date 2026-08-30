#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/RPGTools/Timeline/StageItemInfo.h"

#define RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_METHOD_3_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x1B0BFF50)
#define RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C0320)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetStageItemStateBehaviour_TypeDefinitionIndex = 48860;

	class SetStageItemStateBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::Il2CppArray<::RPGTools::Timeline::StageItemInfo>* ItemList; // 0x20
		::System::Boolean EnableState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_8542E37E74FDE1B5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_METHOD_3_8542E37E74FDE1B5_OFFSET))(this);
		}
	};
}
