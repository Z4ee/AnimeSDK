#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE8EA10)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE8F290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonLevelConfigRow_TypeDefinitionIndex = 14674;

	class RogueAeonLevelConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 KeyPointRewardItemID; // 0x10
		::RPG::Client::TextID AeonStory_Name; // 0x18
		::System::UInt32 RogueAeonID; // 0x28
		::System::UInt32 UnlockID; // 0x2C
		::System::UInt32 Level; // 0x30
		::System::UInt32 AeonStoryID; // 0x34
		::RPG::Client::TextID AeonStory; // 0x38
		::System::UInt32 Exp; // 0x48
		::System::UInt32 Reward; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAeonLevelConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAeonLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
