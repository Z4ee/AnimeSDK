#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_2EB99B764F544643_1_METHOD_2_3F80D57BE81BD898_OFFSET UNITYSDK_OFFSET(0xE499C90)
#define CLASS_2_2EB99B764F544643_1_METHOD_2_7F0FF3809C5737B1_OFFSET UNITYSDK_OFFSET(0xE499AE0)
#define CLASS_2_2EB99B764F544643_1_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0xE499AD0)
#define CLASS_2_2EB99B764F544643_1_METHOD_2_D8EC208C9B704270_OFFSET UNITYSDK_OFFSET(0xE499C10)
#define CLASS_2_2EB99B764F544643_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE499C80)

inline static constexpr unsigned int Class_2_2EB99B764F544643_1_TypeDefinitionIndex = 69922;

class Class_2_2EB99B764F544643_1 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_1_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_7F0FF3809C5737B1(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_1_METHOD_2_7F0FF3809C5737B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8EC208C9B704270(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_1_METHOD_2_D8EC208C9B704270_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F80D57BE81BD898(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_1_METHOD_2_3F80D57BE81BD898_OFFSET))(this, a1);
	}
};
