#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEGYMINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F62270)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F62C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideGymInfoRow_TypeDefinitionIndex = 10248;

	class AetherDivideGymInfoRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ChallengeQuestList; // 0x18
		::System::String* BGPath; // 0x20
		::System::String* TabIconPath; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap; // 0x30
		::System::UInt32 UnlockID; // 0x38
		::System::UInt32 TrainerQuest; // 0x3C
		::System::UInt32 BadgeUnlockID; // 0x40
		::System::UInt32 EntranceID; // 0x44
		::RPG::Client::TextID Rule; // 0x48
		::RPG::Client::TextID Name; // 0x58
		::System::UInt32 ID; // 0x68
		::System::UInt32 ActivityModuleID; // 0x6C
		::System::UInt32 SpiritQuest; // 0x70
		::RPG::Client::TextID Description; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideGymInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideGymInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
