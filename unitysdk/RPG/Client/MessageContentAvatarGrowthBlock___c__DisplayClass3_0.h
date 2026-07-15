#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContentAvatarGrowthBlock; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA1BCC0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK___C__DISPLAYCLASS3_0__REQUESTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1AA1BDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentAvatarGrowthBlock___c__DisplayClass3_0_TypeDefinitionIndex = 60465;

	class MessageContentAvatarGrowthBlock___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::MessageContentAvatarGrowthBlock* __4__this; // 0x10
		::System::Action_1<::System::UInt32>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK___C__DISPLAYCLASS3_0__REQUESTDATA_B__0_OFFSET))(this);
		}
	};
}
