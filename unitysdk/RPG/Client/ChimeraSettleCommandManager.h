#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraSettleCommand; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC09EF0)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_DEQUEUE_OFFSET UNITYSDK_OFFSET(0xCC0A290)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC09E50)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_ENQUEUE_OFFSET UNITYSDK_OFFSET(0xCC0A090)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_EXECUTEBYPROMISE_OFFSET UNITYSDK_OFFSET(0xCC0A420)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCC0A120)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_IMMEDIATELYEXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0xCC09F70)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xCC09DC0)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER_PEEK_OFFSET UNITYSDK_OFFSET(0xCC0A210)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC09DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleCommandManager_TypeDefinitionIndex = 63520;

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
