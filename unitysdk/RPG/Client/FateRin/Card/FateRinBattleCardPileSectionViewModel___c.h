#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinBattleCardViewModel; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFDDF80)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFDDFC0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0xCFDDFD0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileSectionViewModel___c_TypeDefinitionIndex = 79792;

	class FateRinBattleCardPileSectionViewModel___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>** StaticGet___9__1_1()
		{
			return (::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleCardPileSectionViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2E10);
		}
		static ::RPG::Client::FateRin::Card::FateRinBattleCardPileSectionViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinBattleCardPileSectionViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleCardPileSectionViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2E18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__1_1(::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* a1, ::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*, ::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C___CTOR_B__1_1_OFFSET))(this, a1, a2);
		}
	};
}
