#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_1F11EDD0DE31E640_1_METHOD_2_40BF9F8FC04D0A26_OFFSET UNITYSDK_OFFSET(0x17856B90)
#define CLASS_2_1F11EDD0DE31E640_1_METHOD_2_8E23425F959FF044_OFFSET UNITYSDK_OFFSET(0x178566D0)
#define CLASS_2_1F11EDD0DE31E640_1_METHOD_2_DDD806EC6A81525B_OFFSET UNITYSDK_OFFSET(0x17856720)
#define CLASS_2_1F11EDD0DE31E640_1__CTOR_OFFSET UNITYSDK_OFFSET(0x178566C0)

inline static constexpr unsigned int Class_2_1F11EDD0DE31E640_1_TypeDefinitionIndex = 71442;

class Class_2_1F11EDD0DE31E640_1 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_8E23425F959FF044()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_1_METHOD_2_8E23425F959FF044_OFFSET))(this);
	}

	::System::Void Method_2_DDD806EC6A81525B(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_1_METHOD_2_DDD806EC6A81525B_OFFSET))(this, a1);
	}

	::System::Void Method_2_40BF9F8FC04D0A26(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_1F11EDD0DE31E640_1_METHOD_2_40BF9F8FC04D0A26_OFFSET))(this, a1);
	}
};
