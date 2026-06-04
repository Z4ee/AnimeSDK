#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseRocketItemDecision; }

#define CLASS_3_AA7C24AD819DC969_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x18ACFA00)
#define CLASS_3_AA7C24AD819DC969_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18ACF900)
#define CLASS_3_AA7C24AD819DC969_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18ACFDD0)
#define CLASS_3_AA7C24AD819DC969__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACF8E0)

inline static constexpr unsigned int Class_3_AA7C24AD819DC969_TypeDefinitionIndex = 34778;

class Class_3_AA7C24AD819DC969 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision*>
{
public:
	::Class_2_FBC1E64DC5B2C441* Field_3_0; // 0x28
	::Class_2_21AD365C113DC484* Field_3_1; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision*))((::PBYTE)hIl2Cpp + CLASS_3_AA7C24AD819DC969__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA7C24AD819DC969_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA7C24AD819DC969_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA7C24AD819DC969_METHOD_3_8F7825DAFFB9B517_OFFSET))(this);
	}
};
