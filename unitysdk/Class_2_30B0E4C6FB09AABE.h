#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_191.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_F9FBCC956DFCF137_25;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelSpawnAllyNpcHipplenMiniNode; }

#define CLASS_2_30B0E4C6FB09AABE_METHOD_2_9AE379058E90AA45_OFFSET UNITYSDK_OFFSET(0x141F1270)
#define CLASS_2_30B0E4C6FB09AABE__CTOR_OFFSET UNITYSDK_OFFSET(0x141F1350)

inline static constexpr unsigned int Class_2_30B0E4C6FB09AABE_TypeDefinitionIndex = 72215;

class Class_2_30B0E4C6FB09AABE : public ::Class_1_43BD383C98B4C0C5_191
{
public:
	::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* Field_2_0; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30B0E4C6FB09AABE__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_9AE379058E90AA45(::Class_1_F9FBCC956DFCF137_25* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*))((::PBYTE)hIl2Cpp + CLASS_2_30B0E4C6FB09AABE_METHOD_2_9AE379058E90AA45_OFFSET))(this, a1);
	}
};
