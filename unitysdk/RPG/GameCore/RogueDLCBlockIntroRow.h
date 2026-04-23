#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D054F0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D05D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockIntroRow_TypeDefinitionIndex = 13985;

	class RogueDLCBlockIntroRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueSubMode>* SubType; // 0x10
		::System::String* BlockTypeChessBoardColor; // 0x18
		::System::String* BlockIntroIcon; // 0x20
		::RPG::Client::TextID BlockIntroName; // 0x28
		::System::UInt32 IntroGroup; // 0x38
		::System::UInt32 BlockIntroID; // 0x3C
		::RPG::Client::TextID BlockIntroDesc; // 0x40
		::System::UInt32 Sort; // 0x50

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
