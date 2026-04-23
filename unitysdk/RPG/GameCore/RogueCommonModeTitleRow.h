#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUECOMMONMODETITLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CF5840)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF5E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCommonModeTitleRow_TypeDefinitionIndex = 13880;

	class RogueCommonModeTitleRow : public ::System::Object
	{
	public:
		::System::String* TitleIconPath; // 0x10
		::RPG::GameCore::RogueSubMode SubMode; // 0x18
		::RPG::Client::TextID TitleTextmapID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueCommonModeTitleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCommonModeTitleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
