#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEIMMERSELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3EB080)
#define RPG_GAMECORE_ROGUEIMMERSELEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EBA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueImmerseLevelRow_TypeDefinitionIndex = 14678;

	class RogueImmerseLevelRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID EffectTitle1; // 0x10
		::RPG::Client::TextID LevelUpTips1; // 0x20
		::RPG::Client::TextID EffectTitle2; // 0x30
		::RPG::Client::TextID EffectDesc2; // 0x40
		::RPG::Client::TextID LevelUpTips2; // 0x50
		::RPG::Client::TextID BGDesc; // 0x60
		::System::UInt32 Level; // 0x70
		::System::UInt32 UnlockID; // 0x74
		::RPG::Client::TextID EffectDesc1; // 0x78

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
