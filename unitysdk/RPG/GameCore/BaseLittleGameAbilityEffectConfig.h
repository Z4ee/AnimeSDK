#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASELITTLEGAMEABILITYEFFECTCONFIG_METHOD_2_4C82FBED36025703_OFFSET UNITYSDK_OFFSET(0x194BFFE0)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYEFFECTCONFIG_METHOD_2_CB1CEE99748FF125_OFFSET UNITYSDK_OFFSET(0x194BF580)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194C0040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseLittleGameAbilityEffectConfig_TypeDefinitionIndex = 20166;

	class BaseLittleGameAbilityEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB1CEE99748FF125(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYEFFECTCONFIG_METHOD_2_CB1CEE99748FF125_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_4C82FBED36025703(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYEFFECTCONFIG_METHOD_2_4C82FBED36025703_OFFSET))(a1, a2);
		}
	};
}
