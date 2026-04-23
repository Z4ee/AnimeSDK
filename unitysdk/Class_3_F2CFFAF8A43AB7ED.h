#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceSelectSkillDecision; }

#define CLASS_3_F2CFFAF8A43AB7ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C70290)
#define CLASS_3_F2CFFAF8A43AB7ED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C703A0)
#define CLASS_3_F2CFFAF8A43AB7ED__CTOR_OFFSET UNITYSDK_OFFSET(0x17C70270)

inline static constexpr unsigned int Class_3_F2CFFAF8A43AB7ED_TypeDefinitionIndex = 34490;

class Class_3_F2CFFAF8A43AB7ED : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*>
{
public:
	::Class_2_FBC1E64DC5B2C441* Field_3_1; // 0x28
	::Class_2_3ABA989E5AECB261* Field_3_0; // 0x30

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*))((::PBYTE)hIl2Cpp + CLASS_3_F2CFFAF8A43AB7ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CFFAF8A43AB7ED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CFFAF8A43AB7ED_ONTASKRESET_OFFSET))(this);
	}
};
