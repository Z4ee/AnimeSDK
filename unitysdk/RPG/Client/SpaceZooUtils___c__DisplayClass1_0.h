#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A0370)
#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS1_0__SHOWSPACEZOOCATTERYPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB1A43A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUtils___c__DisplayClass1_0_TypeDefinitionIndex = 62666;

	class SpaceZooUtils___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LuaUIController*>* callback; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSpaceZooCatteryPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS1_0__SHOWSPACEZOOCATTERYPAGE_B__0_OFFSET))(this);
		}
	};
}
