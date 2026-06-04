#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class IActivityHipplenGameState; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CHECKCURSTATETYPE_OFFSET UNITYSDK_OFFSET(0xB0CFB00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xB0CE7C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0CE0C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_FINISHCURGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB0CF5E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB0CFCA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_LASTGAMESTATETYPE_OFFSET UNITYSDK_OFFSET(0xB0CFCC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB0CDB80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_PUSH_OFFSET UNITYSDK_OFFSET(0xB0CED40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB0CFCB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_LASTGAMESTATETYPE_OFFSET UNITYSDK_OFFSET(0xB0CFCD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB0CDB70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__SETCURGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB0CF9E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__TRYMOVENEXT_OFFSET UNITYSDK_OFFSET(0xB0CFC10)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameStateManager_TypeDefinitionIndex = 70384;

	class ActivityHipplenGameStateManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::RPG::Client::ActivityHipplen::IActivityHipplenGameState*>* _PendingGameStateQueue; // 0x10
		::RPG::Client::ActivityHipplen::IActivityHipplenGameState* _CurGameState_k__BackingField; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* _Owner; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType _LastGameStateType_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void Push(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_PUSH_OFFSET))(this, a1);
		}

		::System::Boolean CheckCurStateType(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CHECKCURSTATETYPE_OFFSET))(this, a1);
		}

		::System::Void FinishCurGameState(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_FINISHCURGAMESTATE_OFFSET))(this, a1);
		}

		::System::Void _SetCurGameState(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__SETCURGAMESTATE_OFFSET))(this, a1);
		}

		::System::Void _TryMoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__TRYMOVENEXT_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::IActivityHipplenGameState* get_CurGameState()
		{
			return ((::RPG::Client::ActivityHipplen::IActivityHipplenGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_CURGAMESTATE_OFFSET))(this);
		}

		::System::Void set_CurGameState(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_CURGAMESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_LastGameStateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_LASTGAMESTATETYPE_OFFSET))(this);
		}

		::System::Void set_LastGameStateType(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_LASTGAMESTATETYPE_OFFSET))(this, a1);
		}
	};
}
