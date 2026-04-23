#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSUMMONCHIMERADISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA6906E0)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelSummonChimeraDisplayData_TypeDefinitionIndex = 71248;

	class ChimeraDuelSummonChimeraDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Int32 SummonIndex; // 0x14

		::System::Void _ctor(::System::UInt32 id, ::System::Int32 summonIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSUMMONCHIMERADISPLAYDATA__CTOR_OFFSET))(this, id, summonIndex);
		}
	};
}
