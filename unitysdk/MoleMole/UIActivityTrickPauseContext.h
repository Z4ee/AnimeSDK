#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_43FC7512585ACDE5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_E743398130672E35;
class MonoUITableScrollV2;

#define MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C61A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrickPauseContext_TypeDefinitionIndex = 59945;

	class UIActivityTrickPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_E743398130672E35* TrickData; // 0x28
		::MonoUITableScrollV2* BindScrollView; // 0x30
		::System::Int32 QuestID; // 0x38
		::Enum_3_43FC7512585ACDE5 ActivityTrickType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
