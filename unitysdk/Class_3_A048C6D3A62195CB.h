#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceSetAnimState; }

#define CLASS_3_A048C6D3A62195CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C06E9C0)
#define CLASS_3_A048C6D3A62195CB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C06EA80)
#define CLASS_3_A048C6D3A62195CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06E9A0)

inline static constexpr unsigned int Class_3_A048C6D3A62195CB_TypeDefinitionIndex = 36313;

class Class_3_A048C6D3A62195CB : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState*>
{
public:
	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState*))((::PBYTE)hIl2Cpp + CLASS_3_A048C6D3A62195CB__CTOR_OFFSET))(this, a1, a2);
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
