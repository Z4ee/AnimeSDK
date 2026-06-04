#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/RPGTools/Timeline/StageItemInfo.h"

#define RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD053110)
#define RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_METHOD_3_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xD052E40)
#define RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD053100)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetStageItemStateBehaviour_TypeDefinitionIndex = 45677;

	class SetStageItemStateBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::Il2CppArray<::RPGTools::Timeline::StageItemInfo>* ItemList; // 0x20
		::System::Boolean EnableState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_5F08B426ADF31FF5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_METHOD_3_5F08B426ADF31FF5_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
