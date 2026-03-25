#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18346F80)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__0_OFFSET UNITYSDK_OFFSET(0x18348050)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__1_OFFSET UNITYSDK_OFFSET(0x18348240)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__2_OFFSET UNITYSDK_OFFSET(0x183481E0)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__3_OFFSET UNITYSDK_OFFSET(0x18348200)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__4_OFFSET UNITYSDK_OFFSET(0x18348220)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass55_0_TypeDefinitionIndex = 9617;

	class Promise___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* resultPromise; // 0x10
		::System::Action_1<::System::Exception*>* __9__4; // 0x18
		::System::Func_1<::RPG::Client::Promises::IPromise*>* onResolved; // 0x20
		::System::Action* __9__3; // 0x28
		::System::Action_1<::System::Exception*>* onRejected; // 0x30
		::System::Action_1<::System::Single>* __9__2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _Then_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__0_OFFSET))(this);
		}

		::System::Void _Then_b__2(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__2_OFFSET))(this, progress);
		}

		::System::Void _Then_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__3_OFFSET))(this);
		}

		::System::Void _Then_b__4(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__4_OFFSET))(this, ex);
		}

		::System::Void _Then_b__1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS55_0__THEN_B__1_OFFSET))(this, ex);
		}
	};
}
