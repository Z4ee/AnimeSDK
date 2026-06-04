#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_CDEAB398C16B8A07_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0xABAEC20)
#define CLASS_2_CDEAB398C16B8A07_METHOD_2_DC45D453EEF80529_OFFSET UNITYSDK_OFFSET(0xABAEC30)
#define CLASS_2_CDEAB398C16B8A07__CTOR_OFFSET UNITYSDK_OFFSET(0xABAECB0)

inline static constexpr unsigned int Class_2_CDEAB398C16B8A07_TypeDefinitionIndex = 69911;

class Class_2_CDEAB398C16B8A07 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDEAB398C16B8A07__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDEAB398C16B8A07_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_DC45D453EEF80529(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_CDEAB398C16B8A07_METHOD_2_DC45D453EEF80529_OFFSET))(this, a1);
	}
};
