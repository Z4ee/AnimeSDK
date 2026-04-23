#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CCB9C0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9CCB9F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__62_1_OFFSET UNITYSDK_OFFSET(0x9CCBA00)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__62_3_OFFSET UNITYSDK_OFFSET(0x9CCBAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseEnterBattle___c_TypeDefinitionIndex = 55468;

	class AdventurePhaseEnterBattle___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AdventurePhaseEnterBattle___c** StaticGet___9()
		{
			return (::RPG::Client::AdventurePhaseEnterBattle___c**)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle___c_TypeDefinitionIndex)->GetStaticField(0x261B0);
		}
		static ::System::Action_1<::System::Single>** StaticGet___9__62_3()
		{
			return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle___c_TypeDefinitionIndex)->GetStaticField(0x261B8);
		}
		static ::System::Action_1<::System::Single>** StaticGet___9__62_1()
		{
			return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle___c_TypeDefinitionIndex)->GetStaticField(0x261C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnLoadingBattleScene_b__62_1(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__62_1_OFFSET))(this, v);
		}

		::System::Void __OnLoadingBattleScene_b__62_3(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__62_3_OFFSET))(this, v);
		}
	};
}
