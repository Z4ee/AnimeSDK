#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo_SimpleSlotData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1386C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB138700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__WRITETEAM_B__2_0_OFFSET UNITYSDK_OFFSET(0xB138710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C___GETBATTLEAVATARIDLIST_B__23_0_OFFSET UNITYSDK_OFFSET(0xB138720)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C___GETBATTLEAVATARIDLIST_B__23_1_OFFSET UNITYSDK_OFFSET(0xB138750)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonTeamInfo___c_TypeDefinitionIndex = 70091;

	class IdleLiveDungeonTeamInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x52730);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x52738);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x52740);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonTeamInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDungeonTeamInfo___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x52748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _WriteTeam_b__2_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__WRITETEAM_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetBattleAvatarIdList_b__23_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C___GETBATTLEAVATARIDLIST_B__23_0_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData __GetBattleAvatarIdList_b__23_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C___GETBATTLEAVATARIDLIST_B__23_1_OFFSET))(this, a1);
		}
	};
}
