#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_213.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelSpawnAllyNpcHipplenMiniNode; }

#define CLASS_2_30B0E4C6FB09AABE_METHOD_2_9AE379058E90AA45_OFFSET UNITYSDK_OFFSET(0x1836A030)
#define CLASS_2_30B0E4C6FB09AABE__CTOR_OFFSET UNITYSDK_OFFSET(0x1836A110)

inline static constexpr unsigned int Class_2_30B0E4C6FB09AABE_TypeDefinitionIndex = 77224;

class Class_2_30B0E4C6FB09AABE : public ::Class_1_43BD383C98B4C0C5_213
{
public:
	::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* EABKOHGCHFP; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType PLAGBMGBOAB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30B0E4C6FB09AABE__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_9AE379058E90AA45(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_30B0E4C6FB09AABE_METHOD_2_9AE379058E90AA45_OFFSET))(this, a1);
	}
};
