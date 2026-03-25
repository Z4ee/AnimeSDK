#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEPEAKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1705DA90)
#define RPG_GAMECORE_CHALLENGEPEAKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1705DE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakConfigRow_TypeDefinitionIndex = 11831;

	class ChallengePeakConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ProgressValueList; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x18
		::Il2CppArray<::System::UInt32>* TagList; // 0x20
		::Il2CppArray<::System::UInt32>* EventIDList; // 0x28
		::Il2CppArray<::System::UInt32>* HPProgressValueList; // 0x30
		::Il2CppArray<::System::UInt32>* NormalTargetList; // 0x38
		::System::UInt32 ID; // 0x40
		::RPG::Client::TextID Title; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengePeakConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengePeakConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
