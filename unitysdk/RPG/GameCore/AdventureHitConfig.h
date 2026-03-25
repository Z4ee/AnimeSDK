#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREHITCONFIG_METHOD_2_3475C19D543B236B_OFFSET UNITYSDK_OFFSET(0x16F416B0)
#define RPG_GAMECORE_ADVENTUREHITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F54420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureHitConfig_TypeDefinitionIndex = 14895;

	class AdventureHitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* HitAnimation; // 0x10
		::System::String* HitEffect; // 0x18
		::System::Single HitAngleHorizontal; // 0x20
		::System::Single RandomHitAngleHorizontal; // 0x24
		::System::Single HitAngleVertical; // 0x28
		::System::String* HitSoundEvent; // 0x30
		::System::Single HitEffectHeight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREHITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3475C19D543B236B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureHitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureHitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREHITCONFIG_METHOD_2_3475C19D543B236B_OFFSET))(a1, a2);
		}
	};
}
