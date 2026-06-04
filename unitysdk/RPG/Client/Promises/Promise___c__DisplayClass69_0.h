#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E977E0)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_0__RACE_B__0_OFFSET UNITYSDK_OFFSET(0x18E98DD0)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_0__RACE_B__2_OFFSET UNITYSDK_OFFSET(0x18E99080)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_0__RACE_B__3_OFFSET UNITYSDK_OFFSET(0x18E990B0)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass69_0_TypeDefinitionIndex = 9579;

	class Promise___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* progress; // 0x10
		::System::Action* __9__3; // 0x18
		::RPG::Client::Promises::Promise* resultPromise; // 0x20
		::System::Action_1<::System::Exception*>* __9__2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Void _Race_b__0(::RPG::Client::Promises::IPromise* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::IPromise*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_0__RACE_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _Race_b__2(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_0__RACE_B__2_OFFSET))(this, a1);
		}

		::System::Void _Race_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_0__RACE_B__3_OFFSET))(this);
		}
	};
}
