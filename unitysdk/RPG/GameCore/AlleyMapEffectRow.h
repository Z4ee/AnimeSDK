#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BuffType.h"
#include "unitysdk/RPG/GameCore/MapSubEffect.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYMAPEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186976A0)
#define RPG_GAMECORE_ALLEYMAPEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18697E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapEffectRow_TypeDefinitionIndex = 11898;

	class AlleyMapEffectRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID MapEffectTitle; // 0x10
		::System::UInt32 MapEffectID; // 0x20
		::System::Single Param2; // 0x24
		::RPG::GameCore::BuffType BuffOrDebuff; // 0x28
		::RPG::GameCore::MapSubEffect MapEffectSubType; // 0x2C
		::System::Single Param3; // 0x30
		::System::Single Param1; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyMapEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyMapEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
