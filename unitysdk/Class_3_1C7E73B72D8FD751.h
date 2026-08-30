#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceStableScopeGuarder; }

#define CLASS_3_1C7E73B72D8FD751_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C0868A0)
#define CLASS_3_1C7E73B72D8FD751_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C0868F0)
#define CLASS_3_1C7E73B72D8FD751__CTOR_OFFSET UNITYSDK_OFFSET(0x1C086820)

inline static constexpr unsigned int Class_3_1C7E73B72D8FD751_TypeDefinitionIndex = 36314;

class Class_3_1C7E73B72D8FD751 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*>
{
public:
	::Class_2_21AD365C113DC484* JMMECHDFLKH; // 0x28

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*))((::PBYTE)hIl2Cpp + CLASS_3_1C7E73B72D8FD751__CTOR_OFFSET))(this, a1, a2);
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
