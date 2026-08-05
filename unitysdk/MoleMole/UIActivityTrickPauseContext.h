#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6F29DE1A793E9D69.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_E743398130672E35;
class MonoUITableScrollV2;

#define MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B25FC40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrickPauseContext_TypeDefinitionIndex = 77594;

	class UIActivityTrickPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_E743398130672E35* TrickData; // 0x28
		::MonoUITableScrollV2* BindScrollView; // 0x30
		::Enum_3_6F29DE1A793E9D69 ActivityTrickType; // 0x38
		::System::Int32 QuestID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
