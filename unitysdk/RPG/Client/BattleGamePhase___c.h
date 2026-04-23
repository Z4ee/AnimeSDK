#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E5D270)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5D2A0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__PRECESSQUITBATTLE_B__57_0_OFFSET UNITYSDK_OFFSET(0x9E5D390)
#define RPG_CLIENT_BATTLEGAMEPHASE___C___INITAUDIO_B__9_0_OFFSET UNITYSDK_OFFSET(0x9E5D2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c_TypeDefinitionIndex = 56224;

	class BattleGamePhase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleGamePhase___c** StaticGet___9()
		{
			return (::RPG::Client::BattleGamePhase___c**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePhase___c_TypeDefinitionIndex)->GetStaticField(0x3E3C0);
		}
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePhase___c_TypeDefinitionIndex)->GetStaticField(0x3E3C8);
		}
		static ::System::Action** StaticGet___9__57_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePhase___c_TypeDefinitionIndex)->GetStaticField(0x3E3D0);
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
