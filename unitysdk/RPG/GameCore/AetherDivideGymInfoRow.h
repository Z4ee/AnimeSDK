#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEGYMINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CDFEC30)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFF620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideGymInfoRow_TypeDefinitionIndex = 10902;

	class AetherDivideGymInfoRow : public ::System::Object
	{
	public:
		::System::String* TabIconPath; // 0x10
		::System::String* BGPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap; // 0x28
		::Il2CppArray<::System::UInt32>* ChallengeQuestList; // 0x30
		::System::UInt32 TrainerQuest; // 0x38
		::System::UInt32 UnlockID; // 0x3C
		::RPG::Client::TextID Description; // 0x40
		::RPG::Client::TextID Rule; // 0x50
		::System::UInt32 ID; // 0x60
		::RPG::Client::TextID Name; // 0x68
		::System::UInt32 EntranceID; // 0x78
		::System::UInt32 BadgeUnlockID; // 0x7C
		::System::UInt32 ActivityModuleID; // 0x80
		::System::UInt32 SpiritQuest; // 0x84

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
