#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEF5280)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCEF52C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C___REPORTREPLACECARD_B__7_0_OFFSET UNITYSDK_OFFSET(0xCEF52D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C___REPORTREPLACECARD_B__7_1_OFFSET UNITYSDK_OFFSET(0xCEF53E0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceCardViewModel___c_TypeDefinitionIndex = 81169;

	class FateRinReplaceCardViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::Card::FateRinReplaceCardViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinReplaceCardViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinReplaceCardViewModel___c_TypeDefinitionIndex)->GetStaticField(0x55CE0);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinReplaceCardViewModel___c_TypeDefinitionIndex)->GetStaticField(0x55CE8);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinReplaceCardViewModel___c_TypeDefinitionIndex)->GetStaticField(0x55CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ReportReplaceCard_b__7_0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C___REPORTREPLACECARD_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean __ReportReplaceCard_b__7_1(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C___REPORTREPLACECARD_B__7_1_OFFSET))(this, a1);
		}
	};
}
