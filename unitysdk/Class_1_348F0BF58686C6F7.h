#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateEmergentBroadcastConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_789;
namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define CLASS_1_348F0BF58686C6F7_METHOD_1_109119998BA06230_OFFSET UNITYSDK_OFFSET(0x18F8B1B0)
#define CLASS_1_348F0BF58686C6F7_METHOD_1_56B0EB10441B0B1D_OFFSET UNITYSDK_OFFSET(0x18F8B320)

inline static constexpr unsigned int Class_1_348F0BF58686C6F7_TypeDefinitionIndex = 61074;

class Class_1_348F0BF58686C6F7 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_109119998BA06230(::RPG::GameCore::FateEmergentBroadcastConditionType a1, ::Il2CppArray<::System::String*>* a2, ::RPG::Client::FateGameData* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FateEmergentBroadcastConditionType, ::Il2CppArray<::System::String*>*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_1_348F0BF58686C6F7_METHOD_1_109119998BA06230_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_789* Method_1_56B0EB10441B0B1D(::RPG::GameCore::FateEmergentBroadcastConditionType a1)
	{
		return ((::Class_0_16E4307DCC419505_789*(*)(::RPG::GameCore::FateEmergentBroadcastConditionType))((::PBYTE)hIl2Cpp + CLASS_1_348F0BF58686C6F7_METHOD_1_56B0EB10441B0B1D_OFFSET))(a1);
	}
};
