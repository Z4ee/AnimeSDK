#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEAVATARRARITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B692950)
#define RPG_GAMECORE_IDLELIVEAVATARRARITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B692AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarRarityRow_TypeDefinitionIndex = 11310;

	class IdleLiveAvatarRarityRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 Rarity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARRARITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveAvatarRarityRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAvatarRarityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARRARITYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
