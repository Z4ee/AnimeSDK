#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_765BE772598E3A58.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYHOTPOTCARDSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11445460)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityHotPotCardSelectContext_TypeDefinitionIndex = 53761;

	class ActivityHotPotCardSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PoolID; // 0x28
		::System::Int32 Times; // 0x2C
		::Enum_3_765BE772598E3A58 Source; // 0x30
		::System::Int32 DialogType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOTPOTCARDSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
