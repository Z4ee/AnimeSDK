#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B2A790)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2AFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockIntroRow_TypeDefinitionIndex = 14050;

	class RogueDLCBlockIntroRow : public ::System::Object
	{
	public:
		::System::String* BlockTypeChessBoardColor; // 0x10
		::Il2CppArray<::RPG::GameCore::RogueSubMode>* SubType; // 0x18
		::System::String* BlockIntroIcon; // 0x20
		::System::UInt32 IntroGroup; // 0x28
		::RPG::Client::TextID BlockIntroName; // 0x30
		::RPG::Client::TextID BlockIntroDesc; // 0x40
		::System::UInt32 BlockIntroID; // 0x50
		::System::UInt32 Sort; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCBlockIntroRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCBlockIntroRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
