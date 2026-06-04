#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_2EB99B764F544643_METHOD_2_3F80D57BE81BD898_OFFSET UNITYSDK_OFFSET(0xA46EA50)
#define CLASS_2_2EB99B764F544643_METHOD_2_40BF9F8FC04D0A26_OFFSET UNITYSDK_OFFSET(0xA46EA00)
#define CLASS_2_2EB99B764F544643_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0xA46E580)
#define CLASS_2_2EB99B764F544643_METHOD_2_DDD806EC6A81525B_OFFSET UNITYSDK_OFFSET(0xA46E590)
#define CLASS_2_2EB99B764F544643__CTOR_OFFSET UNITYSDK_OFFSET(0xA46E570)

inline static constexpr unsigned int Class_2_2EB99B764F544643_TypeDefinitionIndex = 69919;

class Class_2_2EB99B764F544643 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_DDD806EC6A81525B(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_METHOD_2_DDD806EC6A81525B_OFFSET))(this, a1);
	}

	::System::Void Method_2_40BF9F8FC04D0A26(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_METHOD_2_40BF9F8FC04D0A26_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F80D57BE81BD898(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_METHOD_2_3F80D57BE81BD898_OFFSET))(this, a1);
	}
};
