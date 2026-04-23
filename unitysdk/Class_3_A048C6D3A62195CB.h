#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_8A3C2FE068793E61;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceSetAnimState; }

#define CLASS_3_A048C6D3A62195CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D4BC60)
#define CLASS_3_A048C6D3A62195CB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D4BD20)
#define CLASS_3_A048C6D3A62195CB__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4BC40)

inline static constexpr unsigned int Class_3_A048C6D3A62195CB_TypeDefinitionIndex = 34499;

class Class_3_A048C6D3A62195CB : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState*>
{
public:
	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState*))((::PBYTE)hIl2Cpp + CLASS_3_A048C6D3A62195CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A048C6D3A62195CB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A048C6D3A62195CB_ONTASKRESET_OFFSET))(this);
	}
};
