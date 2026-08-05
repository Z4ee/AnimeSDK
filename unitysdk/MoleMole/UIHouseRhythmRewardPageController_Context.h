#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_8C395384B7FBB329;

#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183729C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardPageController_Context_TypeDefinitionIndex = 66626;

	class UIHouseRhythmRewardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_8C395384B7FBB329* HouseRhythmData; // 0x28
		::System::Boolean ShowGetBtn; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
