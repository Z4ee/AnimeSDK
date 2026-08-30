#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_764;
class Class_0_16E4307DCC419505_766;
class Class_1_071D0EF220D742B6;
class Class_1_D17272E82AE804C2_7;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeSnapshotAvatarProxy; }

#define CLASS_1_A32405033ED77B2C_METHOD_1_AF9DAB5BE33402F8_OFFSET UNITYSDK_OFFSET(0x1A7F45E0)
#define CLASS_1_A32405033ED77B2C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F4530)

inline static constexpr unsigned int Class_1_A32405033ED77B2C_TypeDefinitionIndex = 62630;

class Class_1_A32405033ED77B2C : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_764* HAMOPOPMANJ; // 0x10
	::Class_0_16E4307DCC419505_766* ACCBKLPMHDH; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_766* a1, ::Class_0_16E4307DCC419505_764* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_766*, ::Class_0_16E4307DCC419505_764*))((::PBYTE)hIl2Cpp + CLASS_1_A32405033ED77B2C__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChallengeSnapshotAvatarProxy* Method_1_AF9DAB5BE33402F8(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_D17272E82AE804C2_7* a2, ::Class_1_071D0EF220D742B6* a3)
	{
		return ((::RPG::Client::ChallengeSnapshotAvatarProxy*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_D17272E82AE804C2_7*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_A32405033ED77B2C_METHOD_1_AF9DAB5BE33402F8_OFFSET))(this, a1, a2, a3);
	}
};
