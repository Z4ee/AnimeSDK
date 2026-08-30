#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EE63CB5C4DC8FC_21.h"

class Class_2_718A51E22CB71EC4;
namespace RPG::GameCore { class GameWorld; }

#define CLASS_2_FE27D0FC265DDD96__CTOR_OFFSET UNITYSDK_OFFSET(0x163F2F60)

inline static constexpr unsigned int Class_2_FE27D0FC265DDD96_TypeDefinitionIndex = 54534;

class Class_2_FE27D0FC265DDD96 : public ::Class_1_47EE63CB5C4DC8FC_21
{
public:
	::Class_2_718A51E22CB71EC4* FCGFFAJIBKA; // 0x18
	::RPG::GameCore::GameWorld* JNOFGLFPMLB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE27D0FC265DDD96__CTOR_OFFSET))(this);
	}
};
