#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarDevelopActionSelectControl; }
namespace RPG::Client::B51Racing { class B51RacingDevelopActionResultViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EDF120)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C__DISPLAYCLASS75_0___SETTOASTITEMTRAILFINISHCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x19EE0600)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopActionSelectControl___c__DisplayClass75_0_TypeDefinitionIndex = 80472;

	class B51RacingCarDevelopActionSelectControl___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDevelopActionResultViewModel* result; // 0x10
		::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectControl* __4__this; // 0x18
		::System::Int32 capturedIndex; // 0x20
		::System::Int32 statIndex; // 0x24
		::System::Boolean isLast; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
		}

		::System::Void __SetToastItemTrailFinishCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C__DISPLAYCLASS75_0___SETTOASTITEMTRAILFINISHCALLBACK_B__0_OFFSET))(this);
		}
	};
}
