#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEAVATARRARITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0DE00)
#define RPG_GAMECORE_IDLELIVEAVATARRARITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0DF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarRarityRow_TypeDefinitionIndex = 11162;

	class IdleLiveAvatarRarityRow : public ::System::Object
	{
	public:
		::System::UInt32 Rarity; // 0x10
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARRARITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveAvatarRarityRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAvatarRarityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARRARITYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
