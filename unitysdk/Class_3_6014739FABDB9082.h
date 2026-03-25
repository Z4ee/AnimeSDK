#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseTrashItemDecision; }

#define CLASS_3_6014739FABDB9082_METHOD_3_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x16601EB0)
#define CLASS_3_6014739FABDB9082_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16601DB0)
#define CLASS_3_6014739FABDB9082_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16602200)
#define CLASS_3_6014739FABDB9082__CTOR_OFFSET UNITYSDK_OFFSET(0x16601D90)

inline static constexpr unsigned int Class_3_6014739FABDB9082_TypeDefinitionIndex = 28771;

class Class_3_6014739FABDB9082 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision*>
{
public:
	::Class_2_FBC1E64DC5B2C441* Field_3_1; // 0x28
	::Class_2_3ABA989E5AECB261* Field_3_0; // 0x30

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision*))((::PBYTE)hIl2Cpp + CLASS_3_6014739FABDB9082__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6014739FABDB9082_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6014739FABDB9082_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_4F6E40C18A7A5A9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6014739FABDB9082_METHOD_3_4F6E40C18A7A5A9E_OFFSET))(this);
	}
};
