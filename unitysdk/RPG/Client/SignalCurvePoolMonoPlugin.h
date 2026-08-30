#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class SignalCurvePoolBehavior; }
namespace RPG::Client { class SignalCurvePoolEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SIGNALCURVEPOOLMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF883B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalCurvePoolMonoPlugin_TypeDefinitionIndex = 70930;

	class SignalCurvePoolMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::SignalCurvePoolBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* _curves; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
