#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesTradingCardExchangeHistoryItem; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FD65F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD6630)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C__GETOFFERHISTORY_B__15_0_OFFSET UNITYSDK_OFFSET(0x9FD66A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C__GETPRESENTHISTORY_B__14_0_OFFSET UNITYSDK_OFFSET(0x9FD6640)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C___CREATEEXCHANGEHISTORYLIST_B__18_0_OFFSET UNITYSDK_OFFSET(0x9FD6700)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardPersonalData___c_TypeDefinitionIndex = 54181;

	class PlanetFesTradingCardPersonalData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesTradingCardPersonalData___c_TypeDefinitionIndex)->GetStaticField(0x46F10);
		}
		static ::System::Comparison_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesTradingCardPersonalData___c_TypeDefinitionIndex)->GetStaticField(0x46F18);
		}
		static ::System::Comparison_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesTradingCardPersonalData___c_TypeDefinitionIndex)->GetStaticField(0x46F20);
		}
		static ::RPG::Client::PlanetFesTradingCardPersonalData___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesTradingCardPersonalData___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesTradingCardPersonalData___c_TypeDefinitionIndex)->GetStaticField(0x46F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetPresentHistory_b__14_0(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* x, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C__GETPRESENTHISTORY_B__14_0_OFFSET))(this, x, y);
		}

		::System::Int32 _GetOfferHistory_b__15_0(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* x, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C__GETOFFERHISTORY_B__15_0_OFFSET))(this, x, y);
		}

		::System::Int32 __CreateExchangeHistoryList_b__18_0(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* x, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA___C___CREATEEXCHANGEHISTORYLIST_B__18_0_OFFSET))(this, x, y);
		}
	};
}
