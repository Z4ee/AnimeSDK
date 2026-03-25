#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseFoodItemDecision; }

#define CLASS_3_ACFBAEACD917EB63_METHOD_3_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x166AF6B0)
#define CLASS_3_ACFBAEACD917EB63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166AF5B0)
#define CLASS_3_ACFBAEACD917EB63_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x166AFC30)
#define CLASS_3_ACFBAEACD917EB63__CTOR_OFFSET UNITYSDK_OFFSET(0x166AF590)

inline static constexpr unsigned int Class_3_ACFBAEACD917EB63_TypeDefinitionIndex = 28768;

class Class_3_ACFBAEACD917EB63 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*>
{
public:
	::Class_2_3ABA989E5AECB261* Field_3_0; // 0x28
	::Class_2_FBC1E64DC5B2C441* Field_3_1; // 0x30

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*))((::PBYTE)hIl2Cpp + CLASS_3_ACFBAEACD917EB63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACFBAEACD917EB63_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACFBAEACD917EB63_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACFBAEACD917EB63_METHOD_3_AB7ED27CAB69BE58_OFFSET))(this);
	}
};
