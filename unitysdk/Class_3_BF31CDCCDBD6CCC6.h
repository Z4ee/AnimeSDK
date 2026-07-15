#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceTurn; }

#define CLASS_3_BF31CDCCDBD6CCC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198C2120)
#define CLASS_3_BF31CDCCDBD6CCC6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x198C3090)
#define CLASS_3_BF31CDCCDBD6CCC6_TICK_OFFSET UNITYSDK_OFFSET(0x198C2BC0)
#define CLASS_3_BF31CDCCDBD6CCC6__CTOR_OFFSET UNITYSDK_OFFSET(0x198C2100)

inline static constexpr unsigned int Class_3_BF31CDCCDBD6CCC6_TypeDefinitionIndex = 35445;

class Class_3_BF31CDCCDBD6CCC6 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*>
{
public:
	::Class_2_21AD365C113DC484* Field_3_0; // 0x28
	::Class_2_FBC1E64DC5B2C441* Field_3_1; // 0x30
	::RPG::MVector3 Field_3_2; // 0x38
	::System::UInt32 Field_3_3; // 0x44
	::System::UInt32 Field_3_4; // 0x48

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
