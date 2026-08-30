#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMessageSequence; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressStartViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD4A0A50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL___C__DISPLAYCLASS1_0___INIT_B__0_OFFSET UNITYSDK_OFFSET(0xD4A0F40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL___C__DISPLAYCLASS1_0___INIT_B__1_OFFSET UNITYSDK_OFFSET(0xD4A12E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL___C__DISPLAYCLASS1_0___INIT_B__2_OFFSET UNITYSDK_OFFSET(0xD4A1250)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkProgressStartViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 79130;

	class LimaoNewsWorkProgressStartViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsMessageSequence* sequence; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* __4__this; // 0x18
		::System::Action* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void __Init_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL___C__DISPLAYCLASS1_0___INIT_B__0_OFFSET))(this);
		}

		::System::Void __Init_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL___C__DISPLAYCLASS1_0___INIT_B__2_OFFSET))(this);
		}

		::System::Void __Init_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL___C__DISPLAYCLASS1_0___INIT_B__1_OFFSET))(this);
		}
	};
}
