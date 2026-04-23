#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePostureType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPOSTURECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18702A70)
#define RPG_GAMECORE_BATTLEPOSTURECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18702CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePostureConfig_TypeDefinitionIndex = 16717;

	class BattlePostureConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BattlePostureType PostureType; // 0x10
		::System::String* FadeInAnimClipName; // 0x18
		::System::Single FadeInDuration; // 0x20
		::System::String* IdleAnimClipName; // 0x28
		::System::String* FadeOutAnimClipName; // 0x30
		::System::Single FadeOutDuration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPOSTURECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattlePostureConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePostureConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPOSTURECONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
