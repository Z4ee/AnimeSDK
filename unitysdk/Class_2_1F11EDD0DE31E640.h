#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_1F11EDD0DE31E640_METHOD_2_40BF9F8FC04D0A26_OFFSET UNITYSDK_OFFSET(0x979E3B0)
#define CLASS_2_1F11EDD0DE31E640_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0x979E3A0)
#define CLASS_2_1F11EDD0DE31E640__CTOR_OFFSET UNITYSDK_OFFSET(0x979E400)

inline static constexpr unsigned int Class_2_1F11EDD0DE31E640_TypeDefinitionIndex = 61592;

class Class_2_1F11EDD0DE31E640 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_40BF9F8FC04D0A26(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_METHOD_2_40BF9F8FC04D0A26_OFFSET))(this, a1);
	}
};
