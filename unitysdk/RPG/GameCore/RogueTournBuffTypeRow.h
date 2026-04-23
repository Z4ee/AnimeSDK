#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D6D0E0)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6D8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffTypeRow_TypeDefinitionIndex = 14225;

	class RogueTournBuffTypeRow : public ::System::Object
	{
	public:
		::System::String* RogueBuffTypeSmallIcon; // 0x10
		::System::String* RogueBuffTypeIcon; // 0x18
		::System::String* RogueBuffTypeLargeIcon; // 0x20
		::System::String* RogueBuffTypeDecoName; // 0x28
		::RPG::Client::TextID RogueBuffTypeSubTitle; // 0x30
		::System::UInt32 RogueBuffType; // 0x40
		::RPG::Client::TextID RogueBuffTypeTitle; // 0x48
		::RPG::Client::TextID RogueBuffTypeName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournBuffTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuffTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
