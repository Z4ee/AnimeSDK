#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_0__ALL_B__0_OFFSET UNITYSDK_OFFSET(0x18348360)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_0__ALL_B__3_OFFSET UNITYSDK_OFFSET(0x18348530)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18347220)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass62_0_TypeDefinitionIndex = 9621;

	class Promise___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* progress; // 0x10
		::System::Action_1<::System::Exception*>* __9__3; // 0x18
		::RPG::Client::Promises::Promise* resultPromise; // 0x20
		::System::Int32 remainingCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _All_b__0(::RPG::Client::Promises::IPromise* promise, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::IPromise*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_0__ALL_B__0_OFFSET))(this, promise, index);
		}

		::System::Void _All_b__3(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_0__ALL_B__3_OFFSET))(this, ex);
		}
	};
}
