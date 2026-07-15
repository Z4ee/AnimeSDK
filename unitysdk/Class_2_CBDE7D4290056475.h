#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_199.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_F9FBCC956DFCF137_25;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelNpcFireEffectNode; }

#define CLASS_2_CBDE7D4290056475_METHOD_2_9AE379058E90AA45_OFFSET UNITYSDK_OFFSET(0x18740A30)
#define CLASS_2_CBDE7D4290056475__CTOR_OFFSET UNITYSDK_OFFSET(0x18740B10)

inline static constexpr unsigned int Class_2_CBDE7D4290056475_TypeDefinitionIndex = 73733;

class Class_2_CBDE7D4290056475 : public ::Class_1_43BD383C98B4C0C5_199
{
public:
	::RPG::GameCore::ChimeraDuelNpcFireEffectNode* Field_2_0; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDE7D4290056475__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_9AE379058E90AA45(::Class_1_F9FBCC956DFCF137_25* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*))((::PBYTE)hIl2Cpp + CLASS_2_CBDE7D4290056475_METHOD_2_9AE379058E90AA45_OFFSET))(this, a1);
	}
};
