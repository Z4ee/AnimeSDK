#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_78;
class Class_1_7AB88D713F5121B3_18;
class Class_1_961B735E8DD4898D;
class Class_2_0A142DC5409043BE;
class Class_2_FBC1E64DC5B2C441;
namespace Google::Protobuf { class IMessage; }
namespace RPG::Client { class CakeRaceStartGameData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_ADDOPERATION_OFFSET UNITYSDK_OFFSET(0x1AC49420)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AC492B0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC48F30)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC49320)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GETSHARESTATETREEROOT_OFFSET UNITYSDK_OFFSET(0x1AC49B20)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_COREINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AC49C30)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_ELAPSEDTIMEMS_OFFSET UNITYSDK_OFFSET(0x1AC49C70)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1AC49160)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x1AC49A80)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_ONREQ_OFFSET UNITYSDK_OFFSET(0x1AC493B0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x1AC49B80)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SETELAPSEDTIMEMS_OFFSET UNITYSDK_OFFSET(0x1AC49BE0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SETGUESTCONNECTION_OFFSET UNITYSDK_OFFSET(0x1AC49040)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SET_ELAPSEDTIMEMS_OFFSET UNITYSDK_OFFSET(0x1AC49C80)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_STARTPVEGAME_OFFSET UNITYSDK_OFFSET(0x1AC49470)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1AC49090)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC48FE0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__FIXEDTICK_OFFSET UNITYSDK_OFFSET(0x1AC491B0)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETGMPARAM_OFFSET UNITYSDK_OFFSET(0x1AC49A40)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETPLAYERUIDLIST_OFFSET UNITYSDK_OFFSET(0x1AC49740)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETROBOTLIST_OFFSET UNITYSDK_OFFSET(0x1AC49800)
#define RPG_CLIENT_CAKERACEPVEGAMEMANAGER__INIT_OFFSET UNITYSDK_OFFSET(0x1AC48FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRacePVEGameManager_TypeDefinitionIndex = 60269;

	class CakeRacePVEGameManager : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_78* _GuestConnection; // 0x10
		::Class_2_FBC1E64DC5B2C441* _CoreInstance; // 0x18
		::System::UInt32 _ElapsedPhysicsTimeMs; // 0x20
		::System::Int32 _PauseGameCount; // 0x24
		::System::Int64 _ElapsedTimeMs_k__BackingField; // 0x28

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

		::System::Void SetGuestConnection(::Class_0_16E4307DCC419505_78* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SETGUESTCONNECTION_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_TICK_OFFSET))(this, a1);
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

		::System::Void OnReq(::Google::Protobuf::IMessage* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_ONREQ_OFFSET))(this, a1, a2);
		}

		::System::Void AddOperation(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_ADDOPERATION_OFFSET))(this, a1);
		}

		::System::Void StartPVEGame(::RPG::Client::CakeRaceStartGameData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_STARTPVEGAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetPlayerUidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETPLAYERUIDLIST_OFFSET))(this);
		}

		::Class_1_961B735E8DD4898D* _GetGmParam()
		{
			return ((::Class_1_961B735E8DD4898D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETGMPARAM_OFFSET))(this);
		}

		::Class_2_0A142DC5409043BE* GetShareStateTreeRoot(::System::Int32 a1)
		{
			return ((::Class_2_0A142DC5409043BE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_GETSHARESTATETREEROOT_OFFSET))(this, a1);
		}

		::System::Void PauseGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_PAUSEGAME_OFFSET))(this, a1);
		}

		::System::Void SetElapsedTimeMs(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SETELAPSEDTIMEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_18*>* _GetRobotList(::RPG::Client::CakeRaceStartGameData* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_18*>*(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER__GETROBOTLIST_OFFSET))(this, a1);
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

		::System::Void set_ElapsedTimeMs(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPVEGAMEMANAGER_SET_ELAPSEDTIMEMS_OFFSET))(this, a1);
		}
	};
}
