#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B714000)
#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS3_0__SHOWMUSEUMENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1B7142D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumUtils___c__DisplayClass3_0_TypeDefinitionIndex = 66395;

	class MuseumUtils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LuaUIController*>* callback; // 0x10
		::Il2CppArray<::System::Object*>* args; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowMuseumEntrancePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS3_0__SHOWMUSEUMENTRANCEPAGE_B__0_OFFSET))(this);
		}
	};
}
