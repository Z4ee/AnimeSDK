#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEIMMERSELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B414F0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B41ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueImmerseLevelRow_TypeDefinitionIndex = 14110;

	class RogueImmerseLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 UnlockID; // 0x14
		::RPG::Client::TextID EffectTitle1; // 0x18
		::RPG::Client::TextID EffectDesc1; // 0x28
		::RPG::Client::TextID LevelUpTips2; // 0x38
		::RPG::Client::TextID BGDesc; // 0x48
		::RPG::Client::TextID EffectDesc2; // 0x58
		::RPG::Client::TextID LevelUpTips1; // 0x68
		::RPG::Client::TextID EffectTitle2; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueImmerseLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueImmerseLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
