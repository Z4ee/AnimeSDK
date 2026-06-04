#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3F85F0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB3F8620)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__PRECESSQUITBATTLE_B__57_0_OFFSET UNITYSDK_OFFSET(0xB3F8710)
#define RPG_CLIENT_BATTLEGAMEPHASE___C___INITAUDIO_B__9_0_OFFSET UNITYSDK_OFFSET(0xB3F8630)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c_TypeDefinitionIndex = 56986;

	class BattleGamePhase___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__57_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePhase___c_TypeDefinitionIndex)->GetStaticField(0x55300);
		}
		static ::RPG::Client::BattleGamePhase___c** StaticGet___9()
		{
			return (::RPG::Client::BattleGamePhase___c**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePhase___c_TypeDefinitionIndex)->GetStaticField(0x55308);
		}
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePhase___c_TypeDefinitionIndex)->GetStaticField(0x55310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void __InitAudio_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C___INITAUDIO_B__9_0_OFFSET))(this);
		}

		::System::Void _PrecessQuitBattle_b__57_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__PRECESSQUITBATTLE_B__57_0_OFFSET))(this);
		}
	};
}
