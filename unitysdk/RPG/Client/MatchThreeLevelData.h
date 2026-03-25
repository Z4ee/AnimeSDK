#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeEnvironmentData; }
namespace RPG::Client { class MatchThreeOpponentData; }
namespace RPG::GameCore { class MatchThreeLevelRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREELEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B40AA0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_ENVIRONMENTIDS_OFFSET UNITYSDK_OFFSET(0x9B3A1D0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_ENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x9B41880)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_HPMAX_OFFSET UNITYSDK_OFFSET(0x9B3A0D0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B40FD0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B411B0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9B41010)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_ISFIRSTFINISH_OFFSET UNITYSDK_OFFSET(0x9B41030)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x9B41890)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B41050)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_LEVELMISSION_OFFSET UNITYSDK_OFFSET(0x9B41270)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_LOSEDESC_OFFSET UNITYSDK_OFFSET(0x9B41760)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_MODE_OFFSET UNITYSDK_OFFSET(0x9B40FF0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_OPPONENT_OFFSET UNITYSDK_OFFSET(0x9B41860)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_PLAYERBIRDID_OFFSET UNITYSDK_OFFSET(0x9B412F0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_PLAYEROPPONENTID_OFFSET UNITYSDK_OFFSET(0x9B39E20)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9B41370)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9B40BE0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_SHOULDGOTOMISSION_OFFSET UNITYSDK_OFFSET(0x9B41100)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_TALKLIST_OFFSET UNITYSDK_OFFSET(0x9B413F0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_TURNSTEP_OFFSET UNITYSDK_OFFSET(0x9B3A150)
#define RPG_CLIENT_MATCHTHREELEVELDATA_GET_VICTORYDESC_OFFSET UNITYSDK_OFFSET(0x9B41670)
#define RPG_CLIENT_MATCHTHREELEVELDATA_ONFIRSTFINISH_OFFSET UNITYSDK_OFFSET(0x9B40F90)
#define RPG_CLIENT_MATCHTHREELEVELDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9B40FE0)
#define RPG_CLIENT_MATCHTHREELEVELDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9B41020)
#define RPG_CLIENT_MATCHTHREELEVELDATA_SET_ISFIRSTFINISH_OFFSET UNITYSDK_OFFSET(0x9B41040)
#define RPG_CLIENT_MATCHTHREELEVELDATA_SET_MODE_OFFSET UNITYSDK_OFFSET(0x9B41000)
#define RPG_CLIENT_MATCHTHREELEVELDATA_SET_OPPONENT_OFFSET UNITYSDK_OFFSET(0x9B41870)
#define RPG_CLIENT_MATCHTHREELEVELDATA_SYNCFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x9B40F40)
#define RPG_CLIENT_MATCHTHREELEVELDATA__CREATEENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x9B40D60)
#define RPG_CLIENT_MATCHTHREELEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B40BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeLevelData_TypeDefinitionIndex = 53593;

	class MatchThreeLevelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* _Environments_k__BackingField; // 0x10
		::RPG::Client::MatchThreeOpponentData* _Opponent_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Boolean _IsFinish_k__BackingField; // 0x24
		::System::Boolean _IsFirstFinish_k__BackingField; // 0x25
		::System::UInt32 _Mode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeLevelData* Create(::System::UInt32 id, ::System::UInt32 mode)
		{
			return ((::RPG::Client::MatchThreeLevelData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_CREATE_OFFSET))(id, mode);
		}

		::System::Void SyncFinishState(::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_SYNCFINISHSTATE_OFFSET))(this, isFinish);
		}

		::System::Void OnFirstFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_ONFIRSTFINISH_OFFSET))(this);
		}

		::System::Void _CreateEnvironments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA__CREATEENVIRONMENTS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Mode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_SET_MODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_SET_ISFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_ISFIRSTFINISH_OFFSET))(this);
		}

		::System::Void set_IsFirstFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_SET_ISFIRSTFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_ShouldGoToMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_SHOULDGOTOMISSION_OFFSET))(this);
		}

		::System::Boolean get_InProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_INPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_TurnStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_TURNSTEP_OFFSET))(this);
		}

		::System::UInt32 get_HPMax()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_HPMAX_OFFSET))(this);
		}

		::System::UInt32 get_PlayerBirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_PLAYERBIRDID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EnvironmentIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_ENVIRONMENTIDS_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_PLayerOpponentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_PLAYEROPPONENTID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>*>* get_TalkList()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_TALKLIST_OFFSET))(this);
		}

		::System::String* get_VictoryDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_VICTORYDESC_OFFSET))(this);
		}

		::System::String* get_LoseDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_LOSEDESC_OFFSET))(this);
		}

		::RPG::Client::MatchThreeOpponentData* get_Opponent()
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_OPPONENT_OFFSET))(this);
		}

		::System::Void set_Opponent(::RPG::Client::MatchThreeOpponentData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeOpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_SET_OPPONENT_OFFSET))(this, value);
		}

		::RPG::GameCore::MatchThreeLevelRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_LevelMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_LEVELMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* get_Environments()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_ENVIRONMENTS_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELEVELDATA_GET_ISNEW_OFFSET))(this);
		}
	};
}
