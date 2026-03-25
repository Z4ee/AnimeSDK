#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4AF8C0)
#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS3_0__SHOWSPACEZOOBAGPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xA4B2DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUtils___c__DisplayClass3_0_TypeDefinitionIndex = 55475;

	class SpaceZooUtils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LuaUIController*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSpaceZooBagPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS3_0__SHOWSPACEZOOBAGPAGE_B__0_OFFSET))(this);
		}
	};
}
