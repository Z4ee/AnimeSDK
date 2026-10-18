#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_568;
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_845E348AB7B8C96E_METHOD_1_35634805C607DCBE_OFFSET UNITYSDK_OFFSET(0xBA37C70)
#define CLASS_1_845E348AB7B8C96E_METHOD_1_E94DFE0A440AADEF_OFFSET UNITYSDK_OFFSET(0xBA37D00)

inline static constexpr unsigned int Class_1_845E348AB7B8C96E_TypeDefinitionIndex = 73248;

class Class_1_845E348AB7B8C96E : public ::System::Object
{
public:
	static ::RPG::GameCore::GameWorld* Method_1_35634805C607DCBE(::RPG::GameCore::GameWorld* a1, ::Class_0_16E4307DCC419505_568* a2)
	{
		return ((::RPG::GameCore::GameWorld*(*)(::RPG::GameCore::GameWorld*, ::Class_0_16E4307DCC419505_568*))((::PBYTE)hIl2Cpp + CLASS_1_845E348AB7B8C96E_METHOD_1_35634805C607DCBE_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_568* Method_1_E94DFE0A440AADEF(::RPG::GameCore::GameWorld* a1)
	{
		return ((::Class_0_16E4307DCC419505_568*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_845E348AB7B8C96E_METHOD_1_E94DFE0A440AADEF_OFFSET))(a1);
	}
};
