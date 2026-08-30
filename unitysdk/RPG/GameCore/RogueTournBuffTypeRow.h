#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E54DFE0)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E54E7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffTypeRow_TypeDefinitionIndex = 14852;

	class RogueTournBuffTypeRow : public ::System::Object
	{
	public:
		::System::String* RogueBuffTypeDecoName; // 0x10
		::System::String* RogueBuffTypeSmallIcon; // 0x18
		::System::String* RogueBuffTypeLargeIcon; // 0x20
		::System::String* RogueBuffTypeIcon; // 0x28
		::RPG::Client::TextID RogueBuffTypeTitle; // 0x30
		::RPG::Client::TextID RogueBuffTypeSubTitle; // 0x40
		::RPG::Client::TextID RogueBuffTypeName; // 0x50
		::System::UInt32 RogueBuffType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournBuffTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuffTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
