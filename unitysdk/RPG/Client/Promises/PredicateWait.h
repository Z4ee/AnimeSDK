#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Promises/TimeData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PROMISES_PREDICATEWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD5D30)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PredicateWait_TypeDefinitionIndex = 9843;

	class PredicateWait : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>* predicate; // 0x10
		::RPG::Client::Promises::IPendingPromise* pendingPromise; // 0x18
		::RPG::Client::Promises::TimeData timeData; // 0x20
		::System::Int32 frameStarted; // 0x2C
		::System::Single timeStarted; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PREDICATEWAIT__CTOR_OFFSET))(this);
		}
	};
}
