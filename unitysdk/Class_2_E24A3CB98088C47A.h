#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_E24A3CB98088C47A_METHOD_2_546D91764BF0A3F7_OFFSET UNITYSDK_OFFSET(0xB25D5C0)
#define CLASS_2_E24A3CB98088C47A_METHOD_2_6E14472304C10978_OFFSET UNITYSDK_OFFSET(0xB25D6A0)
#define CLASS_2_E24A3CB98088C47A_METHOD_2_7DAF841E8207A943_OFFSET UNITYSDK_OFFSET(0xB25D240)
#define CLASS_2_E24A3CB98088C47A_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0xB25D230)
#define CLASS_2_E24A3CB98088C47A_METHOD_2_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0xB25D2E0)
#define CLASS_2_E24A3CB98088C47A__CTOR_OFFSET UNITYSDK_OFFSET(0xB25D690)

inline static constexpr unsigned int Class_2_E24A3CB98088C47A_TypeDefinitionIndex = 61599;

class Class_2_E24A3CB98088C47A : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24A3CB98088C47A__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24A3CB98088C47A_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_7DAF841E8207A943(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E24A3CB98088C47A_METHOD_2_7DAF841E8207A943_OFFSET))(this, a1);
	}

	::System::Void Method_2_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24A3CB98088C47A_METHOD_2_C26623CFD2E6EAE3_OFFSET))(this);
	}

	::System::Void Method_2_546D91764BF0A3F7(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E24A3CB98088C47A_METHOD_2_546D91764BF0A3F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E14472304C10978(::RPG::Client::SwordTrainingGameInstance* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E24A3CB98088C47A_METHOD_2_6E14472304C10978_OFFSET))(this, P0);
	}
};
