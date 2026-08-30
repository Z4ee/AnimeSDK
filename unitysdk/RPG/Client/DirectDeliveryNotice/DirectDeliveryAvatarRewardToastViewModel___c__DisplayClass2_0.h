#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeToastData; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTVIEWMODEL___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD79D70)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTVIEWMODEL___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0xCD7A040)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int DirectDeliveryAvatarRewardToastViewModel___c__DisplayClass2_0_TypeDefinitionIndex = 79919;

	class DirectDeliveryAvatarRewardToastViewModel___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::DirectDeliveryNoticeToastData* data; // 0x10
		::System::UInt32 avatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTVIEWMODEL___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTVIEWMODEL___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET))(this);
		}
	};
}
