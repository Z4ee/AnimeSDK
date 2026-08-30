#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRacePlayMessage; }

#define CLASS_3_F6F172B8296DBF05_METHOD_3_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x16247250)
#define CLASS_3_F6F172B8296DBF05_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16247150)
#define CLASS_3_F6F172B8296DBF05_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162474B0)
#define CLASS_3_F6F172B8296DBF05__CTOR_OFFSET UNITYSDK_OFFSET(0x16247130)

inline static constexpr unsigned int Class_3_F6F172B8296DBF05_TypeDefinitionIndex = 36302;

class Class_3_F6F172B8296DBF05 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage*>
{
public:
	::Class_2_21AD365C113DC484* NOEPNKMBLPJ; // 0x28
	::Class_2_FBC1E64DC5B2C441* HEJHGJIGEGK; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage*))((::PBYTE)hIl2Cpp + CLASS_3_F6F172B8296DBF05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6F172B8296DBF05_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6F172B8296DBF05_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6F172B8296DBF05_METHOD_3_39FD7185C859CEAD_OFFSET))(this);
	}
};
