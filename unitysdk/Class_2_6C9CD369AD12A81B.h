#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_6C9CD369AD12A81B_METHOD_2_40BF9F8FC04D0A26_OFFSET UNITYSDK_OFFSET(0x17D5FEE0)
#define CLASS_2_6C9CD369AD12A81B_METHOD_2_8E23425F959FF044_OFFSET UNITYSDK_OFFSET(0x17D5FEA0)
#define CLASS_2_6C9CD369AD12A81B_METHOD_2_CEAF8CD7ECDB9028_OFFSET UNITYSDK_OFFSET(0x17D5FE50)
#define CLASS_2_6C9CD369AD12A81B__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5FF30)

inline static constexpr unsigned int Class_2_6C9CD369AD12A81B_TypeDefinitionIndex = 74733;

class Class_2_6C9CD369AD12A81B : public ::Class_1_D019640AABA5E1A8
{
public:
	::RPG::Client::SwordTraining::SwordTrainingGameStateType ENIIFGJIIBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C9CD369AD12A81B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CEAF8CD7ECDB9028(::RPG::Client::SwordTraining::SwordTrainingGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_6C9CD369AD12A81B_METHOD_2_CEAF8CD7ECDB9028_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_8E23425F959FF044()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C9CD369AD12A81B_METHOD_2_8E23425F959FF044_OFFSET))(this);
	}

	::System::Void Method_2_40BF9F8FC04D0A26(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_6C9CD369AD12A81B_METHOD_2_40BF9F8FC04D0A26_OFFSET))(this, a1);
	}
};
