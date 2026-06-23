#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_5B0D01C92C1E671E_17;
class Class_3_C3F0E3B5AB5977AE_53;

#define MOLEMOLE_UISHARETEAMMEMBERSLOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13817FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShareTeamMemberSlotWidgetController_Context_TypeDefinitionIndex = 66909;

	class UIShareTeamMemberSlotWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_C3F0E3B5AB5977AE_53* Avatar; // 0x28
		::Class_3_5B0D01C92C1E671E_17* Buddy; // 0x30
		::System::Boolean IsEmpty; // 0x38
		::System::Boolean IsAvatar; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHARETEAMMEMBERSLOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
