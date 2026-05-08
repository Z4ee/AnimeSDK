#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41ADB30B0929BB2A.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_E743398130672E35;
class MonoUITableScrollV2;

#define MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1633B690)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrickPauseContext_TypeDefinitionIndex = 63423;

	class UIActivityTrickPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_E743398130672E35* TrickData; // 0x28
		::MonoUITableScrollV2* BindScrollView; // 0x30
		::Enum_3_41ADB30B0929BB2A ActivityTrickType; // 0x38
		::System::Int32 QuestID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
