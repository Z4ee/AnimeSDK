#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEGYMINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE69DB0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE6A7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideGymInfoRow_TypeDefinitionIndex = 10561;

	class AetherDivideGymInfoRow : public ::System::Object
	{
	public:
		::System::String* BGPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap; // 0x20
		::Il2CppArray<::System::UInt32>* ChallengeQuestList; // 0x28
		::System::String* TabIconPath; // 0x30
		::RPG::Client::TextID Rule; // 0x38
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 BadgeUnlockID; // 0x58
		::System::UInt32 ActivityModuleID; // 0x5C
		::System::UInt32 EntranceID; // 0x60
		::System::UInt32 TrainerQuest; // 0x64
		::System::UInt32 SpiritQuest; // 0x68
		::RPG::Client::TextID Description; // 0x70
		::System::UInt32 ID; // 0x80
		::System::UInt32 UnlockID; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideGymInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideGymInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
