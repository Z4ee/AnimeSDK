#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE5BC0)
#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS6_0___WAITFOR_B__0_OFFSET UNITYSDK_OFFSET(0x16FE5BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DTransition___c__DisplayClass6_0_TypeDefinitionIndex = 72929;

	class UI3DTransition___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void __WaitFor_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS6_0___WAITFOR_B__0_OFFSET))(this);
		}
	};
}
