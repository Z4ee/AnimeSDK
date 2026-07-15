#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4A3B50)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A43D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonLevelConfigRow_TypeDefinitionIndex = 14254;

	class RogueAeonLevelConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 KeyPointRewardItemID; // 0x10
		::System::UInt32 Exp; // 0x14
		::System::UInt32 Reward; // 0x18
		::System::UInt32 UnlockID; // 0x1C
		::System::UInt32 RogueAeonID; // 0x20
		::RPG::Client::TextID AeonStory_Name; // 0x28
		::RPG::Client::TextID AeonStory; // 0x38
		::System::UInt32 Level; // 0x48
		::System::UInt32 AeonStoryID; // 0x4C

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
