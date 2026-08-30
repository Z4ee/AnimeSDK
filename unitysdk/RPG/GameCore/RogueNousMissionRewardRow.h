#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E53F930)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E53FFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMissionRewardRow_TypeDefinitionIndex = 14758;

	class RogueNousMissionRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 MissionRewardID; // 0x18
		::System::UInt32 UnlockID; // 0x1C
		::RPG::Client::TextID TabTitle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNousMissionRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousMissionRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
