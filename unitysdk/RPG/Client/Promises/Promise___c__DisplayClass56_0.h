#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65BE50)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS56_0__THEN_B__0_OFFSET UNITYSDK_OFFSET(0x1C65D730)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS56_0__THEN_B__1_OFFSET UNITYSDK_OFFSET(0x1C65D770)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass56_0_TypeDefinitionIndex = 9860;

	class Promise___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* resultPromise; // 0x10
		::System::Action* onResolved; // 0x18
		::System::Action_1<::System::Exception*>* onRejected; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void _Then_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS56_0__THEN_B__0_OFFSET))(this);
		}

		::System::Void _Then_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS56_0__THEN_B__1_OFFSET))(this, a1);
		}
	};
}
