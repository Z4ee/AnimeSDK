#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_8A3C2FE068793E61;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceSetAIState; }

#define CLASS_3_2BF303BD0BBC339F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D4E100)
#define CLASS_3_2BF303BD0BBC339F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D4E2C0)
#define CLASS_3_2BF303BD0BBC339F__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4E0E0)

inline static constexpr unsigned int Class_3_2BF303BD0BBC339F_TypeDefinitionIndex = 34498;

class Class_3_2BF303BD0BBC339F : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*>
{
public:
	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*))((::PBYTE)hIl2Cpp + CLASS_3_2BF303BD0BBC339F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BF303BD0BBC339F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BF303BD0BBC339F_ONTASKRESET_OFFSET))(this);
	}
};
