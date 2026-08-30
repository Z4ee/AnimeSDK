#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D_2.h"
#include "unitysdk/RPG/Client/LittleGame/MovieAchievementType.h"

class Class_1_D33B7D6901AE39E9;
namespace RPG::Client { class AchievementData; }
namespace RPG::GameCore { class MovieGameConstConfig; }

#define CLASS_2_2A411AB6D777A56A_METHOD_2_F8EC267083B75509_OFFSET UNITYSDK_OFFSET(0x190FEA20)
#define CLASS_2_2A411AB6D777A56A__CTOR_OFFSET UNITYSDK_OFFSET(0x190FE8A0)

inline static constexpr unsigned int Class_2_2A411AB6D777A56A_TypeDefinitionIndex = 76123;

class Class_2_2A411AB6D777A56A : public ::Class_1_FD893FD36F6A3A6D_2
{
public:
	::RPG::Client::AchievementData* JCCAJEIKLLI; // 0x18
	::RPG::Client::AchievementData* LFEONCLDPNC; // 0x20
	::RPG::Client::AchievementData* GKMPLOCPNML; // 0x28
	::RPG::Client::AchievementData* LPEJGOIKMBA; // 0x30
	::RPG::Client::AchievementData* FJBMPELICHA; // 0x38
	::RPG::Client::AchievementData* ECIKBNDOLIE; // 0x40
	::RPG::Client::AchievementData* PEJCKNIOJAP; // 0x48
	::RPG::GameCore::MovieGameConstConfig* POIDJMHLKJN; // 0x50
	::RPG::Client::AchievementData* FGGMNKBLPEK; // 0x58

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::RPG::GameCore::MovieGameConstConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::RPG::GameCore::MovieGameConstConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2A411AB6D777A56A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F8EC267083B75509(::RPG::Client::LittleGame::MovieAchievementType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieAchievementType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A411AB6D777A56A_METHOD_2_F8EC267083B75509_OFFSET))(this, a1, a2);
	}
};
