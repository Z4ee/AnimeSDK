#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1765F500)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1765FCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffTypeRow_TypeDefinitionIndex = 13754;

	class RogueTournBuffTypeRow : public ::System::Object
	{
	public:
		::System::String* RogueBuffTypeLargeIcon; // 0x10
		::System::String* RogueBuffTypeIcon; // 0x18
		::System::String* RogueBuffTypeDecoName; // 0x20
		::System::String* RogueBuffTypeSmallIcon; // 0x28
		::System::UInt32 RogueBuffType; // 0x30
		::RPG::Client::TextID RogueBuffTypeTitle; // 0x38
		::RPG::Client::TextID RogueBuffTypeName; // 0x48
		::RPG::Client::TextID RogueBuffTypeSubTitle; // 0x58

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
