#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_METHOD_3_C0C8F44850259D92_OFFSET UNITYSDK_OFFSET(0x1D1F9270)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_METHOD_3_C9DBAC3577B6D126_OFFSET UNITYSDK_OFFSET(0x1D1F9190)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F9260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectClearShieldConfig_TypeDefinitionIndex = 21100;

	class LittleGameAbilityEffectClearShieldConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::String* StoreValueKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C9DBAC3577B6D126(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectClearShieldConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectClearShieldConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_METHOD_3_C9DBAC3577B6D126_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C0C8F44850259D92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectClearShieldConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectClearShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_METHOD_3_C0C8F44850259D92_OFFSET))(a1, a2);
		}
	};
}
