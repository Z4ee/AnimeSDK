#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_98B056E8DC285A6E.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_9F3D5D601B086F88;

#define MOLEMOLE_ACTIVITYOVAGOMAINBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x134C5FD0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityOVAGOMainBattleContext_TypeDefinitionIndex = 78799;

	class ActivityOVAGOMainBattleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_9F3D5D601B086F88* battleLevelItemData; // 0x28
		::System::Int32 storyConfigID; // 0x30
		::Enum_3_98B056E8DC285A6E type; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYOVAGOMAINBATTLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
