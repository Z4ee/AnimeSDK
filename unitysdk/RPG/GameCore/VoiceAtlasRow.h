#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VOICEATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190F5550)
#define RPG_GAMECORE_VOICEATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190F59E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoiceAtlasRow_TypeDefinitionIndex = 11976;

	class VoiceAtlasRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::System::UInt32 ReplaceID; // 0x18
		::System::Int32 SortID; // 0x1C
		::RPG::Client::TextID VoiceTitle; // 0x20
		::System::UInt32 Unlock; // 0x30
		::System::UInt32 AudioID; // 0x34
		::RPG::Client::TextID Voice_F; // 0x38
		::RPG::Client::TextID Voice_M; // 0x48
		::System::UInt32 AvatarID; // 0x58
		::System::Boolean IsBattleVoice; // 0x5C
		::System::UInt32 VoiceID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICEATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::VoiceAtlasRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VoiceAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICEATLASROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
