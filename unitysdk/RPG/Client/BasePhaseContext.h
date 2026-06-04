#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_C0259C461ECB54D1;
namespace RPG::Client { class GamePhaseManager; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEPHASECONTEXT_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB3B3450)
#define RPG_CLIENT_BASEPHASECONTEXT_CLEARNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xB3B3700)
#define RPG_CLIENT_BASEPHASECONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3B3960)
#define RPG_CLIENT_BASEPHASECONTEXT_FOREACHCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB3B3300)
#define RPG_CLIENT_BASEPHASECONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xB3B31C0)
#define RPG_CLIENT_BASEPHASECONTEXT_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB3B3D10)
#define RPG_CLIENT_BASEPHASECONTEXT_ONINIT_OFFSET UNITYSDK_OFFSET(0xB3B3410)
#define RPG_CLIENT_BASEPHASECONTEXT_ONTICK_OFFSET UNITYSDK_OFFSET(0xB3B3CB0)
#define RPG_CLIENT_BASEPHASECONTEXT_TICK_OFFSET UNITYSDK_OFFSET(0xB3B3B30)
#define RPG_CLIENT_BASEPHASECONTEXT__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xB3B3600)
#define RPG_CLIENT_BASEPHASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B2FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BasePhaseContext_TypeDefinitionIndex = 57123;

	class BasePhaseContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Tuple_2<::System::UInt16, ::RPG::Client::RspHandler*>*>* packetHandlers; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Tuple_2<::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*>*>* normalHandlers; // 0x18
		::RPG::Client::GamePhaseManager* Manager; // 0x20
		::System::Collections::Generic::List_1<::Class_1_C0259C461ECB54D1*>* components; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C0259C461ECB54D1*>* componentDict; // 0x30
		::System::Boolean isInit; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void init(::RPG::Client::GamePhaseManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_INIT_OFFSET))(this, a1);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_ONINIT_OFFSET))(this);
		}

		::System::Void ForeachComponent(::System::Action_1<::Class_1_C0259C461ECB54D1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C0259C461ECB54D1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_FOREACHCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void AddComponent(::Class_1_C0259C461ECB54D1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C0259C461ECB54D1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_ADDCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT__ADDNOTIFYHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void ClearNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_CLEARNOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_ONTICK_OFFSET))(this, a1);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_ONDISPOSE_OFFSET))(this);
		}
	};
}
