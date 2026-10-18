#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1190;
namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::Client { class NullTeamBlockBattleBuffGroupViewData; }

#define CLASS_1_1BB323A81BF33DC8_METHOD_1_8B475FAA50A7A2F3_OFFSET UNITYSDK_OFFSET(0xB68A980)

inline static constexpr unsigned int Class_1_1BB323A81BF33DC8_TypeDefinitionIndex = 71522;

class Class_1_1BB323A81BF33DC8 : public ::System::Object
{
public:
	static ::RPG::Client::NullTeamBlockBattleBuffGroupViewData** StaticGet_KEBCHBEFDAE()
	{
		return (::RPG::Client::NullTeamBlockBattleBuffGroupViewData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1BB323A81BF33DC8_TypeDefinitionIndex)->GetStaticField(0x5F9A0);
	}

	static ::Class_0_16E4307DCC419505_1190* Method_1_8B475FAA50A7A2F3(::RPG::Client::BattleUITeamBlockData* a1)
	{
		return ((::Class_0_16E4307DCC419505_1190*(*)(::RPG::Client::BattleUITeamBlockData*))((::PBYTE)hIl2Cpp + CLASS_1_1BB323A81BF33DC8_METHOD_1_8B475FAA50A7A2F3_OFFSET))(a1);
	}
};
