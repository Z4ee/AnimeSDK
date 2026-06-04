#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E975A0)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_0__SEQUENCE_B__0_OFFSET UNITYSDK_OFFSET(0x18E98AD0)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass65_0_TypeDefinitionIndex = 9575;

	class Promise___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Int32 count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _Sequence_b__0(::RPG::Client::Promises::IPromise* a1, ::System::Func_1<::RPG::Client::Promises::IPromise*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::Promises::IPromise*, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_0__SEQUENCE_B__0_OFFSET))(this, a1, a2);
		}
	};
}
