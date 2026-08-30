#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BuffType.h"
#include "unitysdk/RPG/GameCore/MapSubEffect.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYMAPEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C55EB90)
#define RPG_GAMECORE_ALLEYMAPEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55F330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapEffectRow_TypeDefinitionIndex = 12512;

	class AlleyMapEffectRow : public ::System::Object
	{
	public:
		::RPG::GameCore::BuffType BuffOrDebuff; // 0x10
		::System::Single Param3; // 0x14
		::RPG::GameCore::MapSubEffect MapEffectSubType; // 0x18
		::System::Single Param2; // 0x1C
		::System::UInt32 MapEffectID; // 0x20
		::System::Single Param1; // 0x24
		::RPG::Client::TextID MapEffectTitle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyMapEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyMapEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
