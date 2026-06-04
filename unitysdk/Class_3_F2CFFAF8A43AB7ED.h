#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceSelectSkillDecision; }

#define CLASS_3_F2CFFAF8A43AB7ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A2DED0)
#define CLASS_3_F2CFFAF8A43AB7ED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A2DFF0)
#define CLASS_3_F2CFFAF8A43AB7ED__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2DEB0)

inline static constexpr unsigned int Class_3_F2CFFAF8A43AB7ED_TypeDefinitionIndex = 34773;

class Class_3_F2CFFAF8A43AB7ED : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*>
{
public:
	::Class_2_21AD365C113DC484* Field_3_0; // 0x28
	::Class_2_FBC1E64DC5B2C441* Field_3_1; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*))((::PBYTE)hIl2Cpp + CLASS_3_F2CFFAF8A43AB7ED__CTOR_OFFSET))(this, a1, a2);
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
