#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1729C8D0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1729CBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengePhaseRow_TypeDefinitionIndex = 12599;

	class HeliobusChallengePhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChallengeGroupList; // 0x10
		::RPG::Client::TextID ChallengePhaseName; // 0x18
		::System::UInt32 UnlockMissionID; // 0x28
		::System::UInt32 MapEntranceID; // 0x2C
		::System::UInt32 ChallengePhaseID; // 0x30
		::System::UInt32 MappingInfoID; // 0x34
		::RPG::Client::TextID ChallengePhaseUnlock; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusChallengePhaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusChallengePhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
