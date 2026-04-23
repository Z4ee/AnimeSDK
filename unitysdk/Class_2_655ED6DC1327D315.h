#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_655ED6DC1327D315_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x8FB4120)
#define CLASS_2_655ED6DC1327D315_METHOD_2_4978E56CA03CE2D9_OFFSET UNITYSDK_OFFSET(0x8FB3CC0)
#define CLASS_2_655ED6DC1327D315_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0x8FB3CB0)
#define CLASS_2_655ED6DC1327D315__CTOR_OFFSET UNITYSDK_OFFSET(0x8FB41E0)

inline static constexpr unsigned int Class_2_655ED6DC1327D315_TypeDefinitionIndex = 69105;

class Class_2_655ED6DC1327D315 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_655ED6DC1327D315__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_655ED6DC1327D315_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_4978E56CA03CE2D9(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_655ED6DC1327D315_METHOD_2_4978E56CA03CE2D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_655ED6DC1327D315_METHOD_2_07E567B3C6C3D7D7_OFFSET))(this);
	}
};
