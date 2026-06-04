#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTalkColorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETALKNAMECOLORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BBE2F0)
#define RPG_GAMECORE_ROGUETALKNAMECOLORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBE460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameColorRow_TypeDefinitionIndex = 14078;

	class RogueTalkNameColorRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TextmapID; // 0x10
		::RPG::GameCore::RogueTalkColorType Color; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTalkNameColorRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTalkNameColorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLORROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
