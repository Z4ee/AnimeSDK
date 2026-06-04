#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceRootDecision; }

#define CLASS_3_B69F46F4D28D6EAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AECD40)
#define CLASS_3_B69F46F4D28D6EAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18AECE60)
#define CLASS_3_B69F46F4D28D6EAA__CTOR_OFFSET UNITYSDK_OFFSET(0x18AECD20)

inline static constexpr unsigned int Class_3_B69F46F4D28D6EAA_TypeDefinitionIndex = 34772;

class Class_3_B69F46F4D28D6EAA : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision*>
{
public:
	::Class_2_21AD365C113DC484* Field_3_0; // 0x28
	::Class_2_FBC1E64DC5B2C441* Field_3_1; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision*))((::PBYTE)hIl2Cpp + CLASS_3_B69F46F4D28D6EAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B69F46F4D28D6EAA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B69F46F4D28D6EAA_ONTASKRESET_OFFSET))(this);
	}
};
