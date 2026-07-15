#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x190B0410)
#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS4_0__SHOWMUSEUMATLASPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x190B05E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumUtils___c__DisplayClass4_0_TypeDefinitionIndex = 63411;

	class MuseumUtils___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LuaUIController*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowMuseumAtlasPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS4_0__SHOWMUSEUMATLASPAGE_B__0_OFFSET))(this);
		}
	};
}
