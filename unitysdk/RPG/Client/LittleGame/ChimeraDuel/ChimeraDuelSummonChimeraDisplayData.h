#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSUMMONCHIMERADISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9F670)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelSummonChimeraDisplayData_TypeDefinitionIndex = 73711;

	class ChimeraDuelSummonChimeraDisplayData : public ::System::Object
	{
	public:
		::System::Int32 SummonIndex; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSUMMONCHIMERADISPLAYDATA__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
