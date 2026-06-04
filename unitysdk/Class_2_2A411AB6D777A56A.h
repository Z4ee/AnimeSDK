#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D.h"
#include "unitysdk/RPG/Client/LittleGame/MovieAchievementType.h"

class Class_1_D33B7D6901AE39E9;
namespace RPG::Client { class AchievementData; }
namespace RPG::GameCore { class MovieGameConstConfig; }

#define CLASS_2_2A411AB6D777A56A_METHOD_2_F8EC267083B75509_OFFSET UNITYSDK_OFFSET(0x138142A0)
#define CLASS_2_2A411AB6D777A56A__CTOR_OFFSET UNITYSDK_OFFSET(0x13814120)

inline static constexpr unsigned int Class_2_2A411AB6D777A56A_TypeDefinitionIndex = 71174;

class Class_2_2A411AB6D777A56A : public ::Class_1_FD893FD36F6A3A6D
{
public:
	::RPG::Client::AchievementData* Field_2_0; // 0x18
	::RPG::Client::AchievementData* Field_2_1; // 0x20
	::RPG::Client::AchievementData* Field_2_2; // 0x28
	::RPG::Client::AchievementData* Field_2_3; // 0x30
	::RPG::Client::AchievementData* Field_2_4; // 0x38
	::RPG::GameCore::MovieGameConstConfig* Field_2_5; // 0x40
	::RPG::Client::AchievementData* Field_2_6; // 0x48
	::RPG::Client::AchievementData* Field_2_7; // 0x50
	::RPG::Client::AchievementData* Field_2_8; // 0x58

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::RPG::GameCore::MovieGameConstConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::RPG::GameCore::MovieGameConstConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2A411AB6D777A56A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F8EC267083B75509(::RPG::Client::LittleGame::MovieAchievementType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieAchievementType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A411AB6D777A56A_METHOD_2_F8EC267083B75509_OFFSET))(this, a1, a2);
	}
};
