#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyMeetingPassengerCardInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB358040)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB358080)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA___C__ONCONFIRM_B__8_0_OFFSET UNITYSDK_OFFSET(0xB3580B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA___C__REROLL_B__7_0_OFFSET UNITYSDK_OFFSET(0xB358090)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingData___c_TypeDefinitionIndex = 68601;

	class TrainPartyMeetingData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyMeetingData___c_TypeDefinitionIndex)->GetStaticField(0x21A50);
		}
		static ::RPG::Client::TrainParty::TrainPartyMeetingData___c** StaticGet___9()
		{
			return (::RPG::Client::TrainParty::TrainPartyMeetingData___c**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyMeetingData___c_TypeDefinitionIndex)->GetStaticField(0x21A58);
		}
		static ::System::Func_2<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyMeetingData___c_TypeDefinitionIndex)->GetStaticField(0x21A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Reroll_b__7_0(::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA___C__REROLL_B__7_0_OFFSET))(this, x);
		}

		::System::UInt32 _OnConfirm_b__8_0(::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA___C__ONCONFIRM_B__8_0_OFFSET))(this, x);
		}
	};
}
