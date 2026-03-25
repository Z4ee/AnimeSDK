#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17607AA0)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x176081E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueEndlessMegaBuffDescRow_TypeDefinitionIndex = 11266;

	class RogueEndlessMegaBuffDescRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID BuffSimpleDesc; // 0x10
		::System::UInt32 MazeBuffID; // 0x20
		::RPG::Client::TextID BuffPreshowDesc; // 0x28
		::RPG::Client::TextID BuffDesc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
