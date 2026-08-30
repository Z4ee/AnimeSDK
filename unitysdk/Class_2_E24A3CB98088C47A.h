#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_E24A3CB98088C47A_METHOD_2_546D91764BF0A3F7_OFFSET UNITYSDK_OFFSET(0x160D7240)
#define CLASS_2_E24A3CB98088C47A_METHOD_2_7DAF841E8207A943_OFFSET UNITYSDK_OFFSET(0x160D6E70)
#define CLASS_2_E24A3CB98088C47A_METHOD_2_8E23425F959FF044_OFFSET UNITYSDK_OFFSET(0x160D6E20)
#define CLASS_2_E24A3CB98088C47A_METHOD_2_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0x160D6F10)
#define CLASS_2_E24A3CB98088C47A__CTOR_OFFSET UNITYSDK_OFFSET(0x160D7310)

inline static constexpr unsigned int Class_2_E24A3CB98088C47A_TypeDefinitionIndex = 74753;

class Class_2_E24A3CB98088C47A : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24A3CB98088C47A__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_8E23425F959FF044()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24A3CB98088C47A_METHOD_2_8E23425F959FF044_OFFSET))(this);
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
};
