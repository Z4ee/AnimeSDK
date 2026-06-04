#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfBoss; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfMemory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfStory; }

#define CLASS_1_296D1E9B2436A225_METHOD_1_20105E6DB4FC62C8_OFFSET UNITYSDK_OFFSET(0xAA97220)
#define CLASS_1_296D1E9B2436A225_METHOD_1_34713249CFC03C41_OFFSET UNITYSDK_OFFSET(0xAA974A0)
#define CLASS_1_296D1E9B2436A225_METHOD_1_8FBFF7C89BC99A12_OFFSET UNITYSDK_OFFSET(0xAA970C0)
#define CLASS_1_296D1E9B2436A225_METHOD_1_A1C61C3DBAE0E845_OFFSET UNITYSDK_OFFSET(0xAA97680)

inline static constexpr unsigned int Class_1_296D1E9B2436A225_TypeDefinitionIndex = 74122;

class Class_1_296D1E9B2436A225 : public ::System::Object
{
public:
	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_8FBFF7C89BC99A12(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_296D1E9B2436A225_METHOD_1_8FBFF7C89BC99A12_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory* Method_1_20105E6DB4FC62C8(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory*(*)(::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_296D1E9B2436A225_METHOD_1_20105E6DB4FC62C8_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory* Method_1_34713249CFC03C41(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory*(*)(::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_296D1E9B2436A225_METHOD_1_34713249CFC03C41_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss* Method_1_A1C61C3DBAE0E845(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss*(*)(::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_296D1E9B2436A225_METHOD_1_A1C61C3DBAE0E845_OFFSET))(a1);
	}
};
