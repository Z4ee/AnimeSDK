#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }
namespace System { class String; }

#define CLASS_2_E717E76828266D10_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x138F2A10)
#define CLASS_2_E717E76828266D10_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0x138F25C0)
#define CLASS_2_E717E76828266D10_METHOD_2_BCF5E22A64884EAF_OFFSET UNITYSDK_OFFSET(0x138F25D0)
#define CLASS_2_E717E76828266D10__CTOR_OFFSET UNITYSDK_OFFSET(0x138F2AD0)

inline static constexpr unsigned int Class_2_E717E76828266D10_TypeDefinitionIndex = 69918;

class Class_2_E717E76828266D10 : public ::Class_1_D019640AABA5E1A8
{
public:
	// static const ::System::String* Field_2_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E717E76828266D10__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E717E76828266D10_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_BCF5E22A64884EAF(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E717E76828266D10_METHOD_2_BCF5E22A64884EAF_OFFSET))(this, a1);
	}

	::System::Void Method_2_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E717E76828266D10_METHOD_2_07E567B3C6C3D7D7_OFFSET))(this);
	}
};
