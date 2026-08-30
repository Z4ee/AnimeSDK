#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65CC90)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS73_0__FINALLY_B__0_OFFSET UNITYSDK_OFFSET(0x1C65E240)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass73_0_TypeDefinitionIndex = 9872;

	class Promise___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Void _Finally_b__0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS73_0__FINALLY_B__0_OFFSET))(this, a1);
		}
	};
}
