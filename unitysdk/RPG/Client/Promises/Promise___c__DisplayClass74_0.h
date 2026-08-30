#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS74_0__CONTINUEWITH_B__0_OFFSET UNITYSDK_OFFSET(0x1C65E370)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65CF10)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass74_0_TypeDefinitionIndex = 9873;

	class Promise___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Void _ContinueWith_b__0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS74_0__CONTINUEWITH_B__0_OFFSET))(this, a1);
		}
	};
}
