#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__0_OFFSET UNITYSDK_OFFSET(0x1EFD99E0)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__1_OFFSET UNITYSDK_OFFSET(0x1EFD9A00)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__2_OFFSET UNITYSDK_OFFSET(0x1EFD9B50)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD7460)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass45_0_TypeDefinitionIndex = 9857;

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

		::System::Void _Catch_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__1_OFFSET))(this, a1);
		}

		::System::Void _Catch_b__2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS45_0__CATCH_B__2_OFFSET))(this, a1);
		}
	};
}
