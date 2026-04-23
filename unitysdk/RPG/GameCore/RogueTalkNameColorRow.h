#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTalkColorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETALKNAMECOLORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D69970)
#define RPG_GAMECORE_ROGUETALKNAMECOLORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6A1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameColorRow_TypeDefinitionIndex = 14014;

	class RogueTalkNameColorRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTalkColorType Color; // 0x10
		::RPG::Client::TextID TextmapID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTalkNameColorRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTalkNameColorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLORROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
