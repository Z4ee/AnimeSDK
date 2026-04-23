#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceStableScopeGuarder; }

#define CLASS_3_1C7E73B72D8FD751_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CC6250)
#define CLASS_3_1C7E73B72D8FD751_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17CC62A0)
#define CLASS_3_1C7E73B72D8FD751__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC61D0)

inline static constexpr unsigned int Class_3_1C7E73B72D8FD751_TypeDefinitionIndex = 34500;

class Class_3_1C7E73B72D8FD751 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*>
{
public:
	::Class_2_3ABA989E5AECB261* Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*))((::PBYTE)hIl2Cpp + CLASS_3_1C7E73B72D8FD751__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C7E73B72D8FD751_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C7E73B72D8FD751_ONTASKRESET_OFFSET))(this);
	}
};
