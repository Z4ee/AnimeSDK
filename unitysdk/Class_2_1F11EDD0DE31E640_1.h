#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_1F11EDD0DE31E640_1_METHOD_2_40BF9F8FC04D0A26_OFFSET UNITYSDK_OFFSET(0x104F5100)
#define CLASS_2_1F11EDD0DE31E640_1_METHOD_2_60099AEE42CA7A73_OFFSET UNITYSDK_OFFSET(0x104F4B70)
#define CLASS_2_1F11EDD0DE31E640_1_METHOD_2_6E14472304C10978_OFFSET UNITYSDK_OFFSET(0x104F5150)
#define CLASS_2_1F11EDD0DE31E640_1_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0x104F4B60)
#define CLASS_2_1F11EDD0DE31E640_1__CTOR_OFFSET UNITYSDK_OFFSET(0x104F4B50)

inline static constexpr unsigned int Class_2_1F11EDD0DE31E640_1_TypeDefinitionIndex = 61595;

class Class_2_1F11EDD0DE31E640_1 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_1_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_60099AEE42CA7A73(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_1_METHOD_2_60099AEE42CA7A73_OFFSET))(this, a1);
	}

	::System::Void Method_2_40BF9F8FC04D0A26(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_1_METHOD_2_40BF9F8FC04D0A26_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E14472304C10978(::RPG::Client::SwordTrainingGameInstance* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_1_METHOD_2_6E14472304C10978_OFFSET))(this, P0);
	}
};
