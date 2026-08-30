#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196E49F0)
#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS2_0__SHOWSPACEZOODELETEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x196E89A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUtils___c__DisplayClass2_0_TypeDefinitionIndex = 67974;

	class SpaceZooUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LuaUIController*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSpaceZooDeletePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS2_0__SHOWSPACEZOODELETEPAGE_B__0_OFFSET))(this);
		}
	};
}
