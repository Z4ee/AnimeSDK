#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BuffType.h"
#include "unitysdk/RPG/GameCore/MapSubEffect.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYMAPEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F74B60)
#define RPG_GAMECORE_ALLEYMAPEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F752E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapEffectRow_TypeDefinitionIndex = 11496;

	class AlleyMapEffectRow : public ::System::Object
	{
	public:
		::System::Single Param3; // 0x10
		::RPG::GameCore::BuffType BuffOrDebuff; // 0x14
		::System::Single Param1; // 0x18
		::RPG::GameCore::MapSubEffect MapEffectSubType; // 0x1C
		::System::Single Param2; // 0x20
		::System::UInt32 MapEffectID; // 0x24
		::RPG::Client::TextID MapEffectTitle; // 0x28

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
