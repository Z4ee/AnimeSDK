#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceTurn; }

#define CLASS_3_BF31CDCCDBD6CCC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B24EBC0)
#define CLASS_3_BF31CDCCDBD6CCC6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B24FB30)
#define CLASS_3_BF31CDCCDBD6CCC6_TICK_OFFSET UNITYSDK_OFFSET(0x1B24F660)
#define CLASS_3_BF31CDCCDBD6CCC6__CTOR_OFFSET UNITYSDK_OFFSET(0x1B24EBA0)

inline static constexpr unsigned int Class_3_BF31CDCCDBD6CCC6_TypeDefinitionIndex = 36306;

class Class_3_BF31CDCCDBD6CCC6 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*>
{
public:
	::Class_2_21AD365C113DC484* JMMECHDFLKH; // 0x28
	::Class_2_FBC1E64DC5B2C441* HEJHGJIGEGK; // 0x30
	::System::UInt32 PIFFDBAOMDE; // 0x38
	::System::UInt32 PGMIOKKLHIE; // 0x3C
	::RPG::MVector3 KJEBJAJNNBP; // 0x40

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*))((::PBYTE)hIl2Cpp + CLASS_3_BF31CDCCDBD6CCC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF31CDCCDBD6CCC6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BF31CDCCDBD6CCC6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF31CDCCDBD6CCC6_ONTASKRESET_OFFSET))(this);
	}
};
