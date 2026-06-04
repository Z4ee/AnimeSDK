#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkRandomContext.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkUIType.h"
#include "unitysdk/RPG/GameCore/FateMasterTalkSituation.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B338538F774C32BE_METHOD_1_259741364EFC3121_OFFSET UNITYSDK_OFFSET(0xABD5510)
#define CLASS_1_B338538F774C32BE_METHOD_1_60ABAFBC9F3F9DAE_OFFSET UNITYSDK_OFFSET(0xABD5820)
#define CLASS_1_B338538F774C32BE_METHOD_1_7C4B2399C2D09E2A_OFFSET UNITYSDK_OFFSET(0xABD5710)
#define CLASS_1_B338538F774C32BE_METHOD_1_CDF4867E50613ACA_OFFSET UNITYSDK_OFFSET(0xABD57B0)

inline static constexpr unsigned int Class_1_B338538F774C32BE_TypeDefinitionIndex = 59905;

class Class_1_B338538F774C32BE : public ::System::Object
{
public:
	static ::System::Boolean Method_1_259741364EFC3121(::RPG::GameCore::FateMasterTalkSituation a1, ::RPG::Client::FateGameMasterTalkRandomContext a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FateMasterTalkSituation, ::RPG::Client::FateGameMasterTalkRandomContext))((::PBYTE)hIl2Cpp + CLASS_1_B338538F774C32BE_METHOD_1_259741364EFC3121_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7C4B2399C2D09E2A(::RPG::GameCore::FateMasterTalkSituation a1, ::RPG::Client::FateGameMasterTalkUIType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FateMasterTalkSituation, ::RPG::Client::FateGameMasterTalkUIType))((::PBYTE)hIl2Cpp + CLASS_1_B338538F774C32BE_METHOD_1_7C4B2399C2D09E2A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CDF4867E50613ACA(::RPG::GameCore::FateMasterTalkSituation a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FateMasterTalkSituation, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338538F774C32BE_METHOD_1_CDF4867E50613ACA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_60ABAFBC9F3F9DAE(::RPG::GameCore::FateMasterTalkSituation a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FateMasterTalkSituation, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338538F774C32BE_METHOD_1_60ABAFBC9F3F9DAE_OFFSET))(a1, a2, a3);
	}
};
