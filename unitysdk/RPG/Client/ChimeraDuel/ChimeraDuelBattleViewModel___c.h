#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB675000)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB675040)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xB675050)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0xB675100)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_2_OFFSET UNITYSDK_OFFSET(0xB675110)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleViewModel___c_TypeDefinitionIndex = 73910;

	class ChimeraDuelBattleViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBattleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x63AB0);
		}
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBattleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x63AB8);
		}
		static ::System::Action** StaticGet___9__1_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBattleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x63AC0);
		}
		static ::RPG::Client::ChimeraDuel::ChimeraDuelBattleViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuel::ChimeraDuelBattleViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBattleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x63AC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_0_OFFSET))(this);
		}

		::System::Void __ctor_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_1_OFFSET))(this);
		}

		::System::Void __ctor_b__1_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_2_OFFSET))(this);
		}
	};
}
