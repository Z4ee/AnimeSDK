#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerStatusRankConfig; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB35EA90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB35EAC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GETALLPASSENGERLIST_B__22_0_OFFSET UNITYSDK_OFFSET(0xB35EAD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GET_LEADERPASSENGERDATA_B__46_0_OFFSET UNITYSDK_OFFSET(0xB35EC30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C___INITPASSENGERSTATUSRANKCONFIG_B__29_0_OFFSET UNITYSDK_OFFSET(0xB35EBC0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerManager___c_TypeDefinitionIndex = 68615;

	class TrainPartyPassengerManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TrainParty::TrainPartyPassengerManager___c** StaticGet___9()
		{
			return (::RPG::Client::TrainParty::TrainPartyPassengerManager___c**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyPassengerManager___c_TypeDefinitionIndex)->GetStaticField(0x221A0);
		}
		static ::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>** StaticGet___9__22_0()
		{
			return (::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyPassengerManager___c_TypeDefinitionIndex)->GetStaticField(0x221A8);
		}
		static ::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*>** StaticGet___9__29_0()
		{
			return (::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyPassengerManager___c_TypeDefinitionIndex)->GetStaticField(0x221B0);
		}
		static ::System::Predicate_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>** StaticGet___9__46_0()
		{
			return (::System::Predicate_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyPassengerManager___c_TypeDefinitionIndex)->GetStaticField(0x221B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllPassengerList_b__22_0(::RPG::Client::TrainParty::TrainPartyPassengerData* a, ::RPG::Client::TrainParty::TrainPartyPassengerData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GETALLPASSENGERLIST_B__22_0_OFFSET))(this, a, b);
		}

		::System::Int32 __InitPassengerStatusRankConfig_b__29_0(::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* a, ::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*, ::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C___INITPASSENGERSTATUSRANKCONFIG_B__29_0_OFFSET))(this, a, b);
		}

		::System::Boolean _get_LeaderPassengerData_b__46_0(::RPG::Client::TrainParty::TrainPartyPassengerData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GET_LEADERPASSENGERDATA_B__46_0_OFFSET))(this, data);
		}
	};
}
