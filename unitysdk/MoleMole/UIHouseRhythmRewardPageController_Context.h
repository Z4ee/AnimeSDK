#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_4E7D4B0E2476C0A5;

#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A46E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardPageController_Context_TypeDefinitionIndex = 63681;

	class UIHouseRhythmRewardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_4E7D4B0E2476C0A5* HouseRhythmData; // 0x28
		::System::Boolean ShowGetBtn; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
