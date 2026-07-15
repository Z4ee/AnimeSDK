#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTARTBATTLEBLACKLISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D01EE90)
#define RPG_GAMECORE_RESTARTBATTLEBLACKLISTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01EF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestartBattleBlackListRow_TypeDefinitionIndex = 14568;

	class RestartBattleBlackListRow : public ::System::Object
	{
	public:
		::System::UInt32 EventID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTBATTLEBLACKLISTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestartBattleBlackListRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestartBattleBlackListRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTBATTLEBLACKLISTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
