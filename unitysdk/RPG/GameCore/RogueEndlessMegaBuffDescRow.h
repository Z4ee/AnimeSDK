#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B398F0)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3A050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueEndlessMegaBuffDescRow_TypeDefinitionIndex = 11768;

	class RogueEndlessMegaBuffDescRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID BuffPreshowDesc; // 0x10
		::RPG::Client::TextID BuffSimpleDesc; // 0x20
		::System::UInt32 MazeBuffID; // 0x30
		::RPG::Client::TextID BuffDesc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
