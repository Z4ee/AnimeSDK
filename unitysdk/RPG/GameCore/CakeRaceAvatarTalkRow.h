#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEAVATARTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0FC440)
#define RPG_GAMECORE_CAKERACEAVATARTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FC6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAvatarTalkRow_TypeDefinitionIndex = 11011;

	class CakeRaceAvatarTalkRow : public ::System::Object
	{
	public:
		::System::String* AvatarIcon; // 0x10
		::System::String* FemaleAvatarIcon; // 0x18
		::System::UInt32 AvatarTalkID; // 0x20
		::RPG::Client::TextID TalkText; // 0x28
		::RPG::Client::TextID AvatarName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEAVATARTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceAvatarTalkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceAvatarTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEAVATARTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
