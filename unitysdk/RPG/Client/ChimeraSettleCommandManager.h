#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraSettleCommand; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x19B09FE0)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x19B0A380)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B09F40)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x19B0A180)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_EXECUTEBYPROMISE_OFFSET UNITYSDK_OFFSET(0x19B0A510)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19B0A210)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_IMMEDIATELYEXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0x19B0A060)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x19B09EB0)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_PEEK_OFFSET UNITYSDK_OFFSET(0x19B0A300)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B09EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleCommandManager_TypeDefinitionIndex = 60667;

	class ChimeraSettleCommandManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::RPG::Client::IChimeraSettleCommand*>* _PendingCommand; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ImmediatelyExecuteCommand(::RPG::Client::ChimeraSettleCommandType a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChimeraSettleCommandType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_IMMEDIATELYEXECUTECOMMAND_OFFSET))(this, a1);
		}

		::System::Void Enqueue(::RPG::Client::IChimeraSettleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IChimeraSettleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_ENQUEUE_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_EXECUTE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ExecuteByPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_EXECUTEBYPROMISE_OFFSET))(this);
		}

		::System::Void Dequeue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_DEQUEUE_OFFSET))(this);
		}

		::RPG::Client::IChimeraSettleCommand* Peek()
		{
			return ((::RPG::Client::IChimeraSettleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_PEEK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_CLEAR_OFFSET))(this);
		}
	};
}
