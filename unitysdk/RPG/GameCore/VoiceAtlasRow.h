#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VOICEATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178F1A00)
#define RPG_GAMECORE_VOICEATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178F1E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoiceAtlasRow_TypeDefinitionIndex = 11565;

	class VoiceAtlasRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::RPG::Client::TextID Voice_M; // 0x18
		::System::UInt32 Unlock; // 0x28
		::System::UInt32 VoiceID; // 0x2C
		::System::Boolean IsBattleVoice; // 0x30
		::System::UInt32 AvatarID; // 0x34
		::System::UInt32 AudioID; // 0x38
		::System::UInt32 ReplaceID; // 0x3C
		::System::Int32 SortID; // 0x40
		::RPG::Client::TextID Voice_F; // 0x48
		::RPG::Client::TextID VoiceTitle; // 0x58

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
