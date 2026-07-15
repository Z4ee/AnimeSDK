#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_B71FC14BA77C9F77;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileSectionViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B49B350)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49B390)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1B49B3A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0x1B49B3D0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileTypeViewModel___c_TypeDefinitionIndex = 76163;

	class FateRinBattleCardPileTypeViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_B71FC14BA77C9F77*, ::RPG::GameCore::FateRinHouguOwnerType>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_B71FC14BA77C9F77*, ::RPG::GameCore::FateRinHouguOwnerType>**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleCardPileTypeViewModel___c_TypeDefinitionIndex)->GetStaticField(0x86A0);
		}
		static ::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>** StaticGet___9__0_2()
		{
			return (::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleCardPileTypeViewModel___c_TypeDefinitionIndex)->GetStaticField(0x86A8);
		}
		static ::RPG::Client::FateRin::Card::FateRinBattleCardPileTypeViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinBattleCardPileTypeViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleCardPileTypeViewModel___c_TypeDefinitionIndex)->GetStaticField(0x86B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FateRinHouguOwnerType __ctor_b__0_0(::Class_1_B71FC14BA77C9F77* a1)
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID, ::Class_1_B71FC14BA77C9F77*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::System::Int32 __ctor_b__0_2(::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel* a1, ::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*, ::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C___CTOR_B__0_2_OFFSET))(this, a1, a2);
		}
	};
}
