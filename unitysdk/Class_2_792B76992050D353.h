#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_191.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_F9FBCC956DFCF137_25;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelNpcLeaveNode; }

#define CLASS_2_792B76992050D353_METHOD_2_9AE379058E90AA45_OFFSET UNITYSDK_OFFSET(0xA4E67B0)
#define CLASS_2_792B76992050D353__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E6890)

inline static constexpr unsigned int Class_2_792B76992050D353_TypeDefinitionIndex = 72209;

class Class_2_792B76992050D353 : public ::Class_1_43BD383C98B4C0C5_191
{
public:
	::RPG::GameCore::ChimeraDuelNpcLeaveNode* Field_2_0; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_792B76992050D353__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_9AE379058E90AA45(::Class_1_F9FBCC956DFCF137_25* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*))((::PBYTE)hIl2Cpp + CLASS_2_792B76992050D353_METHOD_2_9AE379058E90AA45_OFFSET))(this, a1);
	}
};
