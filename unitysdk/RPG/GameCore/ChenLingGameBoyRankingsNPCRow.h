#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGGAMEBOYRANKINGSNPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFB74C0)
#define RPG_GAMECORE_CHENLINGGAMEBOYRANKINGSNPCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB7750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyRankingsNPCRow_TypeDefinitionIndex = 14002;

	class ChenLingGameBoyRankingsNPCRow : public ::System::Object
	{
	public:
		::System::String* NPCIconPath; // 0x10
		::RPG::Client::TextID NPCSignature; // 0x18
		::System::UInt32 GameBoyRankingsNPCID; // 0x28
		::System::UInt32 NPCScore; // 0x2C
		::RPG::Client::TextID NPCNameID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYRANKINGSNPCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYRANKINGSNPCROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
