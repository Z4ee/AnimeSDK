#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEGACHAAVATARTEXTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A11800)
#define RPG_GAMECORE_IDLELIVEGACHAAVATARTEXTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A119D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGachaAvatarTextRow_TypeDefinitionIndex = 11217;

	class IdleLiveGachaAvatarTextRow : public ::System::Object
	{
	public:
		::System::String* VoiceID; // 0x10
		::System::UInt32 AvatarID; // 0x18
		::RPG::Client::TextID AvatarText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAAVATARTEXTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAAVATARTEXTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
