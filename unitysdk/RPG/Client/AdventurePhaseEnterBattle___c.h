#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DF05C0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF05F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__67_1_OFFSET UNITYSDK_OFFSET(0x19DF0600)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__67_3_OFFSET UNITYSDK_OFFSET(0x19DF0700)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseEnterBattle___c_TypeDefinitionIndex = 60275;

	class AdventurePhaseEnterBattle___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Single>** StaticGet___9__67_1()
		{
			return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle___c_TypeDefinitionIndex)->GetStaticField(0x64540);
		}
		static ::RPG::Client::AdventurePhaseEnterBattle___c** StaticGet___9()
		{
			return (::RPG::Client::AdventurePhaseEnterBattle___c**)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle___c_TypeDefinitionIndex)->GetStaticField(0x64548);
		}
		static ::System::Action_1<::System::Single>** StaticGet___9__67_3()
		{
			return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle___c_TypeDefinitionIndex)->GetStaticField(0x64550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnLoadingBattleScene_b__67_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__67_1_OFFSET))(this, a1);
		}

		::System::Void __OnLoadingBattleScene_b__67_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__67_3_OFFSET))(this, a1);
		}
	};
}
