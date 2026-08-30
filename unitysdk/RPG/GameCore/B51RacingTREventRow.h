#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingTREventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGTREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2E4730)
#define RPG_GAMECORE_B51RACINGTREVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E4B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingTREventRow_TypeDefinitionIndex = 10958;

	class B51RacingTREventRow : public ::System::Object
	{
	public:
		::System::String* AvatarIconPath; // 0x10
		::RPG::Client::TextID TRContent; // 0x18
		::System::Single TypeCD; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 VoiceID; // 0x30
		::System::UInt32 Priority; // 0x34
		::System::UInt32 DriverID; // 0x38
		::System::UInt32 MaxCount; // 0x3C
		::RPG::GameCore::B51RacingTREventType Type; // 0x40
		::RPG::Client::TextID TRName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTREVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingTREventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingTREventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
