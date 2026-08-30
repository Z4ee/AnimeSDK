#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/ToastPauseSource.h"

class Class_1_81F181762B95C3EC;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TOASTQUEUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE22BB20)
#define RPG_CLIENT_TOASTQUEUEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE22C4F0)
#define RPG_CLIENT_TOASTQUEUEMODULE_HASWAITINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE22C0A0)
#define RPG_CLIENT_TOASTQUEUEMODULE_IGNORETEXTID_OFFSET UNITYSDK_OFFSET(0xE22C610)
#define RPG_CLIENT_TOASTQUEUEMODULE_ISIGNORETEXTID_OFFSET UNITYSDK_OFFSET(0xE22C570)
#define RPG_CLIENT_TOASTQUEUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xE22BA60)
#define RPG_CLIENT_TOASTQUEUEMODULE_PAUSEQUEUE_OFFSET UNITYSDK_OFFSET(0xE22C000)
#define RPG_CLIENT_TOASTQUEUEMODULE_RESUMETEXTID_OFFSET UNITYSDK_OFFSET(0xE22C6F0)
#define RPG_CLIENT_TOASTQUEUEMODULE_TRYADDLOGINTOASTBYNAME_OFFSET UNITYSDK_OFFSET(0xE22BC90)
#define RPG_CLIENT_TOASTQUEUEMODULE_TRYADDLOGINTOASTBYPRIORITY_OFFSET UNITYSDK_OFFSET(0xE22BD40)
#define RPG_CLIENT_TOASTQUEUEMODULE__ADDACTION_OFFSET UNITYSDK_OFFSET(0xE22BF10)
#define RPG_CLIENT_TOASTQUEUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE22BBF0)
#define RPG_CLIENT_TOASTQUEUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xE22C7F0)
#define RPG_CLIENT_TOASTQUEUEMODULE__DOACTIONS_OFFSET UNITYSDK_OFFSET(0xE22C290)
#define RPG_CLIENT_TOASTQUEUEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xE22C240)

namespace RPG::Client
{
	inline static constexpr unsigned int ToastQueueModule_TypeDefinitionIndex = 68142;

	class ToastQueueModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TextID, ::System::Int32>* _IgnoreTextIDs; // 0x10
		::System::Collections::Generic::List_1<::Class_1_81F181762B95C3EC*>* _ToastQueueItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Boolean TryAddLoginToastByName(::System::Action* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_TRYADDLOGINTOASTBYNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryAddLoginToastByPriority(::System::Action* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_TRYADDLOGINTOASTBYPRIORITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PauseQueue(::System::Boolean a1, ::RPG::Client::ToastPauseSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ToastPauseSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_PAUSEQUEUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasWaitingPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_HASWAITINGPERFORMANCE_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _DoActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__DOACTIONS_OFFSET))(this);
		}

		::System::Void _AddAction(::Class_1_81F181762B95C3EC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_81F181762B95C3EC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__ADDACTION_OFFSET))(this, a1);
		}

		static ::RPG::Client::ToastQueueModule* get_Instance()
		{
			return ((::RPG::Client::ToastQueueModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean IsIgnoreTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_ISIGNORETEXTID_OFFSET))(this, a1);
		}

		::System::Void IgnoreTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_IGNORETEXTID_OFFSET))(this, a1);
		}

		::System::Void ResumeTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_RESUMETEXTID_OFFSET))(this, a1);
		}
	};
}
