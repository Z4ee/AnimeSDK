#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceFall; }

#define CLASS_3_5EC53648F7CA3DB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C050E50)
#define CLASS_3_5EC53648F7CA3DB2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C050F50)
#define CLASS_3_5EC53648F7CA3DB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C050E30)

inline static constexpr unsigned int Class_3_5EC53648F7CA3DB2_TypeDefinitionIndex = 36311;

class Class_3_5EC53648F7CA3DB2 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall*>
{
public:
	::Class_2_21AD365C113DC484* JMMECHDFLKH; // 0x28
	::Class_2_FBC1E64DC5B2C441* HEJHGJIGEGK; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall*))((::PBYTE)hIl2Cpp + CLASS_3_5EC53648F7CA3DB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC53648F7CA3DB2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC53648F7CA3DB2_ONTASKRESET_OFFSET))(this);
	}
};
