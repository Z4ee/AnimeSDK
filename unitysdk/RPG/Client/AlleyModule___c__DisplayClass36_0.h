#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_668FE281FA72D3E8_2;

#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2EEE30)
#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS36_0___FRESHEVENTINFO_B__0_OFFSET UNITYSDK_OFFSET(0xB305FB0)
#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS36_0___FRESHEVENTINFO_B__1_OFFSET UNITYSDK_OFFSET(0xB305FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule___c__DisplayClass36_0_TypeDefinitionIndex = 58234;

	class AlleyModule___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::Class_1_668FE281FA72D3E8_2* inEvent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __FreshEventInfo_b__0(::RPG::Client::AlleyEventInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS36_0___FRESHEVENTINFO_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __FreshEventInfo_b__1(::RPG::Client::AlleyEventInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS36_0___FRESHEVENTINFO_B__1_OFFSET))(this, a1);
		}
	};
}
