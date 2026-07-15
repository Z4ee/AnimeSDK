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

#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_ASYNCSHOW_OFFSET UNITYSDK_OFFSET(0x15BFDD90)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_CREATEUI_OFFSET UNITYSDK_OFFSET(0x15BFDBA0)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x15BFD7A0)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_EXIT_OFFSET UNITYSDK_OFFSET(0x15BFE0B0)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x15BFD710)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15BFD730)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x15BFD820)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x15BFE1A0)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x15BFD720)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_SYNCSHOW_OFFSET UNITYSDK_OFFSET(0x15BFD880)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFD810)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__DESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x15BFE150)
#define RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x15BFE100)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaUIGameFlowContext_TypeDefinitionIndex = 61402;

	class LuaUIGameFlowContext : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::XLua::LuaTable* _Table; // 0x20
		::RPG::Client::LuaUIController* _Controller_k__BackingField; // 0x28
		::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>* _OnMessageReceived; // 0x30

		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIController* get_Controller()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Void set_Controller(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_SET_CONTROLLER_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_GET_NAME_OFFSET))(this);
		}

		static ::RPG::Client::LuaUIGameFlowContext* Create(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::RPG::Client::LuaUIGameFlowContext*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_CREATE_OFFSET))(a1);
		}

		::System::Void Init(::XLua::LuaTable* a1, ::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_INIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* SyncShow(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_SYNCSHOW_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* AsyncShow(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_ASYNCSHOW_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LuaUIController* CreateUI(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_CREATEUI_OFFSET))(this, a1, a2);
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

		::System::Void RPG_Client_IGameFlowMessageReceiver_ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUIGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
