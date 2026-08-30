#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseTrashItemDecision; }

#define CLASS_3_6014739FABDB9082_METHOD_3_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0x1972D270)
#define CLASS_3_6014739FABDB9082_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1972D170)
#define CLASS_3_6014739FABDB9082_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1972D5C0)
#define CLASS_3_6014739FABDB9082__CTOR_OFFSET UNITYSDK_OFFSET(0x1972D150)

inline static constexpr unsigned int Class_3_6014739FABDB9082_TypeDefinitionIndex = 36310;

class Class_3_6014739FABDB9082 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision*>
{
public:
	::Class_2_21AD365C113DC484* NOEPNKMBLPJ; // 0x28
	::Class_2_FBC1E64DC5B2C441* HEJHGJIGEGK; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision*))((::PBYTE)hIl2Cpp + CLASS_3_6014739FABDB9082__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6014739FABDB9082_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6014739FABDB9082_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_CC99BBFAC9417CA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6014739FABDB9082_METHOD_3_CC99BBFAC9417CA7_OFFSET))(this);
	}
};
