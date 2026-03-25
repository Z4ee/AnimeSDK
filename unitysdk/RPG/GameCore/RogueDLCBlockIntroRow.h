#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175F81D0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175F8A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockIntroRow_TypeDefinitionIndex = 13512;

	class RogueDLCBlockIntroRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueSubMode>* SubType; // 0x10
		::System::String* BlockIntroIcon; // 0x18
		::System::String* BlockTypeChessBoardColor; // 0x20
		::RPG::Client::TextID BlockIntroName; // 0x28
		::RPG::Client::TextID BlockIntroDesc; // 0x38
		::System::UInt32 Sort; // 0x48
		::System::UInt32 BlockIntroID; // 0x4C
		::System::UInt32 IntroGroup; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCBlockIntroRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCBlockIntroRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
