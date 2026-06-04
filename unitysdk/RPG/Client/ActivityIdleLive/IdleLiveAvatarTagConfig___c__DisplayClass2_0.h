#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB116530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG___C__DISPLAYCLASS2_0__GETTAGRANK_B__0_OFFSET UNITYSDK_OFFSET(0xB1165A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarTagConfig___c__DisplayClass2_0_TypeDefinitionIndex = 69953;

	class IdleLiveAvatarTagConfig___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 rank; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTagRank_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG___C__DISPLAYCLASS2_0__GETTAGRANK_B__0_OFFSET))(this, a1);
		}
	};
}
