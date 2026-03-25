#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_D7C3CABB4B2008DA_METHOD_2_0C29A534DD3FFFDA_OFFSET UNITYSDK_OFFSET(0x11423540)
#define CLASS_2_D7C3CABB4B2008DA_METHOD_2_6E14472304C10978_OFFSET UNITYSDK_OFFSET(0x11423610)
#define CLASS_2_D7C3CABB4B2008DA_METHOD_2_7F0FF3809C5737B1_OFFSET UNITYSDK_OFFSET(0x11423410)
#define CLASS_2_D7C3CABB4B2008DA_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0x11423400)
#define CLASS_2_D7C3CABB4B2008DA__CTOR_OFFSET UNITYSDK_OFFSET(0x11423600)

inline static constexpr unsigned int Class_2_D7C3CABB4B2008DA_TypeDefinitionIndex = 61598;

class Class_2_D7C3CABB4B2008DA : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C3CABB4B2008DA__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C3CABB4B2008DA_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_7F0FF3809C5737B1(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_D7C3CABB4B2008DA_METHOD_2_7F0FF3809C5737B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C29A534DD3FFFDA(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_D7C3CABB4B2008DA_METHOD_2_0C29A534DD3FFFDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E14472304C10978(::RPG::Client::SwordTrainingGameInstance* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_D7C3CABB4B2008DA_METHOD_2_6E14472304C10978_OFFSET))(this, P0);
	}
};
