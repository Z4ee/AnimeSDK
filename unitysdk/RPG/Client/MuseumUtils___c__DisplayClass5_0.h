#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD906D20)
#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__SHOWMUSEUMMARKETPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xD906DF0)
#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__SHOWMUSEUMMARKETPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xD906F70)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumUtils___c__DisplayClass5_0_TypeDefinitionIndex = 66397;

	class MuseumUtils___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::Action_1<::RPG::Client::LuaUIController*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowMuseumMarketPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__SHOWMUSEUMMARKETPAGE_B__0_OFFSET))(this);
		}

		::System::Void _ShowMuseumMarketPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__SHOWMUSEUMMARKETPAGE_B__1_OFFSET))(this);
		}
	};
}
