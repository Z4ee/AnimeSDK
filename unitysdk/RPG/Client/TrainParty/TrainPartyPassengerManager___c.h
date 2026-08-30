#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerStatusRankConfig; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE00580)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE005B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GETALLPASSENGERLIST_B__22_0_OFFSET UNITYSDK_OFFSET(0x1BE005C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GET_LEADERPASSENGERDATA_B__46_0_OFFSET UNITYSDK_OFFSET(0x1BE00770)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C___INITPASSENGERSTATUSRANKCONFIG_B__29_0_OFFSET UNITYSDK_OFFSET(0x1BE006B0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerManager___c_TypeDefinitionIndex = 74247;

	class TrainPartyPassengerManager___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>** StaticGet___9__46_0()
		{
			return (::System::Predicate_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyPassengerManager___c_TypeDefinitionIndex)->GetStaticField(0x5F7E0);
		}
		static ::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>** StaticGet___9__22_0()
		{
			return (::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyPassengerManager___c_TypeDefinitionIndex)->GetStaticField(0x5F7E8);
		}
		static ::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*>** StaticGet___9__29_0()
		{
			return (::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyPassengerManager___c_TypeDefinitionIndex)->GetStaticField(0x5F7F0);
		}
		static ::RPG::Client::TrainParty::TrainPartyPassengerManager___c** StaticGet___9()
		{
			return (::RPG::Client::TrainParty::TrainPartyPassengerManager___c**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyPassengerManager___c_TypeDefinitionIndex)->GetStaticField(0x5F7F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllPassengerList_b__22_0(::RPG::Client::TrainParty::TrainPartyPassengerData* a1, ::RPG::Client::TrainParty::TrainPartyPassengerData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GETALLPASSENGERLIST_B__22_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __InitPassengerStatusRankConfig_b__29_0(::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* a1, ::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*, ::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C___INITPASSENGERSTATUSRANKCONFIG_B__29_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _get_LeaderPassengerData_b__46_0(::RPG::Client::TrainParty::TrainPartyPassengerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GET_LEADERPASSENGERDATA_B__46_0_OFFSET))(this, a1);
		}
	};
}
