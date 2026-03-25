#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_60;
class Class_1_7AB88D713F5121B3_9;
class Class_1_A9854C4F46202100;
class Class_2_0A142DC5409043BE;
class Class_2_FBC1E64DC5B2C441;
namespace Google::Protobuf { class IMessage; }
namespace RPG::Client { class CakeRaceStartGameData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_ADDOPERATION_OFFSET UNITYSDK_OFFSET(0x924B700)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x924B590)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0x924B280)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x924B600)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GETSHARESTATETREEROOT_OFFSET UNITYSDK_OFFSET(0x924BD90)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_COREINSTANCE_OFFSET UNITYSDK_OFFSET(0x924BEA0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_ELAPSEDTIMEMS_OFFSET UNITYSDK_OFFSET(0x924BEB0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x924B480)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x924BCF0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_ONREQ_OFFSET UNITYSDK_OFFSET(0x924B690)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x924BDF0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SETELAPSEDTIMEMS_OFFSET UNITYSDK_OFFSET(0x924BE50)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SETGUESTCONNECTION_OFFSET UNITYSDK_OFFSET(0x924B390)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SET_ELAPSEDTIMEMS_OFFSET UNITYSDK_OFFSET(0x924BEC0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_STARTPVEGAME_OFFSET UNITYSDK_OFFSET(0x924B750)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x924B3E0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x924B330)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__FIXEDTICK_OFFSET UNITYSDK_OFFSET(0x924B490)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETGMPARAM_OFFSET UNITYSDK_OFFSET(0x924BCB0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETPLAYERUIDLIST_OFFSET UNITYSDK_OFFSET(0x924BA20)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETROBOTLIST_OFFSET UNITYSDK_OFFSET(0x924BAC0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__INIT_OFFSET UNITYSDK_OFFSET(0x924B340)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRacePVEGameManager_TypeDefinitionIndex = 51162;

	class CakeRacePVEGameManager : public ::System::Object
	{
	public:
		::Class_2_FBC1E64DC5B2C441* _CoreInstance; // 0x10
		::Class_0_16E4307DCC419505_60* _GuestConnection; // 0x18
		::System::Int64 _ElapsedTimeMs_k__BackingField; // 0x20
		::System::UInt32 _ElapsedPhysicsTimeMs; // 0x28
		::System::Int32 _PauseGameCount; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRacePVEGameManager* Create()
		{
			return ((::RPG::Client::CakeRacePVEGameManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_CREATE_OFFSET))();
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER__INIT_OFFSET))(this);
		}

		::System::Void SetGuestConnection(::Class_0_16E4307DCC419505_60* guestConnection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_60*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SETGUESTCONNECTION_OFFSET))(this, guestConnection);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void _FixedTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER__FIXEDTICK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReq(::Google::Protobuf::IMessage* req, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_ONREQ_OFFSET))(this, req, uid);
		}

		::System::Void AddOperation(::Google::Protobuf::IMessage* op)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_ADDOPERATION_OFFSET))(this, op);
		}

		::System::Void StartPVEGame(::RPG::Client::CakeRaceStartGameData* startGameData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_STARTPVEGAME_OFFSET))(this, startGameData);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetPlayerUidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETPLAYERUIDLIST_OFFSET))(this);
		}

		::Class_1_A9854C4F46202100* _GetGmParam()
		{
			return ((::Class_1_A9854C4F46202100*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETGMPARAM_OFFSET))(this);
		}

		::Class_2_0A142DC5409043BE* GetShareStateTreeRoot(::System::Int32 runtimeEntityID)
		{
			return ((::Class_2_0A142DC5409043BE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GETSHARESTATETREEROOT_OFFSET))(this, runtimeEntityID);
		}

		::System::Void PauseGame(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_PAUSEGAME_OFFSET))(this, isPause);
		}

		::System::Void SetElapsedTimeMs(::System::Int64 elapsedTimeMs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SETELAPSEDTIMEMS_OFFSET))(this, elapsedTimeMs);
		}

		::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_9*>* _GetRobotList(::RPG::Client::CakeRaceStartGameData* startGameData)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_9*>*(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETROBOTLIST_OFFSET))(this, startGameData);
		}

		::System::UInt32 get_PlayerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_PLAYERUID_OFFSET))(this);
		}

		::Class_2_FBC1E64DC5B2C441* get_CoreInstance()
		{
			return ((::Class_2_FBC1E64DC5B2C441*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_COREINSTANCE_OFFSET))(this);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Int64 get_ElapsedTimeMs()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_ELAPSEDTIMEMS_OFFSET))(this);
		}

		::System::Void set_ElapsedTimeMs(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SET_ELAPSEDTIMEMS_OFFSET))(this, value);
		}
	};
}
