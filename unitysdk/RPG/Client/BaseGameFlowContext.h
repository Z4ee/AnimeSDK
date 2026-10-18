#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }

#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0xC7E97C0)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_DETACHFROM_OFFSET UNITYSDK_OFFSET(0xC7E9670)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xC7E9770)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xC7E9790)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_SET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xC7E9780)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xC7E97A0)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC7E97B0)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xC7E98C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGameFlowContext_TypeDefinitionIndex = 64325;

	class BaseGameFlowContext : public ::System::Object
	{
	public:
		::RPG::Client::BaseGameFlow* _GameFlow_k__BackingField; // 0x10
		::System::Boolean _IsDestroyed_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::BaseGameFlow* get_GameFlow()
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_GET_GAMEFLOW_OFFSET))(this);
		}

		::System::Void set_GameFlow(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_SET_GAMEFLOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_SET_ISDESTROYED_OFFSET))(this, a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_DESTROY_OFFSET))(this);
		}

		::System::Void DetachFrom(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_DETACHFROM_OFFSET))(this, a1);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT__ONDESTROYED_OFFSET))(this);
		}
	};
}
