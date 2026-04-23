#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_402;
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_DAE0828E6459E2C5_METHOD_1_5C7B60C3861F8A65_OFFSET UNITYSDK_OFFSET(0x127F6FF0)
#define CLASS_1_DAE0828E6459E2C5_METHOD_1_9FB83DDE5899E262_OFFSET UNITYSDK_OFFSET(0x127F6F60)

inline static constexpr unsigned int Class_1_DAE0828E6459E2C5_TypeDefinitionIndex = 67448;

class Class_1_DAE0828E6459E2C5 : public ::System::Object
{
public:
	static ::RPG::GameCore::GameWorld* Method_1_9FB83DDE5899E262(::RPG::GameCore::GameWorld* a1, ::Class_0_16E4307DCC419505_402* a2)
	{
		return ((::RPG::GameCore::GameWorld*(*)(::RPG::GameCore::GameWorld*, ::Class_0_16E4307DCC419505_402*))((::PBYTE)hIl2Cpp + CLASS_1_DAE0828E6459E2C5_METHOD_1_9FB83DDE5899E262_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_402* Method_1_5C7B60C3861F8A65(::RPG::GameCore::GameWorld* a1)
	{
		return ((::Class_0_16E4307DCC419505_402*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_DAE0828E6459E2C5_METHOD_1_5C7B60C3861F8A65_OFFSET))(a1);
	}
};
