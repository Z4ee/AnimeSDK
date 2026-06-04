#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VOICEATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E4E100)
#define RPG_GAMECORE_VOICEATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19E4E590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoiceAtlasRow_TypeDefinitionIndex = 12069;

	class VoiceAtlasRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::System::UInt32 Unlock; // 0x18
		::System::UInt32 VoiceID; // 0x1C
		::RPG::Client::TextID VoiceTitle; // 0x20
		::RPG::Client::TextID Voice_M; // 0x30
		::System::Boolean IsBattleVoice; // 0x40
		::System::UInt32 ReplaceID; // 0x44
		::System::UInt32 AudioID; // 0x48
		::RPG::Client::TextID Voice_F; // 0x50
		::System::Int32 SortID; // 0x60
		::System::UInt32 AvatarID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICEATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VoiceAtlasRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VoiceAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICEATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
