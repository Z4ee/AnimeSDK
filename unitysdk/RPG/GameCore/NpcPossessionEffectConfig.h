#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TriggerEffect; }

#define RPG_GAMECORE_NPCPOSSESSIONEFFECTCONFIG_METHOD_2_70ECF9102D542D52_OFFSET UNITYSDK_OFFSET(0x1D2F9F90)
#define RPG_GAMECORE_NPCPOSSESSIONEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FA0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcPossessionEffectConfig_TypeDefinitionIndex = 22149;

	class NpcPossessionEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TriggerEffect*>* AttachEffects; // 0x10
		::System::Boolean AttachEffectsImmediately; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSIONEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_70ECF9102D542D52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcPossessionEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcPossessionEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSIONEFFECTCONFIG_METHOD_2_70ECF9102D542D52_OFFSET))(a1, a2);
		}
	};
}
