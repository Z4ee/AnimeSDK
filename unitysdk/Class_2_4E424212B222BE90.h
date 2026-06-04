#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_4E424212B222BE90_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0xB51EE90)
#define CLASS_2_4E424212B222BE90_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0xB51E930)
#define CLASS_2_4E424212B222BE90_METHOD_2_DAF5889CC840AC75_OFFSET UNITYSDK_OFFSET(0xB51E940)
#define CLASS_2_4E424212B222BE90__CTOR_OFFSET UNITYSDK_OFFSET(0xB51EF50)

inline static constexpr unsigned int Class_2_4E424212B222BE90_TypeDefinitionIndex = 69917;

class Class_2_4E424212B222BE90 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E424212B222BE90__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E424212B222BE90_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_DAF5889CC840AC75(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_4E424212B222BE90_METHOD_2_DAF5889CC840AC75_OFFSET))(this, a1);
	}

	::System::Void Method_2_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E424212B222BE90_METHOD_2_07E567B3C6C3D7D7_OFFSET))(this);
	}
};
