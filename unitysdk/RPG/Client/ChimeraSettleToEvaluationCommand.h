#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B66F0)
#define RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__EXECUTEBYPROMISEIMPL_OFFSET UNITYSDK_OFFSET(0xB6B9DC0)
#define RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xB6B9D50)
#define RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND___IFIXBASEPROXY__EXECUTEBYPROMISEIMPL_OFFSET UNITYSDK_OFFSET(0xB6B9EC0)
#define RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xB6B9E80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleToEvaluationCommand_TypeDefinitionIndex = 59401;

	class ChimeraSettleToEvaluationCommand : public ::RPG::Client::ChimeraSettleCommandBase
	{
	public:
		// static const ::System::String* _EVALUATION_PUZZLE_CUSTOM_STRING; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__EXECUTEIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ExecuteByPromiseImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__EXECUTEBYPROMISEIMPL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy__ExecuteByPromiseImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND___IFIXBASEPROXY__EXECUTEBYPROMISEIMPL_OFFSET))(this);
		}
	};
}
