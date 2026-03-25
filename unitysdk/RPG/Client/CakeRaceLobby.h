#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

class Class_1_1A263F5BDD91B9DA;
namespace RPG::Client { class CakeRaceFieldData; }
namespace RPG::Client { class CakeRaceParticipantData; }
namespace RPG::Client { class LobbyMemberData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACELOBBY_CHANGESELFSTATE_OFFSET UNITYSDK_OFFSET(0x9245BA0)
#define RPG_CLIENT_CAKERACELOBBY_GET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0x9245FA0)
#define RPG_CLIENT_CAKERACELOBBY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9245FC0)
#define RPG_CLIENT_CAKERACELOBBY_GET_LEADERPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x9245F50)
#define RPG_CLIENT_CAKERACELOBBY_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x9245F90)
#define RPG_CLIENT_CAKERACELOBBY_GET_SELFPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x9245F70)
#define RPG_CLIENT_CAKERACELOBBY_SET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0x9245FB0)
#define RPG_CLIENT_CAKERACELOBBY_SET_LEADERPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x9245F60)
#define RPG_CLIENT_CAKERACELOBBY_SET_SELFPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x9245F80)
#define RPG_CLIENT_CAKERACELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x9245B40)
#define RPG_CLIENT_CAKERACELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0x9246080)
#define RPG_CLIENT_CAKERACELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0x9245C10)
#define RPG_CLIENT_CAKERACELOBBY__ISINMATCHEDSTATE_OFFSET UNITYSDK_OFFSET(0x9245F00)
#define RPG_CLIENT_CAKERACELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0x92453E0)
#define RPG_CLIENT_CAKERACELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0x9245AA0)
#define RPG_CLIENT_CAKERACELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0x92455D0)
#define RPG_CLIENT_CAKERACELOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0x9245440)
#define RPG_CLIENT_CAKERACELOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9245AF0)
#define RPG_CLIENT_CAKERACELOBBY__SORTPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x9245E00)
#define RPG_CLIENT_CAKERACELOBBY__SYNCPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x9245620)
#define RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x9246130)
#define RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0x9246270)
#define RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0x9246210)
#define RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0x92461A0)
#define RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x92462D0)
#define RPG_CLIENT_CAKERACELOBBY___SORTPARTICIPANTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x92460E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceLobby_TypeDefinitionIndex = 51164;

	class CakeRaceLobby : public ::RPG::Client::BaseLobby
	{
	public:
		::RPG::Client::CakeRaceParticipantData* _SelfParticipantData_k__BackingField; // 0x60
		::RPG::Client::CakeRaceFieldData* _FieldData_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>* _Participants; // 0x70
		::RPG::Client::CakeRaceParticipantData* _LeaderParticipantData_k__BackingField; // 0x78
		::System::Boolean _IsSorted; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void _OnInit(::System::UInt32 createParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONINIT_OFFSET))(this, createParam);
		}

		::System::Void _OnRoomInit(::Class_1_1A263F5BDD91B9DA* roomExtInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONROOMINIT_OFFSET))(this, roomExtInfo);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONSTATECHANGED_OFFSET))(this);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_STARTMATCH_OFFSET))(this);
		}

		::System::Void ChangeSelfState(::Enum_3_63C076C405BE0674_1 type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_CHANGESELFSTATE_OFFSET))(this, type);
		}

		::System::Void _SyncParticipants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__SYNCPARTICIPANTS_OFFSET))(this);
		}

		::System::Void _SortParticipants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__SORTPARTICIPANTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _GetMembersByLobbyState()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET))(this);
		}

		::System::Boolean _IsInMatchedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ISINMATCHEDSTATE_OFFSET))(this);
		}

		::RPG::Client::CakeRaceParticipantData* get_LeaderParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_LEADERPARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_LeaderParticipantData(::RPG::Client::CakeRaceParticipantData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_SET_LEADERPARTICIPANTDATA_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceParticipantData* get_SelfParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_SELFPARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_SelfParticipantData(::RPG::Client::CakeRaceParticipantData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_SET_SELFPARTICIPANTDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>* get_Participants()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_PARTICIPANTS_OFFSET))(this);
		}

		::RPG::Client::CakeRaceFieldData* get_FieldData()
		{
			return ((::RPG::Client::CakeRaceFieldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_FIELDDATA_OFFSET))(this);
		}

		::System::Void set_FieldData(::RPG::Client::CakeRaceFieldData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_SET_FIELDDATA_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRaceLobby* get_Instance()
		{
			return ((::RPG::Client::CakeRaceLobby*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_INSTANCE_OFFSET))();
		}

		::System::Int32 __SortParticipants_b__8_0(::RPG::Client::CakeRaceParticipantData* a, ::RPG::Client::CakeRaceParticipantData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___SORTPARTICIPANTS_B__8_0_OFFSET))(this, a, b);
		}

		::System::Void __iFixBaseProxy__OnInit(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONINIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnRoomInit(::Class_1_1A263F5BDD91B9DA* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONROOMINIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___IFIXBASEPROXY__ONSTATECHANGED_OFFSET))(this);
		}
	};
}
