#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIINLEVELHOUSERHYTHMCHALLENGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16087CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelHouseRhythmChallengeWidgetController_Context_TypeDefinitionIndex = 56770;

	class UIInLevelHouseRhythmChallengeWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Description; // 0x28
		::System::Boolean Finished; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELHOUSERHYTHMCHALLENGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
