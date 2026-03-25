#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__0_OFFSET UNITYSDK_OFFSET(0x18347EF0)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__1_OFFSET UNITYSDK_OFFSET(0x18347F10)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__2_OFFSET UNITYSDK_OFFSET(0x18348030)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183466E0)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass45_0_TypeDefinitionIndex = 9615;

	class Promise___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* resultPromise; // 0x10
		::System::Action_1<::System::Exception*>* onRejected; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _Catch_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__0_OFFSET))(this);
		}

		::System::Void _Catch_b__1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__1_OFFSET))(this, ex);
		}

		::System::Void _Catch_b__2(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__2_OFFSET))(this, v);
		}
	};
}
