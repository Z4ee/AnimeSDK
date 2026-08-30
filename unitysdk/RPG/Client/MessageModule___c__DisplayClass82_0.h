#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B24BEA0)
#define RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS82_0___TRYSHOWREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x1B24CD80)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageModule___c__DisplayClass82_0_TypeDefinitionIndex = 66121;

	class MessageModule___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* itemDisplayDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryShowReward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS82_0___TRYSHOWREWARD_B__0_OFFSET))(this);
		}
	};
}
