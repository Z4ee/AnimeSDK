#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D.h"
#include "unitysdk/RPG/Client/LittleGame/MovieAchievementType.h"

class Class_1_867B6CE75953535A;
namespace RPG::Client { class AchievementData; }
namespace RPG::GameCore { class MovieGameConstConfig; }

#define CLASS_2_2A411AB6D777A56A_METHOD_2_F8EC267083B75509_OFFSET UNITYSDK_OFFSET(0x89A4990)
#define CLASS_2_2A411AB6D777A56A__CTOR_OFFSET UNITYSDK_OFFSET(0x89A4810)

inline static constexpr unsigned int Class_2_2A411AB6D777A56A_TypeDefinitionIndex = 62359;

class Class_2_2A411AB6D777A56A : public ::Class_1_FD893FD36F6A3A6D
{
public:
	::RPG::Client::AchievementData* Field_2_4; // 0x18
	::RPG::Client::AchievementData* Field_2_6; // 0x20
	::RPG::Client::AchievementData* Field_2_5; // 0x28
	::RPG::GameCore::MovieGameConstConfig* Field_2_0; // 0x30
	::RPG::Client::AchievementData* Field_2_8; // 0x38
	::RPG::Client::AchievementData* Field_2_3; // 0x40
	::RPG::Client::AchievementData* Field_2_7; // 0x48
	::RPG::Client::AchievementData* Field_2_2; // 0x50
	::RPG::Client::AchievementData* Field_2_1; // 0x58

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::RPG::GameCore::MovieGameConstConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::RPG::GameCore::MovieGameConstConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2A411AB6D777A56A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F8EC267083B75509(::RPG::Client::LittleGame::MovieAchievementType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieAchievementType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A411AB6D777A56A_METHOD_2_F8EC267083B75509_OFFSET))(this, a1, a2);
	}
};
