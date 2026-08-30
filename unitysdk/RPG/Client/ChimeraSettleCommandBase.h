#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B605C10)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE_EXECUTEBYPROMISE_OFFSET UNITYSDK_OFFSET(0x1B605B60)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B605AB0)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B605DC0)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE__DISPOSEIMPL_OFFSET UNITYSDK_OFFSET(0x1B605D80)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE__EXECUTEBYPROMISEIMPL_OFFSET UNITYSDK_OFFSET(0x1B605D00)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x1B605CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleCommandBase_TypeDefinitionIndex = 63529;

	class ChimeraSettleCommandBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE_EXECUTE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ExecuteByPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE_EXECUTEBYPROMISE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE__EXECUTEIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ExecuteByPromiseImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE__EXECUTEBYPROMISEIMPL_OFFSET))(this);
		}

		::System::Void _DisposeImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE__DISPOSEIMPL_OFFSET))(this);
		}
	};
}
