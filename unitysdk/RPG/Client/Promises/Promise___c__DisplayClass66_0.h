#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E97660)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS66_0__THENRACE_B__0_OFFSET UNITYSDK_OFFSET(0x18E98D80)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass66_0_TypeDefinitionIndex = 9577;

	class Promise___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>* chain; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ThenRace_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS66_0__THENRACE_B__0_OFFSET))(this);
		}
	};
}
