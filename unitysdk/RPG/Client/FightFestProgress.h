#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_FIGHTFESTPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestProgress_TypeDefinitionIndex = 59991;

	struct alignas(4) FightFestProgress
	{
		::System::Int32 Current; // 0x10
		::System::Int32 Total; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPROGRESS__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
