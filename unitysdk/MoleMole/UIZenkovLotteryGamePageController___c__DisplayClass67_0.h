#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_318;
class Class_3_C3F0E3B5AB5977AE_52;
namespace MoleMole { class UIZenkovLotteryGamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B20B40)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__SENDREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x12B20B50)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__SENDREQUEST_B__2_OFFSET UNITYSDK_OFFSET(0x12B21830)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGamePageController___c__DisplayClass67_0_TypeDefinitionIndex = 66020;

	class UIZenkovLotteryGamePageController___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovLotteryGamePageController* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::Class_3_C3F0E3B5AB5977AE_52* nextResult; // 0x20
		::System::UInt32 nextResultItemId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendRequest_b__0(::Class_3_025FF4981524A424_318* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_318*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__SENDREQUEST_B__0_OFFSET))(this, rsp);
		}

		::System::Void _SendRequest_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__SENDREQUEST_B__2_OFFSET))(this);
		}
	};
}
