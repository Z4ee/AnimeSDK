#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_5B0D01C92C1E671E_6;
class Class_3_C3F0E3B5AB5977AE_8;

#define MOLEMOLE_UISHARETEAMMEMBERSLOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14802760)

namespace MoleMole
{
	inline static constexpr unsigned int UIShareTeamMemberSlotWidgetController_Context_TypeDefinitionIndex = 66148;

	class UIShareTeamMemberSlotWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_5B0D01C92C1E671E_6* Buddy; // 0x28
		::Class_3_C3F0E3B5AB5977AE_8* Avatar; // 0x30
		::System::Boolean IsAvatar; // 0x38
		::System::Boolean IsEmpty; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHARETEAMMEMBERSLOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
