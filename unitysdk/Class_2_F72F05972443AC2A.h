#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_F72F05972443AC2A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xDE33D20)
#define CLASS_2_F72F05972443AC2A_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xDE33C30)
#define CLASS_2_F72F05972443AC2A_METHOD_2_87DA85509D5C2479_OFFSET UNITYSDK_OFFSET(0xDE33AE0)
#define CLASS_2_F72F05972443AC2A_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0xDE33AD0)
#define CLASS_2_F72F05972443AC2A__CTOR_OFFSET UNITYSDK_OFFSET(0xDE33D10)

inline static constexpr unsigned int Class_2_F72F05972443AC2A_TypeDefinitionIndex = 61582;

class Class_2_F72F05972443AC2A : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F72F05972443AC2A__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F72F05972443AC2A_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_87DA85509D5C2479(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F72F05972443AC2A_METHOD_2_87DA85509D5C2479_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F72F05972443AC2A_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F72F05972443AC2A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
