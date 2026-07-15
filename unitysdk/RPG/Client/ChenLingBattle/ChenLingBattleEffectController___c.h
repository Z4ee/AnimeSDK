#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1963B740)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1963B780)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__PLAYLOOPPARTICLEEFFECTBYPATH_B__8_0_OFFSET UNITYSDK_OFFSET(0x1963B790)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleEffectController___c_TypeDefinitionIndex = 72489;

	class ChenLingBattleEffectController___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattle::ChenLingBattleEffectController___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::ChenLingBattleEffectController___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleEffectController___c_TypeDefinitionIndex)->GetStaticField(0x64380);
		}
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleEffectController___c_TypeDefinitionIndex)->GetStaticField(0x64388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayLoopParticleEffectByPath_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__PLAYLOOPPARTICLEEFFECTBYPATH_B__8_0_OFFSET))(this);
		}
	};
}
