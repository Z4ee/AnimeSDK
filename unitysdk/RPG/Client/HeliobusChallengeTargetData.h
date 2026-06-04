#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleTargetConfigRow; }

#define RPG_CLIENT_HELIOBUSCHALLENGETARGETDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBD0D810)
#define RPG_CLIENT_HELIOBUSCHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD0D5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusChallengeTargetData_TypeDefinitionIndex = 61396;

	class HeliobusChallengeTargetData : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleTargetConfigRow* TargetData; // 0x10
		::System::UInt32 TargetID; // 0x18
		::System::Boolean IsTargetFinished; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGETARGETDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::Client::HeliobusChallengeTargetData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGETARGETDATA__CTOR_1_OFFSET))(this, a1);
		}
	};
}
