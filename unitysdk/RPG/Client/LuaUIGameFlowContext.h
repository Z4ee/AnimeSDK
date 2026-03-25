#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_ASYNCSHOW_OFFSET UNITYSDK_OFFSET(0x9A7E5B0)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_CREATEUI_OFFSET UNITYSDK_OFFSET(0x9A7E3B0)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x9A7E0B0)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_EXIT_OFFSET UNITYSDK_OFFSET(0x9A7E7D0)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x9A7E020)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9A7E040)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x9A7E130)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9A7E8C0)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x9A7E030)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_SYNCSHOW_OFFSET UNITYSDK_OFFSET(0x9A7E190)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A7E120)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__DESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x9A7E870)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x9A7E820)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT___IFIXBASEPROXY__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x9A7E930)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaUIGameFlowContext_TypeDefinitionIndex = 52229;

	class LuaUIGameFlowContext : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::RPG::Client::LuaUIController* _Controller_k__BackingField; // 0x20
		::XLua::LuaTable* _Table; // 0x28
		::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>* _OnMessageReceived; // 0x30

		::System::Void _ctor(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__CTOR_OFFSET))(this, gameFlow);
		}

		::RPG::Client::LuaUIController* get_Controller()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Void set_Controller(::RPG::Client::LuaUIController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_SET_CONTROLLER_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_GET_NAME_OFFSET))(this);
		}

		static ::RPG::Client::LuaUIGameFlowContext* Create(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::RPG::Client::LuaUIGameFlowContext*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_CREATE_OFFSET))(gameFlow);
		}

		::System::Void Init(::XLua::LuaTable* table, ::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>* onMessageReceived)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_INIT_OFFSET))(this, table, onMessageReceived);
		}

		::RPG::Client::Promises::IPromise* SyncShow(::System::String* path, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_SYNCSHOW_OFFSET))(this, path, args);
		}

		::RPG::Client::Promises::IPromise* AsyncShow(::System::String* path, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_ASYNCSHOW_OFFSET))(this, path, args);
		}

		::RPG::Client::LuaUIController* CreateUI(::System::String* path, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_CREATEUI_OFFSET))(this, path, args);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_EXIT_OFFSET))(this);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__ONDESTROYED_OFFSET))(this);
		}

		::System::Void _DestroyContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__DESTROYCONTEXT_OFFSET))(this);
		}

		::System::Void RPG_Client_IGameFlowMessageReceiver_ReceiveMessage(::System::Int32 message, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET))(this, message, obj);
		}

		::System::Void __iFixBaseProxy__OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT___IFIXBASEPROXY__ONDESTROYED_OFFSET))(this);
		}
	};
}
