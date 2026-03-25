#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EE63CB5C4DC8FC_18.h"

class Class_2_812B507E8D0401C4;
namespace RPG::GameCore { class GameWorld; }

#define CLASS_2_FE27D0FC265DDD96__CTOR_OFFSET UNITYSDK_OFFSET(0x117677B0)

inline static constexpr unsigned int Class_2_FE27D0FC265DDD96_TypeDefinitionIndex = 45230;

class Class_2_FE27D0FC265DDD96 : public ::Class_1_47EE63CB5C4DC8FC_18
{
public:
	::Class_2_812B507E8D0401C4* Field_2_0; // 0x18
	::RPG::GameCore::GameWorld* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE27D0FC265DDD96__CTOR_OFFSET))(this);
	}
};
