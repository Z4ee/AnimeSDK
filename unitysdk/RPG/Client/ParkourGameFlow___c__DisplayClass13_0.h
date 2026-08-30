#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourGameFlow; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_PARKOURGAMEFLOW___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E4670)
#define RPG_CLIENT_PARKOURGAMEFLOW___C__DISPLAYCLASS13_0__ONENTERED_B__0_OFFSET UNITYSDK_OFFSET(0x1C4E6AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlow___c__DisplayClass13_0_TypeDefinitionIndex = 61931;

	class ParkourGameFlow___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* result; // 0x10
		::RPG::Client::ParkourGameFlow* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEntered_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___C__DISPLAYCLASS13_0__ONENTERED_B__0_OFFSET))(this);
		}
	};
}
