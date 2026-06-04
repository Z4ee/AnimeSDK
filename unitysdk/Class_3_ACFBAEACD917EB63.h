#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseFoodItemDecision; }

#define CLASS_3_ACFBAEACD917EB63_METHOD_3_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x189E65C0)
#define CLASS_3_ACFBAEACD917EB63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x189E64C0)
#define CLASS_3_ACFBAEACD917EB63_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x189E6B40)
#define CLASS_3_ACFBAEACD917EB63__CTOR_OFFSET UNITYSDK_OFFSET(0x189D2CC0)

inline static constexpr unsigned int Class_3_ACFBAEACD917EB63_TypeDefinitionIndex = 34776;

class Class_3_ACFBAEACD917EB63 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*>
{
public:
	::Class_2_FBC1E64DC5B2C441* Field_3_0; // 0x28
	::Class_2_21AD365C113DC484* Field_3_1; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*))((::PBYTE)hIl2Cpp + CLASS_3_ACFBAEACD917EB63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACFBAEACD917EB63_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACFBAEACD917EB63_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACFBAEACD917EB63_METHOD_3_D545E2F706415F81_OFFSET))(this);
	}
};
