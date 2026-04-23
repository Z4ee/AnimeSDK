#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class IActivityHipplenGameState; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CHECKCURSTATETYPE_OFFSET UNITYSDK_OFFSET(0x9AEB6D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9AEABA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AEAA40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_FINISHCURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9AEB1E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9AEB860)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_LASTGAMESTATETYPE_OFFSET UNITYSDK_OFFSET(0x9AEB880)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9AEA700)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_PUSH_OFFSET UNITYSDK_OFFSET(0x9AEAF00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9AEB870)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_LASTGAMESTATETYPE_OFFSET UNITYSDK_OFFSET(0x9AEB890)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9AEA6F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__SETCURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9AEB5B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__TRYMOVENEXT_OFFSET UNITYSDK_OFFSET(0x9AEB7D0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameStateManager_TypeDefinitionIndex = 69572;

	class ActivityHipplenGameStateManager : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* _Owner; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::Client::ActivityHipplen::IActivityHipplenGameState*>* _PendingGameStateQueue; // 0x18
		::RPG::Client::ActivityHipplen::IActivityHipplenGameState* _CurGameState_k__BackingField; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType _LastGameStateType_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_INIT_OFFSET))(this, owner);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void Push(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* gameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_PUSH_OFFSET))(this, gameState);
		}

		::System::Boolean CheckCurStateType(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CHECKCURSTATETYPE_OFFSET))(this, type);
		}

		::System::Void FinishCurGameState(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_FINISHCURGAMESTATE_OFFSET))(this, type);
		}

		::System::Void _SetCurGameState(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* gameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__SETCURGAMESTATE_OFFSET))(this, gameState);
		}

		::System::Void _TryMoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__TRYMOVENEXT_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::IActivityHipplenGameState* get_CurGameState()
		{
			return ((::RPG::Client::ActivityHipplen::IActivityHipplenGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_CURGAMESTATE_OFFSET))(this);
		}

		::System::Void set_CurGameState(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_CURGAMESTATE_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_LastGameStateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_LASTGAMESTATETYPE_OFFSET))(this);
		}

		::System::Void set_LastGameStateType(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_LASTGAMESTATETYPE_OFFSET))(this, value);
		}
	};
}
